// Problem: The Check of the Point
// Link to the problem: https://codeforces.com/contest/683/problem/A
import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

fun solve(reader: BufferedReader) {
    val tokenizer: StringTokenizer = StringTokenizer(reader.readText())
    val a: Long = tokenizer.nextToken().toLong()
    val x: Long = tokenizer.nextToken().toLong()
    val y: Long = tokenizer.nextToken().toLong()
    val ans: Long = if (x > 0L && x < a && y > 0L && y < a) {
        0L
    } else if (x >= 0L && x <= a && y >= 0L && y <= a) {
        1L
    } else {
        2L
    }
    println(ans)
}

fun main() {
    val reader: BufferedReader = BufferedReader(InputStreamReader(System.`in`))
    solve(reader)
}