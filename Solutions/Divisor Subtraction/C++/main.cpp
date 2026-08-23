// Problem: Divisor Subtraction
// Link to the problem: https://codeforces.com/contest/1076/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<ll> &primes)
{
    ll n;
    cin >> n;
    ll x = 0;
    for (const ll prime : primes)
    {
        if (n % prime == 0)
        {
            x = prime;
            break;
        }
    }
    if (x == 0 || x == n)
    {
        cout << 1 << endl;
        return;
    }
    const ll ans = x == 2 ? n / 2 : 1 + (n - x) / 2;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> isPrime(1000001, true);
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
    vector<ll> primes;
    primes.push_back(2);
    for (ll i = 3; i <= 1000000; i += 2)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
    solve(primes);
    return 0;
}