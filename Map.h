#ifndef MAP_H
#define MAP_H
#include <iostream>

class Map{
public:
    char** game_map;

    Map(int, int);
    ~Map();
    void print_map();

    int player_x_pos;
    int player_y_pos;

    void player_move();

    int city_x_pos;
    int city_y_pos;

    void generate_city();
};

#endif // MAP_H
