// Problem: Fibonacci army
// Link to the problem: https://codeforces.com/contest/72/problem/G
solve := method(n,
    dp := List clone
    dp append(1)
    dp append(1)
    for(i, 2, n,
        dp append(dp at(i - 1) + dp at(i - 2))
    )
    ans := dp at(n)
    ans println
)

n := File standardInput readLine asNumber
solve(n)