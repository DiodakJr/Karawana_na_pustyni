#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "Menu.h"
#include "Logo.h"
#include "Player.h"
#include "Game.h"

void Menu::show_menu(){
    bool loop = true;
    while(loop)
    {
        system("cls");
        Logo l;
        l.show_logo();

        std::cout << "\nMENU--------------------\n";
        std::cout << "1. New game\n";
        std::cout << "2. Load game\n";
        std::cout << "0. Exit game\n";
        std::cout << "Choose option: ";
        char choice;
        choice = getch();

        switch(choice){
        case '1':{
            system("cls");
            Game new_game;
            new_game.new_game();
            loop = false;
            break;
        }
        case '2':{
            std::cout << "Laduje gre\n";
            loop = false;
            break;
        }
        case '0':{
            loop = false;
            break;
        }
        default:
            break;
        }
        system("cls");
    }

}
