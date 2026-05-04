// Problem: Find Array
// Link to the problem: https://codeforces.com/contest/1608/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<ll> &primes)
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cout << primes[i] << " ";
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
    vector<bool> isPrime(10001, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 10000; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 10000; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<ll> primes;
    primes.push_back(2);
    for (ll i = 3; i <= 10000; i += 2)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve(primes);
    }
    return 0;
}