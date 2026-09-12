// Problem: NN and the Optical Illusion
// Link to the problem: https://codeforces.com/contest/1100/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    long double n, k;
    cin >> n >> k;
    const long double PI = acosl(-1.0), ans = k / (1 / sinl(PI / n) - 1);
    cout << fixed << setprecision(15) << ans << endl;
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