// Problem: Game
// Link to the problem: https://codeforces.com/contest/2199/problem/A
import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

private val reader: BufferedReader = BufferedReader(InputStreamReader(System.`in`))
private var tokenizer: StringTokenizer = StringTokenizer("")

private fun next(): String {
    while (!tokenizer.hasMoreTokens()) {
        val line: String? = reader.readLine()
        if (line == null) throw RuntimeException("Unexpected end of input")
        tokenizer = StringTokenizer(line)
    }
    return tokenizer.nextToken()
}

private fun nextLong(): Long {
    return next().toLong()
}

fun solve(output: StringBuilder) {
    val k: Long = nextLong()
    val a1: Long = nextLong()
    val b1: Long = nextLong()
    val a2: Long = nextLong()
    val b2: Long = nextLong()
    val ans: String = if (a1 - b1 + a2 - b2 < k) "YES" else "NO"
    output.append(ans).append('\n')
}

fun main() {
    val output: StringBuilder = StringBuilder()
    var t: Long = nextLong()
    while (t-- > 0) {
        solve(output)
    }
    print(output)
}