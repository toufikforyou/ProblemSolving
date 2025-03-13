package week4

fun main() {
    val (n, k) = readln().split(" ").map { it.toInt() }
    val scores = readln().split(" ").map { it.toInt() }

    val threshold = scores[k - 1]
    val qualified = scores.count { it >= threshold && it > 0 }

    println(qualified)
}
