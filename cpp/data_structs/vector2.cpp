// Assignment 2.cpp

#include <iostream>
#include <vector>

using namespace std;

void dostuff(vector<char> a, vector<char> b)
{
    a[0] = 'Y'; // s1[] is now YAPOA
    a[2] = b[2]; // s1[] is now YAHOA
    a[4] = b[4]; // s1[] is now YAHOO
}

int main()
{
    vector<char> s1(4);
    s1.push_back('P');
    s1.push_back('A');
    s1.push_back('P');
    s1.push_back('O');
    s1.push_back('A');

    vector<char> s2(4);
    s1.push_back('W');
    s1.push_back('E');
    s1.push_back('H');
    s1.push_back('L');
    s1.push_back('O');

    dostuff(s1, s2);

    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i];
    }
}
