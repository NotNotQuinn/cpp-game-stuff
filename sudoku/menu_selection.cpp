// COMPILE WITH C++ 11
// command:
// g++ filename -o outputfile -std=c++11

#include <string>
#include <vector>
#include <iostream>
#include "menu_selection.h"


using std::vector;
using std::string;


/*

TODO(?):
    -   When the flagged vector is all falses, dont show flags

    -   Take in the prompt and resend it as well as the options on % 5 

    -   Add a note thing, to give more info about a group of options

    -   Keep it so the only NEEDED thing is the options

    -   (built in?) letter options, q to quit?, what do we return then? -1?
            opt in? e.g. settings = {false, false, false, false, false} defalts?
            configurable? I would need a hashtable, I dont know those in cpp yet tho
                e.g. letter_options = {'q': "Quit", 'u': "urmom", 'l', "aughing Out Loud"}
                would it be displayed in one of these ways?
                    -   *[L]aughing Out Loud
                        *[Q]Quit
                        *[U]urmom
                    or
                    -   *[L]    aughing Out Loud
                        *[Q]    Quit
                        *[U]    urmom
                would we force all caps? it would look nicer
                how would we check if there arent l and L as options?

*/


// a better function name could be `user_choose`
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
        // it shows this:

        // terminate called after throwing an instance of 'char const*'
        // Aborted

        // not the best but it works.
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
            if (vector_contains<int>(valid_options, selection))
            {
                return selection;
            }
        }
        else
        {
            selection = -1;
        }

        // always clear after input,
        // this makes sure if someone typed "0 0 0 0 0 0 0 0 0" 
        // the first 0 would be captured, and the rest get cleared.
        // rather than being left in the input buffer
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        
        loops++;
    }
    while(!vector_contains<int>(valid_options, selection));
    return selection;
}


template <typename T>
bool vector_contains(vector<T> check_in_me, T value)
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
