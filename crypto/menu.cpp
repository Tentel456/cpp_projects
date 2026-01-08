#include "menu.h"
#include "symbol.h"
#include "input.h"
#include <iostream>

void menu()
{
    std::cout << "Меню:\n";
    int balance {0}; //начальный баланс
    std::cout << "Ваш баланс:" << balance << symbol() << std::endl; 
    std::cout << "Ваши криптоактивы:\n";
    int bitcoin { 0 };
    int ethereum { 0 };
    int usdt { 0 };
    std::cout << "Bitcoin:" << " " << bitcoin << "\n";
    std::cout << "Ethereum" << " " << ethereum << "\n";
    std::cout << "USDT" << " " << usdt << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Действия:" << "\n";
    std::cout << "1. Пополнить баланс" << "\n";
    std::cout << "2. Сделать перевод" << "\n";
    std::cout << "3. Выйти из программы" << "\n";

    bool active { true };

    int num {};
    std::cin >> num;

    
}
