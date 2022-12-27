// create by  ---pham tuan anh
//   26/12/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = 0, s1, s2;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] + arr[i + 1] > max)
        {
            max = arr[i] + arr[i + 1];
            s1 = arr[i];
            s2 = arr[i + 1];
        }
    }
    if (arr[n - 1] + arr[0] > max)
    {
        cout << arr[n - 1] << " " << arr[0];
    }
    else
    {
        cout << s1 << " " << s2;
    }

    return 0;
}