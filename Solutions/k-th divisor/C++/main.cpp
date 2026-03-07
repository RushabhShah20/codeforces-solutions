// Problem: k-th divisor
// Link to the problem: https://codeforces.com/contest/762/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    priority_queue<ll, vector<ll>, greater<>> pq;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            pq.push(i);
            if (i * i != n)
            {
                pq.push(n / i);
            }
        }
    }
    ll ans = pq.top();
    while (k > 0 && !pq.empty())
    {
        ans = pq.top();
        pq.pop();
        k--;
    }
    if (k > 0)
    {
        ans = -1;
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