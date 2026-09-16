// Problem: Homework
// Link to the problem: https://codeforces.com/contest/101/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    const ll n = s.size();
    vector<pair<char, ll>> a(26);
    for (ll i = 0; i < 26; i++)
    {
        a[i] = {'a' + i, 0};
    }
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a'].second++;
    }
    sort(a.begin(), a.end(), [](const pair<char, ll> &x, const pair<char, ll> &y)
         { return x.second < y.second; });
    for (ll i = 0; i < 26; i++)
    {
        if (k > a[i].second)
        {
            k -= a[i].second;
            a[i].second = 0;
        }
        else
        {
            a[i].second -= k;
            k = 0;
            break;
        }
    }
    sort(a.begin(), a.end());
    string ans;
    unordered_set<char> t;
    for (ll i = 0; i < n; i++)
    {
        if (a[s[i] - 'a'].second > 0)
        {
            ans.append(1, s[i]);
            t.insert(s[i]);
            a[s[i] - 'a'].second--;
        }
    }
    cout << t.size() << endl;
    cout << ans << endl;
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