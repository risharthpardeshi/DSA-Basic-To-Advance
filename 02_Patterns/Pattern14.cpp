/*
A
AB
ABC
ABCD
ABCDE*/

#include <bits/stdc++.h>
using namespace std;
void Print14(int n)
{

    for (int i = 1; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        Print14(n);
    }
}

void printTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << char(ch + j);
        }
        cout << endl;
    }
}