// COMPILE WITH C++ 11
// command:
// g++ filename -o outputfile -std=c++11

#include <string>
#include <vector>
#include <iostream>  // input/output
#include <ctime>     // time stuff, for seeding randomness
#include <cstdlib>   // for randomness
#include "menu_selection.h"


using std::vector;
using std::string;


bool user_quit = false;
vector<bool> games_played = {false, false, false};
vector<string> games_list = {"Menu", "Sudoku", "Guess Num"};
bool user_played_any_game = false;
bool user_played_guess_num = false;
bool entered_menu = false;
int menu_selection = -1;

void play_sudoku();
void play_guess_num();


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

        vector<string> valid_menu_options = {"Quit", "Sudoku", "Guess a number"};

        menu_selection = menu_choice(valid_menu_options, {0, 1, 1}, "Planned");


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


void play_sudoku()
{
    user_played_any_game = true;
    
    // not implemented (im thinking a vector of vectors of ints for the board (syntax like so: `sudokuboard[3][1]`))
}

void play_guess_num()
{
    user_played_any_game = true;

    int answer = rand() % 501;  // int 0 to 500
    vector<int> guesses;
    string back = user_played_guess_num ? "" : " back";

    std::cout << "Welcome" << back << " to the guessing game!" << std::endl;



    user_played_guess_num = true;
}
