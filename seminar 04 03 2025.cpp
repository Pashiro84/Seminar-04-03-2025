#define _CTR_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <Windows.h>

using namespace std;

// Структура для динамической строки
struct DynamicString {
    char* data; // Указатель на массив символов
    int length; // Длина строки
};

// Функция для взятия из строки str подстроки длиной len начиная с позиции pos. Необходимо проверить допустимы ли значения pos и len.

DynamicString substring(const DynamicString& str, size_t pos, size_t len) 
{
   // Напишите код функции
    if (str.lenght <= len + pos)
    {

    }
}

int main()
{
    DynamicString S = ("SFU", 3);
    
    return 0;
}