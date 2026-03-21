// Problem: Factorise N+M
// Link to the problem: https://codeforces.com/contest/1740/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<ll> &primes, const vector<bool> &isPrime)
{
    ll n;
    cin >> n;
    ll i = 0;
    while (isPrime[n + primes[i]])
    {
        i++;
    }
    cout << primes[i] << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> isPrime(200001, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 200000; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 200000; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<ll> primes;
    primes.push_back(2);
    for (ll i = 3; i <= 100000; i += 2)
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
        solve(primes, isPrime);
    }
    return 0;
}