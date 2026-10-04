#include <iostream> 
#include <iomanip> 
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, dx;
    double x, y;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << fixed;
    cout << "----------------------------------------" << endl;
    cout << "|" << setw(10) << "x" << " |" << setw(15) << "y" << " |" << endl;
    cout << "----------------------------------------" << endl;

    x = xp;

    while (x <= xk + dx / 2) // додано dx/2 для уникнення помилок точності double
    {
        if (x < -1)
        {
            // Використовуємо fabs(), щоб уникнути від'ємного значення під коренем при x < -1
            y = 5 * exp(3 * x) - (sqrt(fabs(2 * x * x * x)) - 7);
        }
        else if (x < 3)
        {
            y = 5 * exp(3 * x) - 2 * log10(1 - x / 4);
        }
        else
        {
            y = 5 * exp(3 * x) - (cos(fabs(x)) + 3);
        }

        cout << "|" << setw(10) << setprecision(3) << x
            << " |" << setw(15) << setprecision(6) << y
            << " |" << endl;

        x += dx;
    }

    cout << "----------------------------------------" << endl;

    return 0;
}