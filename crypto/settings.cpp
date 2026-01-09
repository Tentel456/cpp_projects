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
}	
