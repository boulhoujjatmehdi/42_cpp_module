#include "ScalarConverter.hpp"



void ScalarConverter::convert(string str)
{
    char* rest;
    double num = strtod(str.c_str(), &rest);
    cout << "rest :"<< rest<< endl <<"num : " << num << endl;
    

}