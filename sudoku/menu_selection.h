#ifndef MENU_SELECTION
#define MENU_SELECTION

#include <iostream>
#include <vector>
#include <string>


int menu_choice(std::vector<std::string> options, std::vector<bool> flagged = {}, std::string flag_means = "");
bool vector_contains(std::vector<int> check_in_me, int value);


#endif // MENU_SELECTION