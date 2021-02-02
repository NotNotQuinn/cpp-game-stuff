#include <string>
#include <iostream>
#include "game.h"

using std::string;

Game::Game()
{
    play_count = 0;
}

Game::Game(std::string name)
{
    this->name = name;
    play_count = 0;
}


void Game::increment_play_count()
{
    this->play_count++;
}

int Game::total_games_played_count = 0;
int Game::play_count = 0;
