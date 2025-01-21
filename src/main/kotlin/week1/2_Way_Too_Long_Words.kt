package week1

fun main() {
    val number: Int = readln().toInt()

    for (n in 1..number) {
        val input = readln()
        val first = input.first()
        val last = input.last()
        val length = input.length

        if (length <= 10) println(input) else println("$first${length - 2}$last")
    }
}