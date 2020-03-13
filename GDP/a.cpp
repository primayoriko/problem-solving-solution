#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    map<string, int> email;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        if (!email[s])
        {
            email[s] = i;
        }
    }
    vector<pair<int, string>> sol;
    pair<int, string> a;
    //cout << "asdas" << endl;
    for (auto it = email.begin(); it != email.end(); ++it)
    {
        a.first = it->second;
        a.second = it->first;
        sol.push_back(a);
    }
    sort(sol.begin(), sol.end());
    cout << sol.size() << endl;
    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i].second << ' ';
    }
    cout << endl;
    return 0;
}

int main()
{
    solve();
}