// Problem: Dislike of Threes
// Link to the problem: https://codeforces.com/contest/2142/problem/B
fun main() {
    val t = readLine()!!.toLong()
    repeat(t.toInt()) {
        val n = readLine()!!.toLong()
        val a = mutableListOf<Long>()
        var i = 1L
        while (a.size <= n) {
            val x = i.toString()
            if (x.last() == '3') {
                i++
                continue
            } else if (i % 3 == 0L) {
                i++
                continue
            } else {
                a.add(i)
                i++
            }
        }
        println(a[(n - 1).toInt()])
    }
}