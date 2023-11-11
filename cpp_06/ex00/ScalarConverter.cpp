#include "ScalarConverter.hpp"

struct types
{
    string char_;
    string int_;
    string float_;
    string double_;
};

void setTypes(double s1, double  s2, double s3, double s4)
{
    if(s1 == -1)
        cout << "char: "<< "impossible" << endl;
    else if(s1 == -2)
        cout << "char: "<< "Non displayable" << endl;
    else
        cout << "char: "<< static_cast<char>(s1)<< endl;


    if(s2 == (double)INT32_MAX + 1)
        cout << "int: "<< "impossible" << endl;
    else
        cout << "int: "<< s2 << endl;
    
    cout << "float: "<< s3 << endl;
    cout << "double: "<< s4 << endl;
}


void ScalarConverter::convert(string str)
{
    struct types tp;
    char* rest;
    double num = strtod(str.c_str(), &rest);
    cout << "rest :"<< rest <<" -- num : " << num << endl;
    string strRest(rest);
    (void)num;
    if ((str == strRest && str.length() != 1) || (num && !strRest.empty()))
        setTypes(-1 , (double)INT32_MAX + 1, std::numeric_limits<double>::quiet_NaN() , std::numeric_limits<float>::quiet_NaN());
    else if(!str.empty() )
    {
        if(num)
        {
            if(strRest.empty() || (strRest.length() == 1 && strRest[0] == 'f'))
            {
                if(std::isprint(num))
                    setTypes(num, num, num, num);
                else 
                    setTypes(-2, num, num, num);
            }
        }
    }
    else if(!num)
    {
        
    }
}