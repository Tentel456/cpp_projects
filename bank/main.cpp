#include "welcome.h"
#include "deposit.h"
#include "withdraw.h"
#include <iostream>
#include <cstdlib>

int main()
{
    welcome();
    withdraw(deposit(0));
    return EXIT_SUCCESS;
}
