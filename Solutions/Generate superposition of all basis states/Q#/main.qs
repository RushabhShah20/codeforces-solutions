// Problem: Generate superposition of all basis states
// Link to the problem: https://codeforces.com/contest/1002/problem/A1
namespace Solution {
    open Microsoft.Quantum.Primitive;
    open Microsoft.Quantum.Canon;

    operation Solve(qs : Qubit[]) : () {
        body {
            for (q in qs) {
                H(q);
            }
        }
    }
}