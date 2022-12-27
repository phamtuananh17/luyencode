#include <bits/stdc++.h>
using namespace std;
int main()
{
    long id, N, S = 0;
    cin >> N;
    for (long i = 1; i < N; i++)
    {
        S += i;
        if (S > N) 
        {
            id = i - 1;
            break;
        }
    }
    cout << id;
    return 0;
}