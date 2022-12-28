// create by  ---pham tuan anh
//   27/12/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long long sum = 1;

    for (long i = 2; i <= n; ++i)
    {
        sum += i * i;
    }

    cout << sum;
    return 0;
}