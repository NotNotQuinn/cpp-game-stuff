#include "sudoku.h"
#include <algorithm>
#include <iostream>
#include <regex>
#include <iterator>
#include "menu_selection.h"

using std::vector;
using std::string;


void SudokuGame::play()
{   
    int loops = 0;
    bool game_end = false;
    std::cout << "lol, welcome to danksudoku.\n";
    do
    {
        std::cout << *this << std::endl;
        if (loops != 0)
        {
            std::cout << "nice move, I think, lol.";
        }
        string choice = choose_sudoku_point();
    }while(!game_end);

}


void SudokuGame::set_square( int row, int col, int value )
{

}


string SudokuGame::get_board_display_string()
{
    string out;
    std::string horiz_bar = "+---+---+---+---+---+---+---+---+---+";
    out += horiz_bar + "\n";

    vector<vector<int>> board = get_board();
    for(int i = 0; i < board.size();i++)
    {

        for ( int value : board[i] )
        {
            string _value_str(1, '0' + value);
            string display_value = value == 0 ? " " : (string) _value_str;
            string vert = "|";
            out += vert + " " + (string) display_value + " ";
        }
        out += "|";
        out += "\n";
        string end = i == board.size() - 1 ? "" : "\n";
        out += horiz_bar + end;
    }
    return out;
}


std::ostream& operator << (std::ostream& out, SudokuGame sudoku)
{
    std::string bottom_nav =  "    a   b   c   d   e   f   g   h   i";
    std::string side_nav = " 9 8 7 6 5 4 3 2 1 ";

    string board = sudoku.get_board_display_string();

    vector<string> board_lines = split_string(R"(\n)", board);
    for(int i = 0; i < board_lines.size(); i++)
    {
        out << side_nav[i] << ' ' << board_lines[i] << std::endl;
    }

    out << bottom_nav;
    return out;
}


std::vector<std::vector<int> > SudokuGame::get_board()
{
    return game_board;
}


SudokuGame::SudokuGame()
{

}


vector<string> split_string(string in_pattern, string& content)
{
    vector<string> split_content;

    std::__cxx11::regex pattern(in_pattern);
    copy( std::__cxx11::sregex_token_iterator(content.begin(), content.end(), pattern, -1),
    std::__cxx11::sregex_token_iterator(),back_inserter(split_content));  
    return split_content;
}


std::string SudokuGame::choose_sudoku_point()
{
    int bad_loops = 0;
    int loops = 0;
    std::string _choice;
    std::map<string, string> input_commands;
    std::map<string, string> input_commands_aliases;
    input_commands.insert(std::pair<string, string>("help", "This is a sample help information."));
    input_commands.insert(std::pair<string, string>("?", "help"));

    std::regex valid_sudoku_option (R"(^[a-i][1-9]$)");
    do
    {
        if (( bad_loops % 3 == 0 || bad_loops == 1 ) && bad_loops != 0)
        {
            std::cout << "instructoins!!!" << std::endl;
        }

        if (bad_loops == 0)
        {
            std::cout << "Please select one (\"/?\" for help): ";
        }
        else
        {
            std::cout << "Please select a valid option: ";
        }

        if(std::cin >> _choice)
        {
            if (std::regex_match (_choice, valid_sudoku_option) /* _choice matches R"(^[a-i][1-9]$)" */ )
            {
                return _choice;
            }
            else if (_choice == "/?" || _choice == "/help")
            {
                std::cout << "This is a sample help information." << std::endl;
            }
            else if (_choice == "/q" || _choice == "/quit")
            {
                // leave game, dont count as win or loss
            }
            else
            {
                bad_loops++;
            }
        }
        else
        {
            _choice = "";
            bad_loops++;
        }
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        loops++;
    }
    while(true);
}