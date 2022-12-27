//create by pham tuan anh
//  26/12/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int temp = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            temp = i;
        } 
    }

    cout << temp;
    
    return 0;
}