#define _CTR_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <Windows.h>

using namespace std;

const int max_lines=50;

// ��������� ��� ������������ ������
struct DynamicString {
    char* data; // ��������� �� ������ ��������
    int length; // ����� ������
};

// ������� ��� ������ �� ������ str ��������� ������ len ������� � ������� pos. ���������� ��������� ��������� �� �������� pos � len.

DynamicString substring(const DynamicString& str, size_t pos, size_t len) 
{
    char N[max_lines];
    // �������� ��� �������
    if (str.length >= len + pos)
    {
        int i = pos;
        for (; i < pos + len; i++)
        {
            N[i] = str.data[i];
            cout << N << endl;
        }
        N[i] = '\0';
        cout << N << endl;
        int lent = len;
        DynamicString V = {N, lent };
        return V;
    }
    else 
    {
        char None[max_lines] = "None";
        int i = 4;
        DynamicString V = {None, i };
        return V;
    }
}

int main()
{
    char Sl[max_lines] = "SFU";
    DynamicString S = { Sl, 3};
    DynamicString N = substring(S, 1, 4);
    cout << N.data << " " << N.length << endl;
    return 0;
}