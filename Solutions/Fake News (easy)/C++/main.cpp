// Problem: Fake News (easy)
// Link to the problem: https://codeforces.com/contest/802/problem/G1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const string t = "heidi";
    const ll n = s.size();
    ll i = 0, j = 0;
    while (i < n)
    {
        if (j == 5)
        {
            cout << "YES" << endl;
            return;
        }
        if (s[i] == t[j])
        {
            j++;
        }
        i++;
    }
    if (j == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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