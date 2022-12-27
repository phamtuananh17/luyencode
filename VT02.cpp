#include <bits/stdc++.h>
using namespace std;

int KiemTra(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[0] != a[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int min = arr[0];

    if (KiemTra(arr, n) == 0)
    {
        cout << "NOT FOUND";
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
    }

    int max = min;
    int max2 = min;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for(int i = 0; i < n; ++i){
        if(max == arr[i])
            continue;
        else if (arr[i] > max2){
            max2 = arr[i];
        }    
    }

    cout << max2;
    return 0;
}