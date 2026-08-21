// Problem: Safe cracking
// Link to the problem: https://codeforces.com/contest/42/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(4);
    for (ll i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    while (a[0] + a[1] + a[2] + a[3] != 4)
    {
        ll x = 0;
        for (ll i = 0; i < 4; i++)
        {
            x += a[i] & 1;
        }
        if (x == 4)
        {
            cout << "+1" << endl;
            cout << "+3" << endl;
            for (ll i = 0; i < 4; i++)
            {
                a[i] += 1;
            }
        }
        else if (x == 3)
        {
            ll mx = 0;
            for (ll i = 0; i < 4; i++)
            {
                if (a[i] & 1 && a[(i + 1) % 4] & 1)
                {
                    mx = max(mx, a[i] + a[(i + 1) % 4]);
                }
            }
            for (ll i = 0; i < 4; i++)
            {
                if (a[i] & 1 && a[(i + 1) % 4] & 1 && a[i] + a[(i + 1) % 4] == mx)
                {
                    cout << "+" << i + 1 << endl;
                    a[i] += 1;
                    a[(i + 1) % 4] += 1;
                    break;
                }
            }
        }
        else if (x == 2)
        {
            bool y = false;
            for (ll i = 0; i < 4; i++)
            {
                if (a[i] & 1 && a[(i + 1) % 4] & 1)
                {
                    cout << "+" << i + 1 << endl;
                    a[i] += 1;
                    a[(i + 1) % 4] += 1;
                    y = true;
                    break;
                }
            }
            if (!y)
            {
                for (ll i = 0; i < 4; i++)
                {
                    if (a[i] & 1 && a[(i + 2) % 4] & 1)
                    {
                        cout << "+" << i + 1 << endl;
                        cout << "+" << (i + 1) % 4 + 1 << endl;
                        a[i] += 1;
                        a[(i + 1) % 4] += 2;
                        a[(i + 2) % 4] += 1;
                        break;
                    }
                }
            }
        }
        else if (x == 1)
        {
            int j = -1;
            bool b = true;
            for (int i = 0; i < 4; i++)
            {
                if (a[i] & 1)
                {
                    j = i;
                }
                else if (a[i] != 2)
                {
                    b = false;
                }
            }
            if (a[j] == 1 && b)
            {
                cout << "+" << j + 1 << endl;
                a[j] += 1;
                a[(j + 1) % 4] += 1;
            }
            else
            {
                ll mx = 0;
                for (ll i = 0; i < 4; i++)
                {
                    if (!(a[i] & 1) && !(a[(i + 1) % 4] & 1))
                    {
                        mx = max(mx, a[i] + a[(i + 1) % 4]);
                    }
                }
                for (ll i = 0; i < 4; i++)
                {
                    if (!(a[i] & 1) && !(a[(i + 1) % 4] & 1) && (a[i] + a[(i + 1) % 4] == mx))
                    {
                        cout << "/" << i + 1 << endl;
                        a[i] >>= 1;
                        a[(i + 1) % 4] >>= 1;
                        break;
                    }
                }
            }
        }
        else
        {
            cout << "/1" << endl;
            cout << "/3" << endl;
            for (ll i = 0; i < 4; i++)
            {
                a[i] >>= 1;
            }
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}