// Problem: YetnotherrokenKeoard
// Link to the problem: https://codeforces.com/contest/2142/problem/C
import java.util.*
fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextLong()
    repeat(t.toInt()) {
        val s = scanner.next()
        val lowerIndex = Stack<Long>()
        val upperIndex = Stack<Long>()
        for (i in s.indices) {
            when (s[i]) {
                'b' -> {
                    if (lowerIndex.isNotEmpty()) {
                        lowerIndex.pop()
                    }
                }
                'B' -> {
                    if (upperIndex.isNotEmpty()) {
                        upperIndex.pop()
                    }
                }
                else -> {
                    if (s[i].isUpperCase()) {
                        upperIndex.push(i.toLong())
                    } else if (s[i].isLowerCase()) {
                        lowerIndex.push(i.toLong())
                    }
                }
            }
        }
        val a = mutableListOf<Long>()
        while (lowerIndex.isNotEmpty()) {
            a.add(lowerIndex.pop())
        }
        while (upperIndex.isNotEmpty()) {
            a.add(upperIndex.pop())
        }
        a.sort()
        val ans = StringBuilder()
        for (i in a.indices) {
            ans.append(s[a[i].toInt()])
        }
        
        println(ans.toString())
    }
}