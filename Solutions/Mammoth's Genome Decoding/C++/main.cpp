// Problem: Mammoth's Genome Decoding
// Link to the problem: https://codeforces.com/contest/747/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 4 == 0)
    {
        ll a = n / 4, g = n / 4, c = n / 4, t = n / 4;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                a--;
            }
            if (s[i] == 'G')
            {
                g--;
            }
            if (s[i] == 'C')
            {
                c--;
            }
            if (s[i] == 'T')
            {
                t--;
            }
        }
        if (a < 0 || g < 0 || c < 0 || t < 0)
        {
            cout << "===" << endl;
            return;
        }
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (a > 0)
                {
                    s[i] = 'A';
                    a--;
                }
                else if (g > 0)
                {
                    s[i] = 'G';
                    g--;
                }
                else if (c > 0)
                {
                    s[i] = 'C';
                    c--;
                }
                else if (t > 0)
                {
                    s[i] = 'T';
                    t--;
                }
            }
        }
        cout << s << endl;
    }
    else
    {
        cout << "===" << endl;
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