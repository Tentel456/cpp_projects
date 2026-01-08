#include "menu.h"
#include "symbol.h"
#include <iostream>

void menu()
{
    std::cout << "Меню:\n";
    int balance {1000}; //Пока заглушка
    std::cout << "Ваш баланс:" << balance << symbol() << std::endl; //Добавить переменную баланс
    std::cout << "Ваши криптоактивы:";
    int bitcoin {};
    int ethereum {};
    int usdt {};
}
