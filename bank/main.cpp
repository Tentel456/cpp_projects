#include "welcome.h"
#include "deposit.h"
#include "withdraw.h"
#include "menu.h"
#include "exit.h"
#include <iostream>
#include <cstdlib>

int main()
{
    int balance {};


    bool active { true };
    welcome();

    while ( active )
    {

        menu();

        int choise {};
        std::cin >> choise;

        switch ( choise )
        {
        case 1:
            balance = deposit(balance);
            break;
        
        case 2:
            balance = withdraw(balance);
            break;
        
        case 3:
            std::cout << "Ваш баланс:" << balance;
            break;

        case 4:
            active = false;
            break;
        }


    }


    return EXIT_SUCCESS;
}



