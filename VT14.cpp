// create by  ---pham tuan anh
//   26/12/2022

#include <bits/stdc++.h>
using namespace std;

// sap xep be den lon
void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
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
    sort(arr, n);

    if (arr[0] * arr[1] > arr[n - 2] * arr[n - 1])
    {
        cout << arr[0] * arr[1];
    }
    else
    {
        cout << arr[n - 2] * arr[n - 1];
    }

    return 0;
}