// Problem Name: Find Character Case
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/find-character-case_58513

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "1";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "0";
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
