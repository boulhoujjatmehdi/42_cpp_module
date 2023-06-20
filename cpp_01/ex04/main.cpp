

#include <iostream>
#include <fstream>
#include <cstdlib>

#include <string>
using namespace std;

int main(int ac, char **av)
{
    if(ac == 4 && av[1][0])
    {
        ifstream inf(av[1]);
        if(!inf.is_open())
        {
            cerr << "file not found"<< endl;
            exit(1);
        }
        string str;
        string name(av[1]);
        ofstream outFile((name + ".replace"));
        if(!outFile.is_open())
            return 1;

        getline(inf, str, '\0');
            for (int i = 0; (unsigned long)i < str.length() ; i++)
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
