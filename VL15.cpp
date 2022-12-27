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
    int temp;
    cin >> a >> b;
    if (b == 0)
    {
        std::cout << "INVALID";
        return 0;
    }
    if (a % b == 0)
    {
        std::cout << int(a / b);
        return 0;
    }

    temp = abs(gcd4(a, b));

    if (b < 0)
    {
        a /= -1 * temp;
        b /= -1 * temp;
        cout << int(a) << " " << int(b);
    }
    else
    {
        a /= temp;
        b /= temp;
        cout << int(a) << " " << int(b);
    }

    return 0;
}