#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i;

    cin >> n;

    if (n == 2 || n == 3)
    {
        cout << "YES";
        return 0;
    }
    else if (n < 1)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        int count;
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    // cout << setprecision(2) << fixed << sum;
    return 0;
}