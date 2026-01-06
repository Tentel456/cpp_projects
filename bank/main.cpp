#include "welcome.h"
#include "deposit.h"
#include "withdraw.h"
#include "menu.h"
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
        }
    }


    return EXIT_SUCCESS;
}



