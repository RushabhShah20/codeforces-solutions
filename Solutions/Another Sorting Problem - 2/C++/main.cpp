// Problem: Another Sorting Problem
// Link to the problem: https://codeforces.com/contest/1575/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<string, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a[i] = {s, i + 1};
    }
    sort(a.begin(), a.end(), [m](const pair<string, ll> &x, const pair<string, ll> &y)
         {
        for(ll i=0;i<m;i++){
            if(x.first[i]!=y.first[i]){
                if(i&1){
                    return x.first[i]>y.first[i];
                }else{
                    return x.first[i]<y.first[i];
                }
            }
        }return false; });
    for (ll i = 0; i < n; i++)
    {
        cout << a[i].second << " ";
    }
    cout << endl;
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