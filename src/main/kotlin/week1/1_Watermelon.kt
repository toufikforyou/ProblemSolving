package week1

fun main() {
    val weight: Int = readln().toInt()

    if (weight % 2 == 0 && weight > 2) println("YES") else println("NO")

}