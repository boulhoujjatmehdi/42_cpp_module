/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:01:26 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/25 14:13:06 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


// int  split(MyMap& input, string line)
// {
//     (void)input;
//     // cout << "line find:" << line.find('|') << endl;
//     size_t pos = line.find('|');
//     size_t idx = input.size();
//     if(idx != std::string::npos)
//     {
//         string date = line.substr(0, pos - 1);
//         string value = line.substr(pos + 1, line.size()-1);
//         input[std::make_pair(date, std::atof(value.c_str()))] = idx;
//     }
//     else
//         return 1;
//     return 0;
// }



int check_date(string date)
{
    int year, month, day;
    int ret = 0;
    year = std::atoi(date.substr(0,4).c_str());
    month = std::atoi(date.substr(5, 2).c_str());
    day = std::atoi(date.substr(8, 2).c_str());

    std::time_t currTime = std::time(NULL);
    std::tm* locTime = std::localtime(&currTime);
    int tYear, tMonth, tDay;
    tYear = locTime->tm_year + 1900;
    tMonth = locTime->tm_mon + 1;
    tDay = locTime->tm_mday;
    if(tYear < year && (ret = 4))
        goto endd;
    if(tYear == year)
    {
        if(tMonth < month && (ret = 5))
        {
            goto endd;
        }
        else if(tMonth == month && tDay < day && (ret = 6))
        {
            goto endd;
        }
    }
    endd:
    return ret;
}

int check_value(float value, string sValue)
{

    std::ostringstream sstrm;
    sstrm << value;
    // cout << "<" << value << ">" << "<" << sValue << ">" << endl;
    if(sstrm.str() != sValue)
        return 1;
    if(value < 0)
        return 8;
    if(value > 1000 )
        return 9;
    return 0;
}

int check_date_value(string date, float value,string sValue, string line)
{
    int ret = 0;
    if((date.length() != 10 || !(date[4] == '-') || !(date[7] == '-') ) && (ret = 1) )
        goto endd;
    for (size_t i = 0 ; date.length() - 1 > i ; i++)
    {
        if(i != 4 && i != 7 && !std::isdigit(date[i]) && (ret = 2) )
            goto endd;
    }
    if(!(ret = check_date(date)))
        ret = check_value(value, sValue);
    endd:
    if(ret == 8)
        cout << "Error: not a positive number."<< endl;
    else if(ret == 9)
        cout << "Error: too large a number."<< endl;
    else if(ret)
        cout << "Error: bad input: " << ret<< ": "<< line<< endl;
    return ret;
}

void executeInput(std::ifstream& istrm,MyMap data)
{
    string line;
    std::getline(istrm, line);
    if(line != "date | value")
        cout << "Error: first line should be \"date | value\" " << endl;//TODO: CHECK WAHT TO DO IN THIS CASE
    while(std::getline(istrm, line))
    {
        size_t pos = line.find('|');
        if(pos != std::string::npos)
        {
            string date = line.substr(0, pos);
            if(date[pos - 1] != ' ')
            {
                cout << "Error: bad input 3: ["<<line<<"]" << endl;
                continue;
            }
            else
                date = line.substr(0, pos-1);
            float value =std::atof(line.substr(pos + 2, line.size()-1).c_str());
            if(check_date_value(date, value, line.substr(pos + 2, line.size()-1), line))
                continue;
            MyMap::iterator it = data.upper_bound(date);
            if(it == data.begin() && date < it->first)
            {
                cout << "Error: date not found in data"<< endl;
                continue;
            }
            else if (it != data.begin())
                --it;
            cout << date << " => " << value << " = " << value * it->second<< endl;
        }
        else
            cout << "Error: bad input 7: ["<< line<<']'<< endl;
    }
}

void read_data(std::ifstream& istrm, MyMap& data)
{
    string line;
    std::getline(istrm, line);
    while(std::getline(istrm, line))
    {
        size_t pos = line.find(',');
        size_t idx = data.size();
        if(idx != std::string::npos)
        {
            string date = line.substr(0, pos );
            string value = line.substr(pos + 1, line.size()-1);
            data[date] = std::atof(value.c_str());
            
        }
    }
}

void  open_files(char* infile, streams& strms)
{
    std::ifstream infileStream;
    strms.first.open(infile);
    if(!strms.first.is_open())
        throw "infile error!!";
    string line;
    static std::ifstream dataFileStream;
    strms.second.open("data.csv");
    if(!strms.second.is_open())
        throw "check data file!!";
}