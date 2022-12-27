// create by  ---pham tuan anh
//   27/12/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    long double D, Dx, Dy, x, y;
    D = a * e - d * b;
    Dx = c * e - f * b;
    Dy = a * f - d * c;

    if (D == 0)
    {
        if (Dx - Dy == 0)
        {
            cout << "VOSONGHIEM";
        }
        else
        {
            cout << "VONGHIEM";
        }
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        if (x != 0 && y != 0)
        {
            cout << setprecision(2) << fixed << x << " " << y;
        }
        else if (x == 0)
        {
            cout << setprecision(2) << fixed << abs(x) << " " << y;
        }
        else if (y == 0)
        {
            cout << setprecision(2) << fixed << x << " " << abs(y);
        }

        return 0;
    }
}