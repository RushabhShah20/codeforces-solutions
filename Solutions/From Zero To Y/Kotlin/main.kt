// Problem: From Zero To Y
// Link to the problem: https://codeforces.com/contest/1488/problem/A
import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

private val reader: BufferedReader = BufferedReader(InputStreamReader(System.`in`))
private var tokenizer: StringTokenizer = StringTokenizer("")

private fun next(): String {
    while (!tokenizer.hasMoreTokens()) {
        tokenizer = StringTokenizer(reader.readLine())
    }
    return tokenizer.nextToken()
}

private fun nextLong(): Long = next().toLong()

fun solve() {
    val x: Long = nextLong()
    val y: Long = nextLong()
    val b: Long = y % x
    var a: Long = y / x
    var c: Long = 0L
    while (a > 0) {
        c += a % 10
        a /= 10
    }
    val ans: Long = b + c
    println(ans)
}

fun main() {
    var t: Long = nextLong()
    while (t-- > 0) {
        solve()
    }
}