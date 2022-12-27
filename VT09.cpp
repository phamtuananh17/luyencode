// create by  ---pham tuan anh
//   26/12/2022

#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

void sort(int arr[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i+ 1; j < n; j++){
            if(arr[i] > arr[j]){
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
        if(isPrime(arr[i])){
            if(arr[i] != arr[i - 1])
                cout << arr[i] << " ";
        }
    }

    return 0;
}