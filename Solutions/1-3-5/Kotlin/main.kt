// Problem: 1-3-5
// Link to the problem: https://codeforces.com/contest/1958/problem/A
import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

val reader: BufferedReader = BufferedReader(InputStreamReader(System.`in`))
var tokenizer: StringTokenizer = StringTokenizer("")

fun next(): String {
    while (!tokenizer.hasMoreTokens()) {
        tokenizer = StringTokenizer(reader.readLine())
    }
    return tokenizer.nextToken()
}

fun nextLong(): Long = next().toLong()

fun solve(output: StringBuilder) {
    val n: Long = nextLong()
    var ans: Long = n
    for (i: Long in 0L..(n / 5)) {
        ans = minOf(ans, (n - 5 * i) % 3)
    }
    for (i: Long in 0L..(n / 3)) {
        ans = minOf(ans, (n - 3 * i) % 5)
    }
    output.append(ans).append('\n')
}

fun main() {
    var t: Long = nextLong()
    val output: StringBuilder = StringBuilder()
    while (t-- > 0) {
        solve(output)
    }
    print(output)
}