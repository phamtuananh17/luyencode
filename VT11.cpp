// create by  ---pham tuan anh
//   26/12/2022

#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{
    int temp;
    for (int i = 1; i < n -1; i++)
    {
        for (int j = i + 1; j < n-1; j++)
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

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}