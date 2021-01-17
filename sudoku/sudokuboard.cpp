// COMPILE WITH C++ 11
// command:
// g++ filename -o outputfile -std=c++11

#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>


using std::vector;
using std::string;


bool user_quit = false;
bool user_played_any_game = false;
bool entered_menu = false;
int menu_selection = -1;

void play_sudoku();
void play_guess_num();
bool vector_contains(vector<int>, int);

int main()
{   
    srand(time(NULL));  // seed random numbers with something to do witht time so its sort of random

    // welcome message
    std::cout << "Welcome to my game collection! Enjoy!" << std::endl << std::endl;  // one empty line

    do
    {
        // menu & games

        if(!entered_menu)
        {
            // First entry text
            std::cout << "These are the games we have availible:"  << std::endl;
        }
        else
        {
            // Returning to menu from game
            std::cout << "Welcome back, these are the games we have availible:"  << std::endl;
        }
        entered_menu = true;

        vector<int> valid_menu_options = {0, 1, 2};
        std::cout
            << std::endl
            << "   [0]    Exit application"  << std::endl
            << "   [1]*   Sudoku"  << std::endl
            << "   [2]*   Guess the number"  << std::endl
            << std::endl
            << "* = planned" << std::endl
            << std::endl
            << "Please select one: ";

        std::cin >> menu_selection; // stops for input


        while ( !vector_contains(valid_menu_options, menu_selection) )
        {
            std::cout
                << "Please select a valid option: ";
            if(! std::cin >> menu_selection)  // doesnt stop??? why??????
            {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                // they typed a letter, sooooooooooooooo
                // it would break because were trying to get an integer and cin
                // wont let us do that, leaving the string in the unput stream
                // and restarting, then printing over and over
            }
        }

        switch (menu_selection)
        {
            case 0:
                user_quit = true;
                break;
            case 1:
                play_sudoku();
                break;
            case 2:
                play_guess_num();
                break;
            default:
                std::cout << "Something may have gone wrong.";
                break;
        }

    }
    while (!user_quit);
    if (!user_played_any_game)
    {
        std::cout
            << "Wow, leaving so early... didnt even play a game." << std::endl;
    }
    else
    {
        std::cout
            << "Cya later then! Hope you had fun." << std::endl;
    }
    

}

bool vector_contains(vector<int> check_in_me, int value)
{
    for(int i = 0; i > check_in_me.size(); i++)
    {
        if (check_in_me[i] == value)
        {
            return true;
        }
    }
    return false;
}

void play_sudoku()
{
    user_played_any_game = true;
    
    // not implemented (im thinking a vector of vectors of ints for the board (syntax like so: `sudokuboard[3][1]`))
}

void play_guess_num()
{
    user_played_any_game = true;
    // not implemented
}