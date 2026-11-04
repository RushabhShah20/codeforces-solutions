// Problem: Snacktower
// Link to the problem: https://codeforces.com/contest/767/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    priority_queue<ll> pq;
    ll m = n;
    for (ll i = 0; i < n; i++)
    {
        pq.push(a[i]);
        while (!pq.empty())
        {
            if (pq.top() == m)
            {
                cout << pq.top() << " ";
                pq.pop();
                m--;
            }
            else
            {
                break;
            }
        }
        cout << endl;
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