// Problem: Panoramix's Prediction
// Link to the problem: https://codeforces.com/contest/80/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(vector<bool> &isPrime)
{
    ll n, m;
    cin >> n >> m;
    ll x = n % 2 == 0 ? n + 1 : n + 2;
    while (!isPrime[x])
    {
        x += 2;
    }
    if (m == x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> isPrime(101, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 100; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 100; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    solve(isPrime);
    return 0;
}