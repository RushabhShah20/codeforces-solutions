// Problem: Password Generator
// Link to the problem: https://codeforces.com/contest/2087/problem/A
fun main() {
    val t = readLine()!!.toLong()
    repeat(t.toInt()) {
        val (a, b, c) = readLine()!!.split(" ").map { it.toLong() }
        
        val charArray = arrayOf('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z')
        val CHAR_ARRAY = arrayOf('A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z')
        val num = arrayOf('0', '1', '2', '3', '4', '5', '6', '7', '8', '9')
        
        val ans = StringBuilder()
        
        for (i in 0 until a) {
            ans.append(num[i.toInt()])
        }
        
        for (i in 0 until b) {
            ans.append(CHAR_ARRAY[i.toInt()])
        }
        
        for (i in 0 until c) {
            ans.append(charArray[i.toInt()])
        }
        
        println(ans.toString())
    }
}