#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int gcd4(int a, int b)
{
    int tmp;
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << a * b / gcd4(a, b);
    return 0;
}