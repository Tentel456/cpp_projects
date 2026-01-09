#include "welcome.h"
#include "menu.h"
#include "input.h"
#include <iostream>
#include <cstdlib>

int main()
{
    setlocale(LC_ALL, "Russian");
    welcome();
    menu();
    input();
    return EXIT_SUCCESS;
}
