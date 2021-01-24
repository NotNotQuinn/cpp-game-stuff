// COMPILE WITH C++ 11
// command:
// g++ filename -o outputfile -std=c++11

#include <string>
#include <vector>
#include <iostream>
#include "menu_selection.h"


using std::vector;
using std::string;



int main()
{
    vector<string> choices = {"One", "Two", "Three"};
    vector<bool> choices_flagged = {1, true, false};
    
    // ask user question
    std::cout << "For demonstration purposes, pick any one." << std::endl;

    // use function
    int res = menu_choice(choices, choices_flagged, "Custom Flag");

    // respond to user action
    std::cout << std::endl << "You picked index " << res << std::endl;
}