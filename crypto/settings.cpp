#include "settings.h"
#include <iostream>

void settings()
{
	std::cout << "Меню настроек:\n";
	std::cout << "1. Изменить валюту по умолчанию\n";
	std::cout << "2. Установить лимит на инвестиции\n";
	std::cout << "3. Вернуться в главное меню\n";
	bool active { true };
	int choice {};	
	std::cin >> choice;

	while ( active )
	{
		switch ( choice )
		{
			case 1:
			std::cout << "Функция изменения валюты по умолчанию в разработке.\n";
			break;

			case 2:
			std::cout << "Функция установки лимита на инвестиции в разработке.\n";
			break;

			case 3:
			std::cout << "Возврат в главное меню...\n";
			active = false;
			break;

			
			default:
			std::cout << "Неверный выбор. Пожалуйста, выберите снова.\n";
			break;
			
		}
	}
}	
