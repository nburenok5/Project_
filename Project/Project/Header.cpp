#include "Header.h"
#include <iomanip>
#include <iostream>
#include <time.h>       
#include <stdlib.h>
#include <string.h>
#include<locale.h>
#include<Windows.h>
using namespace std;

void Input_Words(int &cnt_all, int &cnt_C_true, int &cnt_C_false, char s[])
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "Введите:\t " << s << endl;
    char S_vvod[256];
    gets_s(S_vvod);
    cnt_all+=strlen(s);
    if (strcmp(S_vvod, s) == 0)
    {
        cnt_C_true+=strlen(S_vvod);
        SetConsoleTextAttribute(hConsole, 2);
        cout << s << endl;
    }
    else
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(S_vvod[i]==s[i])
            {
                cnt_C_true++;
            }
            else cnt_C_false ++;
        }
        SetConsoleTextAttribute(hConsole, 4);
        cout << s << endl;
    }
    SetConsoleTextAttribute(hConsole, 0);
}
//выбор времени
int Time()
{
    int TIME;
    cout << "- 20 секунд\n- 30 секунд\n- 45 секунд\n- 60 секунд\n";
    do{cout << "Введите желаемое время для тренировки: "; cin >> TIME;}while(TIME!=20 && TIME!=30 && TIME!=45 && TIME!=60);
    return TIME;
}
//вывод
void Print(int cnt_C_true, int cnt_C_false, int cnt_all, int TIME)
{
    
    cout << "________________________________________"<< endl;
    cout << "Колличество всех символов: " << cnt_all << endl;
    cout << "Колличество верно введённых символов: " << cnt_C_true << endl;
    cout << "Колличество неверно введённых символов: " << cnt_C_false << endl;
    cout << "Правильность ввода: " << setprecision(5) << 1.0*cnt_C_true/cnt_all*100 << "%" << endl;
    cout << "Скорость набора: "<< setprecision(2)<< 1.0*cnt_C_true/TIME << " символов в секунду"<< endl;
    if(cnt_C_true<= cnt_all/3.0) cout << "Не стоит переживать из-за результата! В следующий раз все получится! Попробуй ещё раз" << endl;
    if((cnt_all/3.0<cnt_C_true) && (cnt_C_true<cnt_all)) cout << "Очень неплохой результат! В следующий раз будет ещё лучше!" << endl;
    if (cnt_C_true==cnt_all) cout <<  "Ты просто машина! продолжай в том же духе!" << endl;
    cout << "_________________________________________"<< endl;
}
// 1 level
void Fist_level()
{
    setlocale(LC_ALL, "Russian");
    int TIME=Time();
    const int N = 10;           //количество слов
 
    /*СЛОВАРЬ СЛОВ*/
    const char* const DICTIONARY_OF_WORDS[N] = {
        "hello",
        "world",
        "mother",
        "father",
        "car",
        "onion",
        "soap",
        "egg",
        "cake",
        "bus"                  
    };
    int cnt_all=0; int cnt_C_true=0, cnt_C_false=0;
    int start_time = time(NULL);
    while(time(NULL)-start_time<TIME)
    {
        getchar();
        int random = rand() % N;
        char s[256];
        strcpy_s(s,DICTIONARY_OF_WORDS[random]);
        Input_Words(cnt_all, cnt_C_true, cnt_C_false, s);
    }
    Print(cnt_C_true, cnt_C_false, cnt_all, TIME);
    
}
// 2 level
void Second_level()
{
    setlocale(LC_ALL, "Russian");
    int TIME=Time();
    const int N = 10;           //количество слов
 
    /*СЛОВАРЬ СЛОВ*/
    const char* const DICTIONARY_OF_WORDS[N] = {
        "89003742491",
        "helicopter!",
        "mother",
        "father",
        "table",
        "Graduate",
        "Banana",
        "356790",
        "Hello, world!",
        "Computer"                  // закинуть слова и цифры 
    };
    int cnt_all=0; int cnt_C_true=0, cnt_C_false=0;
    int start_time = time(NULL);
    while(time(NULL)-start_time<TIME)
    {
        getchar();
        int random = rand() % N;
        char s[256];
        strcpy_s(s,DICTIONARY_OF_WORDS[random]);
        Input_Words(cnt_all, cnt_C_true, cnt_C_false, s);
    }
    Print(cnt_C_true, cnt_C_false, cnt_all, TIME);
}
// 3 level
void Third_level()
{
    setlocale(LC_ALL, "Russian");
    int TIME=Time();
    const int N = 10;           //количество слов
 
    /*СЛОВАРЬ СЛОВ*/
    const char* const DICTIONARY_OF_WORDS[N] = {
        "Hi, John! The weather if beautiful today",
        "I want to be nice today!",
        "Hello, world!",
        "I love you!",
        "How are you?",
        "Undergraduate",
        "My number is 89003742491",
        "356790_3490",
        "I was born in 2024",
        "Computer"                  // закинуть слова и цифры 
    };
    int cnt_all=0; int cnt_C_true=0, cnt_C_false=0;
    int start_time = time(NULL);
    while(time(NULL)-start_time<TIME)
    {
        getchar();
        int random = rand() % N;
        char s[256];
        strcpy_s(s,DICTIONARY_OF_WORDS[random]);
        Input_Words(cnt_all, cnt_C_true, cnt_C_false, s);
    }
    Print(cnt_C_true, cnt_C_false, cnt_all, TIME);
}
