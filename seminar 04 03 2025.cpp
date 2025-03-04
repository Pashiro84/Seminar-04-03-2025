#define _CTR_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <Windows.h>

using namespace std;

const int max_lines=50;

// Структура для динамической строки
struct DynamicString {
    char* data; // Указатель на массив символов
    int length; // Длина строки
};

// Функция для взятия из строки str подстроки длиной len начиная с позиции pos. Необходимо проверить допустимы ли значения pos и len.

DynamicString substring(const DynamicString& str, size_t pos, size_t len) 
{
    char j[max_lines] = "\0";
    DynamicString V = {j, 0};
    char N[max_lines];
    // Напишите код функции
    if (str.length >= len + pos)
    {
        int i = pos;
        for (; i < pos + len; i++)
        {
            N[i-pos] = str.data[i];
        }
        N[i-pos] = '\0';;
        int lent = len;
        V.data = N;
        V.length = len;
    }
    else 
    {
        char None[max_lines] = "None";
        int i = 4;
        V.data = None;
        V.length = i;
    }
    return V;
}

int main()
{
    char Sl[max_lines] = "SFU";
    DynamicString S = { Sl, 3};
    cout << S.data << " " << S.length << endl;
    DynamicString N = substring(S, 1, 2);
    cout << N.data << " " << N.length << endl;
    return 0;
}