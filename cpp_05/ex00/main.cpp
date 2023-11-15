

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat ay("ayac" , 1);
        ay.incrementGrade();

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}