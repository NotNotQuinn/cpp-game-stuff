#include "sudoku.h"
#include <algorithm>
#include <iostream>
#include <regex>
#include <iterator>

using std::vector;
using std::string;


void SudokuGame::play()
{
    std::cout << "lol, welcome to danksudoku.\n";
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
            string display_value = value == 0 ? " " : (string) _value_str ;
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
