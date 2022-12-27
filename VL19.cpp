#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b, count = 0;
    cin >> a >> b;

    if(a == b){
        cout << "NOT FOUND";
    }
    int i = b - 1;
    while(i > a){
        
        if(i % 3 == 0){
            count++;
            cout << i << " ";
        }
        i--;
    }
    if(count == 0){
        cout << "NOT FOUND";
    }
    
    // cout << setprecision(4) << fixed << sum;
    
    return 0;
}