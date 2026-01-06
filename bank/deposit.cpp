#include "deposit.h"
#include <iostream>

int deposit(int balance)
{
    std::cout << "Введите сумму для пополнения:\n";
    int deposit {};
    std::cin >> deposit;
    balance += deposit;
    std::cout << "Ваш баланс после пополнения:" << balance << "\n";
    return balance;
}
