package week3

fun main() {
    var input = readln().toInt()

    var count = 0

    while (input > 0) {
        val statement = readln().toCharArray()

        val first = statement.first()
        val second = statement[1]
        val third = statement[2]

        if (statement.contains('x') || statement.contains('+') || statement.contains('-')) {
            if ("$first$second" == "++") {
                count++
            } else if ("$first$second" == "--") {
                count--
            } else if ("$second$third" == "++") {
                count++
            } else if ("$second$third" == "--") {
                count--
            }
        }
        input--
    }

    println(count)
}