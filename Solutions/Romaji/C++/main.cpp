// Problem: Romaji
// Link to the problem: https://codeforces.com/contest/1008/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isVowel(const char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 0; i < n - 1; i++)
    {
        if (!isVowel(s[i]) && !isVowel(s[i + 1]) && s[i] != 'n')
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (!isVowel(s[n - 1]) && s[n - 1] != 'n')
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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