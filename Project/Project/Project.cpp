#include <iomanip>
#include "Header.h"
#include <iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    int t;
    do
    {
        cout << "1.Уровень 1" << endl << "2.Уровень 2" << endl;
        cout << "3.Уровень 3"<< endl << "0.Завершить тренировку" << endl;
        cin >> t;
        switch(t)
        {
        case 1: Fist_level(); break;
        case 2: Second_level(); break;
        case 3: Third_level(); break;
        case 0: cout << "Exit" << endl;break;
        default: cout << "Неверный ввод. Попробуйте снова" << endl;break;
        }
    }while(t!=0);
}
