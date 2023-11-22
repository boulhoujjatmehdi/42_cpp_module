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
    if(s1 == -1 || s2 > 127 || s2 < 0)
        cout << "char: "<< "impossible" << endl;
    else if(s1 == -2)
        cout << "char: "<< "Non displayable" << endl;
    else
        cout << "char: '"<< static_cast<char>(s1)<<"'" << endl;


    if(s2 == UINT32_MAX)
        cout << "int: impossible" << endl;
    else if(s2 == static_cast<double>(UINT32_MAX) + 1)
    {
        cout << "int: inf" << endl;
    }
    else
        cout << "int: "<< static_cast<int>(s2) << endl;
    std::ostringstream strm;
    strm << static_cast<float>(s3);
    string str0 = strm.str();

    string str1 = ((str0 != "-inf" && str0 != "inf") && s3 == floor(s3))? ".0":"";
    string str2 = (str0 != "-inf" && str0 != "inf")? "f": "";
    strm.str("");
    strm << static_cast<double>(s4);
    string dbl = strm.str();
    cout << "float: "<< static_cast<float>(s3) <<str1 << str2 << endl;
    str1 = (dbl != "inf" && dbl != "-inf" && s4 == floor(s4))? ".0":"";
    cout << "double: "<< s4 <<str1<< endl;
}

bool my_isnan(double value)
{
    return (value != value);
}

void ScalarConverter::convert(string str)
{
    char* rest;
    long double nanDouble = strtod("nan", &rest);
    (void)nanDouble;
    long double numInt;
    long double num = strtod(str.c_str(), &rest);
    string strRest(rest);

    numInt = num > INT32_MAX || num < INT32_MIN ? UINT32_MAX: num;
    if(my_isnan(num))
        setTypes(-1, UINT32_MAX, num , num);
    else
    if ((str == strRest && str.length() != 1))
        setTypes(-1 , UINT32_MAX , nanDouble , nanDouble);
    else if(!str.empty())
    {
        if(num)
        {
            if(strRest.empty() || (strRest.length() == 1 && strRest[0] == 'f'))
            {
                if(std::isprint(num))
                    setTypes(num, numInt, num, num);
                else
                    setTypes(-2, numInt, num, num);
            }
            else if(strRest.length() > 1 || (strRest.length() == 1 && strRest[0] != 'f'))
            {
                setTypes(-1 , UINT32_MAX, nanDouble , nanDouble);
            }
        }
        else if(num == 0 && str[0] == '0' && strRest.empty())
        {
            setTypes(-2, numInt, num, num);
        }
        else if(strRest.length() == 1)
        {
            double nb = strRest[0];
            setTypes(nb, nb , nb, nb);
        }
    }
}


ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
    *this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
    if (this != &src)
    {}
    return *this;
}

ScalarConverter::~ScalarConverter()
{
}