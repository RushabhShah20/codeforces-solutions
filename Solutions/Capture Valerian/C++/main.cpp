// Problem: Capture Valerian
// Link to the problem: https://codeforces.com/contest/61/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll convertToBase10(const ll n, const string &s, const ll a)
{
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans = ans * a + (isupper(s[i]) ? (s[i] - 'A' + 10) : (s[i] - '0'));
    }
    return ans;
}

string convertToBaseK(ll n, const ll b)
{
    if (n == 0)
    {
        return "0";
    }
    string ans;
    while (n > 0)
    {
        const int k = n % b;
        ans.insert(0, 1, k >= 10 ? (k - 10 + 'A') : ('0' + k));
        n /= b;
    }
    return ans;
}

void solve()
{
    ll a;
    string b;
    cin >> a >> b;
    string s;
    cin >> s;
    const ll n = s.size();
    string ans;
    if (b == "R")
    {
        ll x = convertToBase10(n, s, a);
        string th, h, t, u;
        ll th_d = x / 1000;
        ll h_d = (x % 1000) / 100;
        ll t_d = ((x % 1000) % 100) / 10;
        ll u_d = (((x % 1000) % 100) % 10);
        if (th_d == 1)
        {
            th = "M";
        }
        if (th_d == 2)
        {
            th = "MM";
        }
        if (th_d == 3)
        {
            th = "MMM";
        }
        if (h_d == 1)
        {
            h = "C";
        }
        if (h_d == 2)
        {
            h = "CC";
        }
        if (h_d == 3)
        {
            h = "CCC";
        }
        if (h_d == 4)
        {
            h = "CD";
        }
        if (h_d == 5)
        {
            h = "D";
        }
        if (h_d == 6)
        {
            h = "DC";
        }
        if (h_d == 7)
        {
            h = "DCC";
        }
        if (h_d == 8)
        {
            h = "DCCC";
        }
        if (h_d == 9)
        {
            h = "CM";
        }
        if (t_d == 1)
        {
            t = "X";
        }
        if (t_d == 2)
        {
            t = "XX";
        }
        if (t_d == 3)
        {
            t = "XXX";
        }
        if (t_d == 4)
        {
            t = "XL";
        }
        if (t_d == 5)
        {
            t = "L";
        }
        if (t_d == 6)
        {
            t = "LX";
        }
        if (t_d == 7)
        {
            t = "LXX";
        }
        if (t_d == 8)
        {
            t = "LXXX";
        }
        if (t_d == 9)
        {
            t = "XC";
        }
        if (u_d == 1)
        {
            u = "I";
        }
        if (u_d == 2)
        {
            u = "II";
        }
        if (u_d == 3)
        {
            u = "III";
        }
        if (u_d == 4)
        {
            u = "IV";
        }
        if (u_d == 5)
        {
            u = "V";
        }
        if (u_d == 6)
        {
            u = "VI";
        }
        if (u_d == 7)
        {
            u = "VII";
        }
        if (u_d == 8)
        {
            u = "VIII";
        }
        if (u_d == 9)
        {
            u = "IX";
        }
        ans = th + h + t + u;
    }
    else
    {
        ans = convertToBaseK(convertToBase10(n, s, a), stoll(b));
    }
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