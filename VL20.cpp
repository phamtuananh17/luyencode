#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a, b;
    cin >> a >> b;

    //cout << char(int(a) -32) << " " << char(int(b) - 32);

    for(int i = int(a); i <= int(b); ++i){
       cout << char(i - 32) << " ";
    }
    
    // cout << setprecision(4) << fixed << sum;
    
    return 0;
}