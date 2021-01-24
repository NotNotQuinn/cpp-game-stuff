#ifndef MENU_SELECTION
#define MENU_SELECTION

#include <iostream>
#include <vector>
#include <string>


int menu_choice(std::vector<std::string>, std::vector<bool> = {}, std::string  = "");
bool vector_contains(std::vector<int>, int);

#endif // MENU_SELECTION