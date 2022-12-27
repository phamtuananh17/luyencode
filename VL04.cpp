#include <bits/stdc++.h>
using namespace std;
int main()
{
    double sum = 0;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        sum += pow(i, -1);
    }
    cout << setprecision(4) << fixed << sum;
    return 0;
}