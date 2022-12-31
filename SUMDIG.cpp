// create by  ---pham tuan anh
//   28/12/2022

#include <bits/stdc++.h>
using namespace std;

int sum(long long so)
{
    int sum = 0;
    int temp = 0;
    while (so != 0)
    {
        temp = so % 10;
        sum += temp;
        so /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cout << sum(arr[i]) << endl;
    }

    return 0;
}