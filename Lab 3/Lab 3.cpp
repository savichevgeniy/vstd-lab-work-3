#include "pch.h"
#include "conio.h"
#include "stdio.h"
#include <iostream>
#include "clocale"
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"
#include "Menu.h"

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	system("color 6");
	int key = 0;
	Menu menu;
	while (key != 6) {
		menu.MyMenu();
		std::cin >> key;
		switch (key)
		{
		case 1:
			//Задание №1
			Task1 Result1;
			Result1.result();
			break;
		case 2:
			//Задание №2
			Task2 Result2;
			Result2.OutputTask2();
			break;
		case 3:
			//Задание №3
			Task3 Result3;
			Result3.OutputTask3();
			break;
		case 4:
			//Задание №4
			Task4 Result4;
			Result4.OutputTask4();
			break;
		case 5:
		{
			//Задание №5
			Task5 Result5;
			Result5.OutputTask5();
		}
			break;
		case 6:
			std::cout << "Выход из программы..." << std::endl;
			exit(EXIT_SUCCESS);
			break;
		default:
			std::cerr << "Вы выбрали неверный пункт меню" << std::endl;
		}
		system("pause");
		system("cls");
	}
	return 0;
}
