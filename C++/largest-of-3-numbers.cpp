// Problem Name: Largest of 3 numbers
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/largest-of-three-numbers_1381044

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a;
    }
    else if (b > a && b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
    return 0;
}