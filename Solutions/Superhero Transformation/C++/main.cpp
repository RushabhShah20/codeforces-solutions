// Problem: Superhero Transformation
// Link to the problem: https://codeforces.com/contest/1111/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isVowel(const char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    if (n == m)
    {
        for (ll i = 0; i < n; i++)
        {
            if ((isVowel(s[i]) && !isVowel(t[i])) || (!isVowel(s[i]) && isVowel(t[i])))
            {
                cout << "No" << endl;
                return;
            }
        }
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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