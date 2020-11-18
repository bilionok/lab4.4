// Lab4.4.cpp
// < Біліонок Ярослав >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    double R, xp, xk, dx, x, y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;

    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -6 - R)
            y = 0;
        else
            if (-6 - R < x && x < -6)
                y = sqrt(2 * pow(R, 2) - pow(x, 2) - 36);
            else
                if (-6 < x && x <= -R)
                    y = -R - (6 - R) / (-R + 6) * R;
                else
                    if (-R < x && x <= R)
                        y = sqrt(2 * pow(R, 2) - pow(x, 2));
                    else
                        if (x > 0 && x <= 3)
                            y = R - (-3 - R) / (R + 3) * R;
                        else
                            y = x - 3;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}