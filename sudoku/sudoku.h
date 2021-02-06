#ifndef SUDOKU_H
#define SUDOKU_H

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#include "game.h"

using std::vector;
using std::string;




class SudokuGame : public Game
{
    private:
        std::vector<std::vector<int>> game_board = {\
        // omg, this is pain
        {0,0,0,0,0,0,0,0,0},\
        {0,0,0,0,0,0,0,0,0},\
        {0,0,0,0,0,0,0,0,0},\
        {0,0,0,0,0,0,0,0,0},\
        {0,0,0,0,0,0,0,0,0},\
        {0,0,0,0,0,0,0,0,0},\
        {0,0,0,0,0,0,0,0,0},\
        {0,0,0,0,0,0,0,0,0},\
        {0,0,0,0,0,0,0,0,0}};

    public:
        vector<vector<int>> /* an integer vector vector, a list of lists if you will */ get_board();
        void set_square(int row, int col, int value);
        int get_square(int row, int col);
        void play();
        string get_board_display_string();
        SudokuGame();
};


std::ostream& operator << (std::ostream& out, const SudokuGame sudoku);
vector<string> split_string(string in_pattern, string& content);

#endif