// Problem: Furniture Store
// Link to the problem: https://codeforces.com/contest/2141/problem/A
fun main() {
    val t = readLine()!!.toLong()
    repeat(t.toInt()) {
        val n = readLine()!!.toLong()
        val a = readLine()!!.split(" ").map { it.toLong() }

        var minCost = a[0]
        val ans = mutableListOf<Long>()

        for (i in 1 until n.toInt()) {
            if (a[i] < minCost) {
                minCost = a[i]
            } else {
                ans.add((i + 1).toLong())
            }
        }

        println(ans.size)
        if (ans.isNotEmpty()) {
            println(ans.joinToString(" "))
        } else {
            println()
        }
    }
}