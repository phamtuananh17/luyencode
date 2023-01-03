// create by  ---pham tuan anh
//   03/01/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (t--)
    {
        long long int n, sum = 0;
        long x = sqrt(n);
        for (long long int i = 1; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                sum += i + n / i;
            }
        }
        if (x * x == n)
        {
            sum += sqrt(n);
        }
    }

    // cout << tinhUoc(n);
    return 0;
}