#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr)
{
    long left[n], right[n], sol[n], ans(0);
    left[0] = 1;
    right[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            left[i] = left[i - 1] + 1;
        else
            left[i] = 1;
    }
    for (int i = n - 2; i > -1; i--)
    {
        if (arr[i] > arr[i + 1])
            right[i] = right[i + 1] + 1;
        else
            right[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        sol[i] = max(left[i], right[i]);
        ans += sol[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << sol[i] << ' ';
    }
    cout << endl;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
