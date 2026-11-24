// Problem: World Football Cup
// Link to the problem: https://codeforces.com/contest/19/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<string, vector<ll>> m;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = {0, 0, 0};
    }
    const ll k = (n * (n - 1)) >> 1;
    for (ll i = 0; i < k; i++)
    {
        string x, y;
        cin >> x >> y;
        ll a = -1, b = -1;
        const ll p = x.size(), q = y.size();
        for (ll j = 0; j < p; j++)
        {
            if (x[j] == '-')
            {
                a = j;
                break;
            }
        }
        for (ll j = 0; j < q; j++)
        {
            if (y[j] == ':')
            {
                b = j;
                break;
            }
        }
        const string s = x.substr(0, a), t = x.substr(a + 1);
        const ll c = stoll(y.substr(0, b)), d = stoll(y.substr(b + 1));
        m[s][1] += c;
        m[s][2] += d;
        m[t][2] += c;
        m[t][1] += d;
        if (c > d)
        {
            m[s][0] += 3;
        }
        else if (c < d)
        {
            m[t][0] += 3;
        }
        else
        {
            m[s][0] += 1;
            m[t][0] += 1;
        }
    }
    vector<pair<string, vector<ll>>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](const pair<string, vector<ll>> &x, const pair<string, vector<ll>> &y)
         {
            if(x.second[0]==y.second[0]){
                if(x.second[1]-x.second[2]==y.second[1]-y.second[2]){
                    return x.second[1]>y.second[1];
                }
                return x.second[1]-x.second[2]>y.second[1]-y.second[2];
            }
            return x.second[0] > y.second[0]; });
    const ll e = n >> 1;
    vector<string> ans(e);
    for (ll i = 0; i < e; i++)
    {
        ans[i] = v[i].first;
    }
    sort(ans.begin(), ans.end());
    for (ll i = 0; i < e; i++)
    {
        cout << ans[i] << endl;
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