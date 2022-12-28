// create by  ---pham tuan anh
//   27/12/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long double sum = 0;

    for (long i = 1; i <= n; ++i)
    {
        sum += pow(i*(i+1),-1);
    }
   

    cout << setprecision(5) << fixed << sum;
    return 0;
}