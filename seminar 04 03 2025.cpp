#define _CTR_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <Windows.h>

using namespace std;

// ��������� ��� ������������ ������
struct DynamicString {
    char* data; // ��������� �� ������ ��������
    int length; // ����� ������
};

// ������� ��� ������ �� ������ str ��������� ������ len ������� � ������� pos. ���������� ��������� ��������� �� �������� pos � len.

DynamicString substring(const DynamicString& str, size_t pos, size_t len) 
{
   // �������� ��� �������
    if (str.lenght <= len + pos)
    {

    }
}

int main()
{
    DynamicString S = ("SFU", 3);
    
    return 0;
}