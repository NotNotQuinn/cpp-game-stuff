#include <string>
#include <iostream>
#include "game.h"

using std::string;


Game::Game(std::string name)
{
    this->name = name;
}

void Game::increment_play_count()
{
    play_count++;
}

int Game::total_games_played_count = 0;
