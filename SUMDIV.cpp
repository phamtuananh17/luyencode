// create by  ---pham tuan anh
//   28/12/2022

#include <bits/stdc++.h>
using namespace std;

void input(long arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
}

int tinhUoc(int so)
{
    long sum = 0;
    for (int i = so; i >= 1; i--)
    {
        if (so % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

void output(long arr[], int n)
{
    for (int i = 0; i <= n; ++i)
    {
        cout << tinhUoc(arr[i]) << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    long arr[n];
    input(arr, n);
    output(arr, n);
    // cout << tinhUoc(n);
    return 0;
}