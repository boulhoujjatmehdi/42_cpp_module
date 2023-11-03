

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat br("mehdi");
    br.incrementGrade();
    cout << br << endl;
    Form fr;
    br.signForm(fr);
}