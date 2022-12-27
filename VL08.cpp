#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
       if(i % 2 == 0){
        sum += i;
       }
    }
    // cout << setprecision(4) << fixed << sum;
    cout << sum;
    return 0;
}