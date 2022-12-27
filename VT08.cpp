// create by  ---pham tuan anh
//   26/12/2022

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

    for (int i = 0; i < n; ++i)
    {
        if (i % 2 != 0)
        {
            if (i - 1 < 0)
            {
                arr[i - 1] = 0;
            }else if (i + 1 >= n)
            {
                arr[i + 1] = 0;
            }
            arr[i] += abs(arr[i + 1] - arr[i - 1]);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}