#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int a, count = 0;
    cin >> a;
    a = abs(a);
    for (int i = 1; i <= a; ++i)
    {
        if (a % i == 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}