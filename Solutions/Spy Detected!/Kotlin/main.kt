// Problem: Spy Detected!
// Link to the problem: https://codeforces.com/contest/2142/problem/A
fun main() {
    val t = readLine()!!.toLong()
    repeat(t.toInt()) {
        val n = readLine()!!.toLong()
        val a = readLine()!!.split(" ").map { it.toLong() }
        if (a[1] == a[2]) {
            if (a[0] != a[1] && a[0] != a[2]) {
                println(1)
            }
        }
        for (i in 1 until a.size - 1) {
            if (a[i - 1] == a[i + 1]) {
                if (a[i] != a[i - 1] && a[i] != a[i + 1]) {
                    println(i + 1)
                }
            }
        }
        if (a[a.size - 3] == a[a.size - 2]) {
            if (a[a.size - 1] != a[a.size - 2] && a[a.size - 1] != a[a.size - 3]) {
                println(a.size)
            }
        }
    }
}