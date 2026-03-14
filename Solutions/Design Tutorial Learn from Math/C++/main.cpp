// Problem: Design Tutorial: Learn from Math
// Link to the problem: https://codeforces.com/contest/472/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(vector<bool> &isPrime)
{
    ll n;
    cin >> n;
    ll x = 4;
    while (isPrime[n - x] || isPrime[x])
    {
        x++;
    }
    cout << x << " " << n - x << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> isPrime(10000001, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 1000000; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 1000000; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    solve(isPrime);
    return 0;
}