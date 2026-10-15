// Problem: Color Revolution
// Link to the problem: https://codeforces.com/contest/1346/problem/A
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

fun solve(out: StringBuilder) {
    val n: Long = nextLong()
    val k: Long = nextLong()
    if (k == 1L) {
        val ans: Long = n shr 2
        out.append(ans).append(" ")
            .append(ans).append(" ")
            .append(ans).append(" ")
            .append(ans).append("\n")
        return
    }
    val a: Long = n * (k - 1) / (k * k * k * k - 1)
    val b: Long = a * k
    val c: Long = a * k * k
    val d: Long = a * k * k * k
    out.append(a).append(" ")
        .append(b).append(" ")
        .append(c).append(" ")
        .append(d).append("\n")
}

fun main() {
    val out: StringBuilder = StringBuilder()
    var t: Long = nextLong()
    while (t-- > 0) {
        solve(out)
    }
    print(out)
}