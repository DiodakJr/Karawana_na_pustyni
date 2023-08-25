#include <iostream>
#include <string>
#include "Map.h"

class Player : public Map{
private:
    std::string name;
    int unit_class;
    int unit_level;

    double max_hp;
    double current_hp;
    double max_energy;
    double current_energy;

    int strength;
    int agility;
    int intellect;
    int stamina;
    int armor;
public:
    Player(std::string, int);
    Player();
    const void show_info();
};
