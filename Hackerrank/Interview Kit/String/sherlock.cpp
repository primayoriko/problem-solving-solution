#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s)
{
    map<int, int> m1;
    for (int i = 0; i < s.length(); i++)
        m1[s[i] - 'a']++;

    map<int, int>::iterator itr = m1.begin();
    map<int, int> m2;
    for (; itr != m1.end(); itr++)
    {
        m2[itr->second]++;
    }
    if (m2.size() > 2)
        return "NO";
    else if (m2.size() == 2)
    {
        itr = m2.begin();
        //int cnt = 0;
        for (; itr != m2.end(); itr++)
        {
            if (itr->second == 1)
                break;
        }
        if (itr == m2.end())
            return "NO";
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
