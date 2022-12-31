// create by  ---pham tuan anh
//   28/12/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' && s[i] != s[i + 1])
            count++;
    }
    if (s[0] != ' ')
    {
        count++;
    }
    if (s[s.length() - 1] == ' ')
    {
        count--;
    }

    cout << count << endl;

    return 0;
}