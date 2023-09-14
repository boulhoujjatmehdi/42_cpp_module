

#include <iostream>
#include <fstream>
#include <cstdlib>

#include <string>
#include <cstring>

using std::string;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::cerr;

int main(int ac, char **av)
{
    if(ac == 4 && av[1][0])
    {
        ifstream inf(av[1]);
        if(!inf.is_open())
        {
            cerr << "file not found"<< endl;
            exit(127);
        }
        string str;
        string name(av[1]);
        string st = name + ".replace";
        ofstream outFile(st.c_str());
        if(!outFile.is_open())
        {
            cerr << ".replace file not created";
            exit(1);
        }

        getline(inf, str, '\0');
        for (unsigned int i = 0; i < str.length() ; i++)
        {
            if(!strncmp(&str[i], av[2], strlen(av[2]))&& av[2][0])
            {
                outFile << av[3];
                i+= strlen(av[2])-1;
            }
            else
                outFile << str[i];
        }
        return 0;
    }
    return 1;
}