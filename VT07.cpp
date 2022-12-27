// create by  ---pham tuan anh
//   26/12/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;

    int arr[10], n;

    for (int i = 0; i < 10; ++i)
    {
        cin >> arr[i];
    }

    cin >> n;
    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] == n)
        {
            count++;
            cout << i + 1 << " ";
        }
    }

    if (count == 0)
    {
        cout << -1;
    }

    return 0;
}