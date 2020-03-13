#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sola(a), solb(b), sol_c(c), mins(99999999);
    if (b - a < c - b)
    {
        for (int i = -200; i <= 200; i++)
        {
            int k = i;
            for (int j = -300; j <= 300; j++)
            {
                int p = j;
                if (a + k < 1 || b + p < 1)
                    continue;
                else
                {
                    if ((b + p) % (a + k) == 0)
                    {
                        //cout << k << ' ' << p << endl;
                        int ax;
                        bool f;
                        double bil = (double)c / (double)(b + p);
                        if (ceil(bil) * (b + p) - c < c - floor(bil) * (b + p))
                        {
                            ax = ceil(bil) * (b + p) - c;
                            f = true;
                        }
                        else
                        {
                            ax = c - floor(bil) * (b + p);
                            f = false;
                        }
                        if (mins > ax + abs(i) + abs(j))
                        {
                            mins = ax + abs(i) + abs(j);
                            sola = a + k;
                            solb = b + p;
                            sol_c = f ? c + ax : c - ax;
                        }
                    }
                }

                p = -j;
            }
            //cout << "dsad" << endl;
            k = -i;
        }
    }
    else
    {
        for (int i = -200; i <= 200; i++)
        {
            int k = i;
            for (int j = -300; j <= 300; j++)
            {
                int p = j;
                if (c + p < 1 || b + k < 1)
                    continue;
                else
                {
                    if ((c + p) % (b + k) == 0)
                    {
                        int bil = (c + p) / (b + k);
                        int sil = abs((b + k) / bil - a);
                        if (mins > p + k + sil)
                        {
                            mins = sil + abs(i) + abs(j);
                            sola = (b + k) / bil;
                            solb = b + k;
                            sol_c = c + p;
                        }
                    }
                }

                p = -j;
            }
            //cout << "dsad" << endl;
            k = -i;
        }
    }

    cout << mins << endl
         << sola << ' ' << solb << ' ' << sol_c << endl;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}