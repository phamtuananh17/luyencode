// create bu tuananh 
// Sunday, June 4, 2023


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        double n;
        cin >> n;

        cout << setprecision(8) << fixed << 2*(1-(1/(n+1))) << endl;
    }

    //cout << setprecision(5) << fixed << sum;
    return 0;
}