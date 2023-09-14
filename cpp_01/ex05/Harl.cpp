#include "Harl.hpp"

void Harl::debug( void ){
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< endl;
}

void Harl::info( void ){
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning( void ){
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< endl;
}

void Harl::error( void ){
    cout << "This is unacceptable! I want to speak to the manager now."<< endl;
}

void Harl::complain(string level){

    std::map<std::string, void(Harl::*)()> myMap;

    myMap["DEBUG"] = &Harl::debug;
    myMap["INFO"] = &Harl::info;
    myMap["WARNING"] = &Harl::warning;
    myMap["ERROR"] = &Harl::error;

    Harl obj;
    if(!(myMap.find(level) == myMap.end()))
        (obj.*(myMap[level]))();

}