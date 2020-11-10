﻿// Задание 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    int n, x, *mass;
    cout << "Введите количество чисел, которые будут в массиве:" << "\n";
    cin >> n;
    mass = new int[n]; //задание массива с количеством чисел введенных пользователем
    cout << "Массив:" << "\n";
    for (int i = 0; i < n; i++) //цикл для вывода массива
    {
        cin >> mass[i];
    }
    x = 0;
    for (int i = 1; i < n-1; i++) //цикл для поиска пар
    {
        if (mass[i + 1] > mass[i] && mass[i - 1] < mass[i])
            x++;
    }
    cout << "Количество подходящих пар = " << x << endl;
    system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
