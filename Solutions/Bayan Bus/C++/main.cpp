// Problem: Bayan Bus
// Link to the problem: https://codeforces.com/contest/475/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> ans = {"+------------------------+", "|#.#.#.#.#.#.#.#.#.#.#.|D|)", "|#.#.#.#.#.#.#.#.#.#.#.|.|", "|#.......................|", "|#.#.#.#.#.#.#.#.#.#.#.|.|)", "+------------------------+"};
    for (ll j = 1; j <= 21; j += 2)
    {
        for (int i = 0; i < 6; i++)
        {
            if (n == 0)
            {
                break;
            }
            if (ans[i][j] == '#')
            {
                ans[i][j] = 'O';
                n--;
            }
        }
    }
    for (ll i = 0; i < 6; i++)
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