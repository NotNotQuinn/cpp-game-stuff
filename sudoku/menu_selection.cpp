// COMPILE WITH C++ 11
// command:
// g++ filename -o outputfile -std=c++11

#include <string>
#include <vector>
#include <iostream>
#include "menu_selection.h"


using std::vector;
using std::string;


int menu_choice(vector<string> options, vector<bool> flagged/* ={} */, string flag_means/* ="" */)
{
    /**
     * returns the index of the item the user chose from the `options` vector.
     * `flagged` must be the same size as `options`, and any index that is true 
     * in `flagged` will have the * next to there option. (being "flagged")
     * 
     * the `flag_means` will be displayed at the bottom telling them what it means
     * when an option is flagged.
     */

    int selection = -1;
    vector<int> valid_options;
    bool flags_enabled = flagged.size() != 0;
    int loops = 0;
    
    if(options.size() != flagged.size() && flags_enabled)
    {
        throw "Options and flagged peramiters must be of the same size";  
        // no clue if this is how this works, or if it does work at all
    }

    std::cout << std::endl;  // one blank line at the start
    do
    {

        if (loops % 5 == 0)
        {
            std::cout << std::endl;
            for(int i = 0;i < options.size();i++)
            {
                valid_options.push_back(i);  // add current index to valid options
                string flag = " ";

                if (flags_enabled)
                {
                    flag = flagged[i] ? "*" : " ";
                }
                
                std::cout << "   [" << i << "]" << flag << "   " << options[i] << std::endl;
            }
            std::cout << std::endl;
            if (flags_enabled)
            {
                std::cout             
                    << "* = " << flag_means << std::endl
                    << std::endl;
            }
        }

        if (loops == 0)
        {
            std::cout << "Please select one: ";
        }
        else
        {
            std::cout << "Please select a valid option: ";
        }
        
        if(std::cin >> selection)
        {
            if (vector_contains(valid_options, selection))
            {
                return selection;
            }
        }
        else
        {
            selection = -1;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            // they typed a letter, sooooooooooooooo
            // it would break because were trying to get an integer and cin
            // wont let that happen, leaving the string in the unput stream
            // and restarting, then printing over and over

            // this only clears 10k chars but I doubt someoen will do that
            // (although I can imagine it COULD happen)
        }

        loops++;
    }
    while(!vector_contains(valid_options, selection));
    return selection;
}



bool vector_contains(vector<int> check_in_me, int value)
{
    for(int i = 0; i < check_in_me.size(); i++)
    {
        if (check_in_me[i] == value)
        {
            return true;
        }
    }
    return false;
}
