//create by  ---pham tuan anh
//  26/12/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int temp = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            temp++;
        } 
    }

    if(temp == 0 ){
        cout << "NO";
    }else{
        cout << "YES";
    }
    
    return 0;
}