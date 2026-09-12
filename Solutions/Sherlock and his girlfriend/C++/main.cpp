// Problem: Sherlock and his girlfriend
// Link to the problem: https://codeforces.com/contest/776/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<bool> &isPrime)
{
    ll n;
    cin >> n;
    const ll m = n <= 2 ? 1 : 2;
    cout << m << endl;
    for (ll i = 2; i <= n + 1; i++)
    {
        const ll x = isPrime[i] ? 1 : 2;
        cout << x << " ";
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
    solve(isPrime);
    return 0;
}