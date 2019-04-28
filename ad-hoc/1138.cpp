#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a, b;

    while (cin >> a >> b && a | b)
    {
        vector<int> D;
        int P = floor(log10(b - a));
        bool reached_ceil = false;

        D.assign(10, 0);

        for (int n = a; n <= b; n++)
        {
            bool leave = false;
            int B = pow(10, P);

            for (int p = P; p > 0; p--, B /= 10)
            {
                if (n >= B && b - n >= B && n % B == 0)
                {
                    if (p == P)
                        reached_ceil = true;
                    else if (reached_ceil)
                        P = p;

                    for (int i = 0; i < 10; i++)
                        D[i] += p * B / 10;
                    int k = n / B;

                    while (k > 0)
                    {
                        D[k % 10] += B;
                        k /= 10;
                    }

                    n += B - 1;
                    leave = true;
                    break;
                }
            }

            if (leave)
                continue;

            int k = n;

            while (k > 0)
            {
                D[k % 10]++;
                k /= 10;
            }
        }

        for (int i = 0; i < 9; i++)
            cout << D[i] << ' ';
        cout << D[9] << endl;
    }

    return 0;
}