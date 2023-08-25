#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Menu.h"
#include "Logo.h"

int main()
{
    Logo logo;
    logo.present_logo();
    Menu menu;
    menu.show_menu();
    return 0;
}
