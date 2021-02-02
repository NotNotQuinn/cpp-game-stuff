#ifndef MENU_SELECTION
#define MENU_SELECTION

#include <iostream>
#include <vector>
#include <string>


int menu_choice(std::vector<std::string> options, std::vector<bool> flagged = {}, std::string flag_means = "");
template <typename T>
bool vector_contains(std::vector<T> check_in_me, T value);


#endif // MENU_SELECTION