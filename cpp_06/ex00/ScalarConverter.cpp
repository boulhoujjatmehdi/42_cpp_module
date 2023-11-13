#include "ScalarConverter.hpp"

struct types
{
    string char_;
    string int_;
    string float_;
    string double_;
};
#include <iomanip>
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

    string str1 = (!std::isinf(static_cast<float>(s3)) && s3 == floor(s3))? ".0":"";
    string str2 = (std::isinf(static_cast<float>(s3)))? "": "f";
    cout << "float: "<< static_cast<float>(s3) <<str1 << str2 << endl;
    str1 = (!std::isinf(static_cast<double>(s4)) && s4 == floor(s4))? ".0":"";
    cout << "double: "<< s4 <<str1<< endl;
}
void ScalarConverter::convert(string str)
{
    struct types tp;
    char* rest;
    long double numInt;
    long double num = strtod(str.c_str(), &rest);
    string strRest(rest);
    cout << std::setprecision(7);
    numInt = num > INT32_MAX || num < INT32_MIN ? UINT32_MAX: num;
    if ((str == strRest && str.length() != 1))
        setTypes(-1 , UINT32_MAX , std::numeric_limits<double>::quiet_NaN() , std::numeric_limits<float>::quiet_NaN());
    else if(!str.empty())
    {
        cout<< "not empty"<< endl;
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
                setTypes(-1 , UINT32_MAX, std::numeric_limits<double>::quiet_NaN() , std::numeric_limits<float>::quiet_NaN());
            }
        }
        else if(num == 0 && str[0] == '0' && strRest.empty())
        {
            cout << "mehdi"<< numInt<<  endl;
            setTypes(-2, numInt, num, num);
        }
        else if(strRest.length() == 1)
        {
            double nb = strRest[0];
            setTypes(nb, nb , nb, nb);
        }
    }
}