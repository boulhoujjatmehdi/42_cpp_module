

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat br("MEHDI", 101);
    cout << br << endl;
    Form fr("_FORM_", 100, 99);
    cout << fr << endl;
    br.signForm(fr);
}