#ifndef GAME_H
#define GAME_H


#include <string>
#include <iostream>


class Game {
    static int total_games_played_count;
    protected:  // subclasses will also have this
        static int play_count;
    public:
        std::string name;
        Game();
        Game(std::string name);
        void increment_play_count();
};


#endif // GAME_H