#include "withdraw.h"
#include <iostream>

int withdraw(int balance)
{
    std::cout << "Введите сумму, которую хотите вывести:\n";
    int out {};
    std::cin >> out;
    if (balance > out)
    {
        balance -= out;
        std::cout << "Баланс после вывода:\n" << balance;
    }
    else
    {
        std::cout << "Сумма вывода больше, чем баланс!\n";
    }
    return balance;
}
