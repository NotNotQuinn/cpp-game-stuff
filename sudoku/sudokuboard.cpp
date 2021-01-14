#include <string>
#include <iostream>

int main()
{
    bool user_quit = false;
    bool entered_menu = false;
    int menu_selection = -1;

    // welcome message
    std::cout << "Welcome to my game collection!" << std::endl << std::endl;  // one empty line

    while (!user_quit)
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
        

        std::cout
            << std::endl
            << "   [0]    Exit application"  << std::endl
            << "   [1]*   Sudoku"  << std::endl
            << "   [2]*   Guess the number"  << std::endl
            << std::endl
            << "* = planned" << std::endl
            << std::endl
            << "Please select one: ";
        
        std::cin >> menu_selection // stops for input
        while ( menu_selection != 0 &&
                menu_selection != 1 &&
                menu_selection != 2    )
        {
            std::cout
                << "Please select a valid option: ";
            std::cin >> menu_selection // doesnt stop??? why??????
        }
        

        
        
        
    }
}
