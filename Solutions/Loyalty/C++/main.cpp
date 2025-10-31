// Problem: Loyalty
// Link to the problem: https://codeforces.com/contest/2161/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    ll total = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    if (total < x)
    {
        cout << 0 << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    sort(a.begin(), a.end());
    multiset<ll> available(a.begin(), a.end());
    vector<ll> order;
    ll current_sum = 0;
    ll bonus = 0;
    while (!available.empty())
    {
        ll current_level = current_sum / x;
        ll next_threshold = (current_level + 1) * x;
        ll gap = next_threshold - current_sum;
        ll chosen;
        auto it = available.lower_bound(gap);
        if (it != available.end())
        {
            chosen = *available.rbegin();
            available.erase(available.find(chosen));
        }
        else
        {
            chosen = *available.begin();
            available.erase(available.begin());
        }
        order.push_back(chosen);
        ll old_level = current_sum / x;
        current_sum += chosen;
        ll new_level = current_sum / x;
        if (new_level > old_level)
        {
            bonus += chosen;
        }
    }
    cout << bonus << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << order[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}