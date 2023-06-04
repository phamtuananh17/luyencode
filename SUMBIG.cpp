// create bu tuananh 
// Sunday, June 4, 2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    while (a.size() < b.size())  a = '0' + a;
    while (a.size() > b.size())  b = '0' + b;

    string temp = "";
    int x = 0;
    string rem = "0";
    for (int i = a.size() - 1; i >= 0; i--) {
        x = (int)a[i] + (int)b[i] + (int)rem[0] - 48 * 3;
        if (x > 9) {
            temp += (char)(x % 10 + 48);
            rem = (char)(x / 10 + 48);
        } else {
            temp += (char)(x + 48);
            rem = "0";
        }
    }
    if (rem != "0") temp += rem;
    reverse(temp.begin(), temp.end());
    cout << temp;
    return 0;
    
}