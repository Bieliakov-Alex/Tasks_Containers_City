﻿//Пусть имеется N городов и задан список пар номеров городов, между 
//которыми существует прямая дорога.Напечатайте список городов, 
//которые напрямую сообщаются более чем с тремя городами.

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
	//Вводим N

	unsigned int N = 0; //Количество городов в задаче
	cin >> N;

	//Выделяем память под N городов в векторе

	vector<int> connections(N,0); //информация про связи с городами

	//В цикле вводим информацию про связь с городами (связи уникальны, т.е. не может быть так, что в списке встречается связь между двумя городами дважды). При этом учитываем эту связь и сохраняем количество городов, с которым связан каждый город.
	int i = 0, j = 0;  //номера городов
	while (true)
	{
		cin >> i >> j;
		if (i == -1 || j == -1)
		{
			break;
		}
		i--;
		j--;
		if (i < N && j < N)
		{
			connections[i]++;
			connections[j]++;
		}
	}
	//Выводим на экран города, у которых количество связанных городов больше 3
	for (int i = 0; i < N; i++)
	{
		if (connections[i] > 3)
		{
			cout << i+1 << endl;
		}
	}

	_getch();
	return 0;
}