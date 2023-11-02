

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat br("mehdi");
        for(int i = 0; i < 150; i++)
        {
            br.incrementGrade();
            cout << br<< endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}