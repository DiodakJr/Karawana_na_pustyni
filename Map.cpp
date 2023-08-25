#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>
#include "Map.h"
#include "Player.h"

Map::Map(int wiersz, int kolumna){
    player_x_pos = 1;
    player_y_pos = 1;

    srand(time(NULL));
    city_x_pos = rand() % 8 + 10;
    city_y_pos = rand() % 23 + 25;

    game_map = new char* [wiersz];
    for(int w = 0; w < wiersz; w++){
        game_map[w] = new char[kolumna];
        for(int k = 0; k < kolumna; k++){
            if (w == player_x_pos && k == player_y_pos){
                game_map[w][k] = 'X';
            }
            else if(w == city_x_pos && k == city_y_pos){
                game_map[w][k] = 'C';
            }
            else if(w == 0 || w == (wiersz - 1)){
                game_map[w][k] = '#';
            }
            else if(k == 0 || k == (kolumna - 1)){
                game_map[w][k] = '#';
            }
            else{
                game_map[w][k] = ' ';
            }
        }
    }
}
Map::~Map(){
    for ( int i(0); i < 20; ++i )
        delete [] game_map[i];
    delete [] game_map;
    game_map = NULL;
}
void Map::print_map(){
    system("cls");
    for(int w = 0; w < 20; w++){
        for(int k = 0; k < 50; k++){
            std::cout << game_map[w][k];
        }
        std::cout << '\n';
    }
}
void Map::player_move(){
    bool p_move = true;
    while(p_move){
        char ruch;
        ruch = getch();
        switch(ruch){
            case 's':
                if(player_y_pos == 18);
                else{
                    player_y_pos += 1;
                    game_map[player_y_pos][player_x_pos] = 'X';
                    game_map[player_y_pos - 1][player_x_pos] = ' ';
                    p_move = false;
                }
                break;
            case 'w':
                if(player_y_pos == 1);
                else{
                    player_y_pos -= 1;
                    game_map[player_y_pos][player_x_pos] = 'X';
                    game_map[player_y_pos + 1][player_x_pos] = ' ';
                    p_move = false;
                }
                break;
            case 'd':
                if(player_x_pos == 48);
                else{
                    player_x_pos += 1;
                    game_map[player_y_pos][player_x_pos] = 'X';
                    game_map[player_y_pos][player_x_pos - 1] = ' ';
                    p_move = false;
                }
                break;
            case 'a':
                if(player_x_pos == 1);
                else{
                    player_x_pos -= 1;
                    game_map[player_y_pos][player_x_pos] = 'X';
                    game_map[player_y_pos][player_x_pos + 1] = ' ';
                    p_move = false;
                }
                break;
            default:
                break;
        }
    }
}
void Map::generate_city(){
srand(time(NULL));

city_x_pos = rand() % 8 + 10;
city_y_pos = rand() % 23 + 25;
game_map[city_x_pos][city_y_pos] = 'C';
}

