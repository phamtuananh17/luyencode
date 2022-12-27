#include <bits/stdc++.h>
using namespace std;
int main()
{
    double sum = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= (3 * n) + 1; i++)
    {
        sum += i * pow(-1, i + 1);
    }
    // cout << setprecision(4) << fixed << sum;
    cout << sum;
    return 0;
}