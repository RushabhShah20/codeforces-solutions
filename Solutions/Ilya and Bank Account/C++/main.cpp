// Problem: Ilya and Bank Account
// Link to the problem: https://codeforces.com/contest/313/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    if (s.front() == '-')
    {
        if (s[n - 1] >= s[n - 2])
        {
            s.erase(n - 1, 1);
        }
        else
        {
            s.erase(n - 2, 1);
        }
        cout << stoi(s) << endl;
    }
    else
    {
        cout << s << endl;
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