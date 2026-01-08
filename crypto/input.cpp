#include "input.h"
#include <iostream>

int input()
{
    std::cout << "Введите сумму для инвестиций:\n";
    int sum {};
    std::cin >> sum;
    if ( sum < 2500 )
    {
        std::cout << "Предлагаем вложить все ваши средства в критповалюту Bitcoin, поскольку сумма небольшая";
        std::cout << "Вкладываем?";
    }
    return sum;
}
