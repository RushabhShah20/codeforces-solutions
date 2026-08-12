// Problem: Train and Peter
// Link to the problem: https://codeforces.com/contest/8/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    const ll n1 = s1.size(), n2 = s2.size(), n3 = s3.size();
    ll a1 = -1, b1 = -1;
    for (ll i = 0; i + n2 <= n1; i++)
    {
        if (s1.substr(i, n2) == s2)
        {
            a1 = i;
            break;
        }
    }
    if (a1 != -1)
    {
        for (ll i = a1 + n2; i + n3 <= n1; i++)
        {
            if (s1.substr(i, n3) == s3)
            {
                b1 = i;
                break;
            }
        }
    }
    reverse(s1.begin(), s1.end());
    ll a2 = -1, b2 = -1;
    for (ll i = 0; i + n2 <= n1; i++)
    {
        if (s1.substr(i, n2) == s2)
        {
            a2 = i;
            break;
        }
    }
    if (a2 != -1)
    {
        for (ll i = a2 + n2; i + n3 <= n1; i++)
        {
            if (s1.substr(i, n3) == s3)
            {
                b2 = i;
                break;
            }
        }
    }
    const bool a = (a1 != -1 && b1 != -1), b = (a2 != -1 && b2 != -1);
    if (a && b)
    {
        cout << "both" << endl;
    }
    else if (a)
    {
        cout << "forward" << endl;
    }
    else if (b)
    {
        cout << "backward" << endl;
    }
    else
    {
        cout << "fantasy" << endl;
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