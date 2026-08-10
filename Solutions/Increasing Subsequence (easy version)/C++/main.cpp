// Problem: Increasing Subsequence (easy version)
// Link to the problem: https://codeforces.com/contest/1157/problem/C1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    deque<ll> q;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        q.push_back(x);
    }
    string ans;
    ll x = 0;
    while (!q.empty())
    {
        if (q.front() > x && q.back() > x)
        {
            if (q.front() < q.back())
            {
                x = q.front();
                ans.append(1, 'L');
                q.pop_front();
            }
            else
            {
                x = q.back();
                ans.append(1, 'R');
                q.pop_back();
            }
        }
        else if (q.front() > x && q.back() <= x)
        {
            x = q.front();
            ans.append(1, 'L');
            q.pop_front();
        }
        else if (q.front() <= x && q.back() > x)
        {
            x = q.back();
            ans.append(1, 'R');
            q.pop_back();
        }
        else
        {
            break;
        }
    }
    const ll m = ans.size();
    cout << m << endl;
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