#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (a == 0 && b != 0)
    {
        if (b % 2 == 0)
        {
            cout << b / 2 << endl;
        }
        else
        {
            cout << b / 2 << " " << (b / 2) + 1 << endl;
        }

        return;
    }

    if (a != 0 && b == 0)
    {
        if (a % 2 == 0)
        {
            cout << a / 2 << endl;
        }
        else
        {
            cout << a / 2 << " " << (a / 2) + 1 << endl;
        }

        return;
    }

    if (a != 0 && b != 0)
    {
        if (b > a)
        {
            swap(a, b);
        }

        vector<int> ans;

        if ((a + b) % 2 == 0)
        {
            int x = a - (a + b) / 2;
            ans.push_back(x);
            int rem = (a + b) / 2 - x;
            while (rem--)
            {
                x += 2;
                ans.push_back(x);
            }
        }
        else
        {
            int x1 = a - (a + b) / 2;
            int x2 = a - (a + b) / 2 - 1;

            int rem1 = (a + b) / 2 - x2;
            int rem2 = rem1;

            ans.push_back(x1);
            ans.push_back(x2);

            while (rem1--)
            {
                x1 += 2;
                ans.push_back(x1);
            }

            while (rem2--)
            {
                x2 += 2;
                ans.push_back(x2);
            }
        }

        sort(ans.begin(), ans.end());

        for (auto e : ans)
            cout << e << " ";
        cout << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}