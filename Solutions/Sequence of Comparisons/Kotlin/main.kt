// Problem: Sequence of Comparisons
// Link to the problem: https://codeforces.com/contest/1571/problem/A
import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

fun solve(br: BufferedReader, sb: StringBuilder) {
    val s: String = br.readLine().trim()
    val n: Long = s.length.toLong()
    var x: Boolean = false
    var y: Boolean = false
    for (i: Long in 0 until n) {
        val ch: Char = s[i.toInt()]
        if (ch == '<') {
            x = true
        }
        if (ch == '>') {
            y = true
        }
    }
    val result: String = if (x && !y) {
        "<"
    } else if (!x && y) {
        ">"
    } else if (!x && !y) {
        "="
    } else {
        "?"
    }
    sb.append(result).append("\n")
}

fun main() {
    val br: BufferedReader = BufferedReader(InputStreamReader(System.`in`))
    val t: Long = br.readLine().trim().toLong()
    val sb: StringBuilder = StringBuilder()
    var i: Long = 0
    while (i < t) {
        solve(br, sb)
        i++
    }
    print(sb)
}