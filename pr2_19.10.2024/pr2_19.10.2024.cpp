// pr2_19.10.2024.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include <iostream>
#include <string.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "");

    //Одномерные массивы 15 вариант

    /*srand(time(NULL));

    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << "\n";
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (array[j] == array[i])
            {
                cout << "Не все элементы в данном массиве уникальны";
                return 0;
            }
        }
    }
    cout << "Все элементы в данном массиве уникальны";*/

    //Двумерные массивы 15 вариант

    /*srand(time(NULL));

    int array[5][5], array1[5][5];

    cout << "Первый массив: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = rand() % 100;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Второй массив: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array1[i][j] = rand() % 100;
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Сложенный массив: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] += array1[i][j];
            cout << array[i][j] << " ";
        }
        cout << endl;
    }*/

    //Структуры 15 вариант

    /*struct BankAccount
    {
        char AccountNumber[20];
        double balance;
        char currency[50]{"Рубль"};
    };

    BankAccount acc;

    cout << "Введите номер банковского счёта: ";
    cin >> acc.AccountNumber;
    cout << "Введите баланс банковского счёта в рублях: ";
    cin >> acc.balance;
    cout << endl;

    cout << "Номер счёта: " << acc.AccountNumber << endl;
    cout << "Баланс: " << acc.balance << endl;
    cout << "Валюта: " << acc.currency << endl << endl;

    char answer;
    cout << "Выберите номер операции:\n1. Пополнение счёта\n2. Перевод валюты в доллары\n";
    cin >> answer;

    char number[20];
    cout << "Введите свой номер банковского счёта для продолжения: ";
    cin >> number;

    if (strcmp(acc.AccountNumber, number) == 0)
    {
        cout << "Доступ предоставлен\n\n";
        if (answer == '1')
        {
            double answer1;
            cout << "Введите количество валюты, на которое хотите пополнить счёт: ";
            cin >> answer1;
            acc.balance += answer1;
        }
        else if (answer == '2')
        {
            acc.balance /= 90;
            strcpy(acc.currency, "Доллар");
        }
        else
            cout << "Операция не была выбрана, попробуйте еще раз.";

        cout << "Номер счёта: " << acc.AccountNumber << endl;
        cout << "Баланс: " << acc.balance << endl;
        cout << "Валюта: " << acc.currency << endl;
    }
    else
    {
        cout << "Номер банковского счёта не совпадает";
    }*/

    //Классы 15 вариант
    
    /*class Stack
    {
    private:
        int elements[100];
        int index = 0;
    public:
        void push(int el)
        {
            elements[index] = el;
            index++;
        }
        void pop()
        {
            elements[index - 1] = NULL;
            index--;
        }
        int size()
        {
            return index;
        }
        int getEl(int ind)
        {
            return elements[ind];
        }
    };

    Stack stack;

    while (true)
    {
        char ans;
        cout << "\nВыберите действие:\n1. Добавить число в stack\n2.Удалить число из stack\n3. Завершить работу\n";
        cin >> ans;
        if (ans == '1')
        {
            int num;
            cout << "Введите число для добавления: ";
            cin >> num;
            stack.push(num);
            cout << "Число добавлено" << endl;
        }
        else if (ans == '2')
        {
            stack.pop();
            cout << "Число удалено" << endl;
        }
        else if (ans == '3')
        {
            cout << endl;
            for (int i = 0; i < stack.size(); i++)
            {
                cout << stack.getEl(i) << " ";
            }
            break;
        }
        else
            cout << "Неверный идентификатор";
    }*/
    
    return 0;
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
