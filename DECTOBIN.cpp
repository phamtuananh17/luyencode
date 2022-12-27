#include <bits/stdc++.h>
using namespace std;
// 07/04/2022 - 2:17 PM
int main()
{
    stack<long long int> s;
    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n != 0)
        {
            s.push(n % 2);
            n /= 2;
        }
        while (!s.empty())
        {
            cout << s.top();
            s.pop();
        }
        cout << endl;
    }
    return 0;
}