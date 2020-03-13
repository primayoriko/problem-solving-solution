#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s)
{
    long pre[n + 8][26];
    memset(pre, 0, sizeof(pre));

    for (int i = 1; i < n + 1; i++)
    {
        pre[i][s[i - 1] - 'a'] = pre[i - 1][s[i - 1] - 'a'] + 1;
        for (int j = 0; j < 26; j++)
        {
            if (j != s[i - 1] - 'a')
                pre[i][j] = 0;
            //cout<<pre[i][j]<<' ';
        }
        //cout<<endl;
    }
    long sol(0);
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (pre[i - 1][j] != 0 && pre[i][j] == 0)
            {
                sol += pre[i - 1][j] * (pre[i - 1][j] + 1) / 2;
                //cout<<j<<' '<<pre[i-1][j]<<endl;
                if (i + 1 <= n && pre[i + 1][j] != 0)
                {
                    int k;
                    for (k = i + 1; k <= n; k++)
                    {
                        if (pre[k][j] == 0)
                            break;
                    }
                    sol += min(pre[k - 1][j], pre[i - 1][j]);
                }
            }
        }
    }
    return sol;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
