#include "input.h"
#include <iostream>

int input()
{
    std::cout << "Введите сумму для инвестиций:\n";
    int sum {};
    std::cin >> sum;
    if ( sum < 2500 )
    {
        std::cout << "Предлагаем вложить все ваши средства в критповалюту Bitcoin, поскольку сумма небольшая\n";
        std::cout << "Вкладываем?\n";
        std::cout << "1. Да\n";
        std::cout << "2. Нет\n";
        int choice {};
        std::cin >> choice;

        bool active { true };

        while ( active )
        {
            switch (choice)
            {
                case 1:
                std::cout << "Ваша сумма будет вложена в Bitcoin!\n";
                break;

                case 2:
                std::cout << "Вы вышли из программы!\n";
                active = false;
                break;
            }
        }
    }

    else if ( sum > 2500 and sum <= 10000)
    {
        std::cout << "У вас уже неплохие накопления!\n";
        std::cout << "Предлагаем такое распределение средств:\n";
    }
    return sum;
}
