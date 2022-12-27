#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n = abs(n);
    if(n == 0){
        cout << "INF";
    }else if(n > 0){
        for(int i = n; i >= 1; i--){
            if(n % i == 0){
                cout << i << " ";
            }
        }
    }
    return 0;
}