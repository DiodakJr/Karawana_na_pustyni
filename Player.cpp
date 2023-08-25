#include <iostream>
#include <string>
#include <conio.h>
#include "Player.h"

Player::Player(std::string nam, int uc) : Map(20, 50){ // Create new character constructor
    name = nam;
    unit_class = uc;
    unit_level = 1;
    if(unit_class == 1){
        strength = 15;
        agility = 8;
        intellect = 5;
        stamina = 12;
        armor = 15;
        max_hp = stamina * 4 * (unit_level + 1);
        current_hp = max_hp;
        max_energy = 100.0;
        current_energy = 0;
    }
    if(unit_class == 2){
        strength = 5;
        agility = 15;
        intellect = 8;
        stamina = 10;
        armor = 10;
        max_hp = stamina * 3 * (unit_level + 1);
        current_hp = max_hp;
        max_energy = 200.0;
        current_energy = max_energy;
    }
    if(unit_class == 3){
        strength = 5;
        agility = 8;
        intellect = 15;
        stamina = 8;
        armor = 5;
        max_hp = stamina * 2 * (unit_level + 1);
        current_hp = max_hp;
        max_energy = 400.0;
        current_energy = max_energy;
    }
}
Player::Player() : Map(20, 50){

}
const void Player::show_info(){
std::cout << name  << '\n';
if(unit_class == 1){
    std::cout << "Wojownik (" << unit_level << ")\n";
}
if(unit_class == 2){
    std::cout << "Zabojca (" << unit_level << ")\n";
}
if(unit_class == 3){
    std::cout << "Czarownik (" << unit_level << ")\n";
}
std::cout << "HP: " << current_hp << "/" << max_hp << '\n';
std::cout << "Energy: " << current_energy << "/" << max_energy << '\n';
std::cout << "STR: " << strength << '\n';
std::cout << "AGI: " << agility << '\n';
std::cout << "INT: " << intellect << '\n';
std::cout << "STA: " << stamina << '\n';
std::cout << "ARM: " << armor << '\n';
}
