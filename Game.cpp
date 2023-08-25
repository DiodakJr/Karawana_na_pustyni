#include <iostream>
#include <conio.h>
#include <chrono>
#include <thread>
#include "Player.h"
#include "Game.h"
#include "Map.h"

Game::Game(){
}
void Game::new_game(){
    std::cout << "Podaj imie swojego bohatera: ";
    std::string nam;
    std::cin >> nam;

    std::cout << "1. Wojownik\n";
    std::cout << "2. Zabojca\n";
    std::cout << "3. Czarownik\n";
    std::cout << "Wybierz klase: ";
    char class_choice;
    class_choice = getch();
    int unit_class;
    bool loop = true;
    while(loop){
        switch(class_choice){
            case '1':{
                unit_class = 1;
                loop = false;
                break;
            }
            case '2':{
                unit_class = 2;
                loop = false;
                break;
            }
            case '3':{
                unit_class = 3;
                loop = false;
                break;
            }
            default:{
                break;
            }
        }
    }
    system("cls");

    Player p(nam, unit_class);
    Player* player = &p;
    game_loop(player);

    player->~Map();
    delete player;
}
void Game::game_loop(Player* player){
    player->show_info();
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    system("cls");

    bool loop = true;
    while(loop){
        player->print_map();
        player->player_move();
    }
}
