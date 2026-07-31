// Problem: Selling Hamburgers
// Link to the problem: https://codeforces.com/contest/1431/problem/A
import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

fun solve(br: BufferedReader, sb: StringBuilder) {
    val n = br.readLine().trim().toLong()
    val st = StringTokenizer(br.readLine())
    val a = LongArray(n.toInt())
    for (i in 0 until n.toInt()) {
        a[i] = st.nextToken().toLong()
    }
    a.sort()
    var ans = 0L
    for (i in 0 until n.toInt()) {
        ans = maxOf(ans, a[i] * (n - i))
    }
    sb.append(ans).append('\n')
}

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val t = br.readLine().trim().toInt()
    val sb = StringBuilder()
    repeat(t) {
        solve(br, sb)
    }
    print(sb)
}