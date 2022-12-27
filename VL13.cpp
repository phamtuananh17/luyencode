#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, dem = 0;
    cin >> n;
    

    if(n == 0){
        std::cout << "NO";
        return 0;
    }

    for(long long int i = 1; i < n; i++){
        if(n % i == 0){
            dem += i;
        }
    }

    if(dem != n){
        cout << "NO";
    }else cout << "YES";
    return 0;
}