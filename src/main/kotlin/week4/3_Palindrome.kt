package week4

fun main() {
    println(isPalindrome(121))
}

fun isPalindrome(x: Int): Boolean {

    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false
    }

    var number = x

    var reverse = 0

    while (true) {
        val last = number % 10

        reverse = (reverse * 10) + last

        number /= 10

        if (number == 0) {
            break
        }
    }
    return reverse == x
}