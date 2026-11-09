// Problem: Kalindrome Array
// Link to the problem: https://codeforces.com/contest/1610/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isPalindrome(const vector<ll> &a, ll l, ll r)
{
    while (l <= r)
    {
        if (a[l] != a[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

bool check(const ll x, const vector<ll> &a)
{
    const ll n = a.size();
    vector<ll> b;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != x)
        {
            b.push_back(a[i]);
        }
    }
    const ll m = b.size();
    return isPalindrome(b, 0, m - 1);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = n - 1, x = -1, y = -1;
    while (l <= r)
    {
        if (a[l] != a[r])
        {
            x = a[l];
            y = a[r];
            break;
        }
        l++;
        r--;
    }
    if (x == -1)
    {
        cout << "YES" << endl;
        return;
    }
    const string ans = check(x, a) || check(y, a) ? "YES" : "NO";
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}