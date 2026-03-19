// Problem: Sleuth
// Link to the problem: https://codeforces.com/contest/49/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    const ll n = s.size();
    char c = ' ';
    for (ll i = n - 2; i >= 0; i--)
    {
        if (islower(s[i]) || isupper(s[i]))
        {
            c = s[i];
            break;
        }
    }
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
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