// Problem: Three Problems
// Link to the problem: https://codeforces.com/contest/1211/problem/A
import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

val reader: BufferedReader = BufferedReader(InputStreamReader(System.`in`))
var tokenizer: StringTokenizer? = null

fun next(): String {
    while (tokenizer == null || !tokenizer!!.hasMoreTokens()) {
        val line: String = reader.readLine() ?: throw RuntimeException("Unexpected end of input")
        tokenizer = StringTokenizer(line)
    }
    return tokenizer!!.nextToken()
}

fun nextLong(): Long = next().toLong()

fun solve() {
    val n: Long = nextLong()
    var mx1: Long = Long.MIN_VALUE
    var mx2: Long = Long.MIN_VALUE
    var mx3: Long = Long.MAX_VALUE
    var x: Long = -1L
    var y: Long = -1L
    var z: Long = -1L
    for (i: Long in 0L until n) {
        val w: Long = nextLong()
        if (w > mx1) {
            mx3 = mx2
            mx2 = mx1
            mx1 = w
            x = y
            y = z
            z = i + 1
        } else if (w > mx2 && w != mx1) {
            mx3 = mx2
            mx2 = w
            x = y
            y = i + 1
        } else if (w > mx3 && w != mx2 && w != mx1) {
            mx3 = w
            x = i + 1
        }
    }
    if (mx1 == Long.MIN_VALUE || mx2 == Long.MIN_VALUE || mx3 == Long.MIN_VALUE) {
        println("-1 -1 -1")
    } else {
        println("$x $y $z")
    }
}

fun main() {
    solve()
}