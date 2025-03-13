package week4

fun main() {
    val (m, n) = readln().split(" ").map { it.toInt() }

    val totalArea = m * n
    val boxArea = 2 * 1

    val maxDominoes = totalArea / boxArea

    println(maxDominoes)
}
