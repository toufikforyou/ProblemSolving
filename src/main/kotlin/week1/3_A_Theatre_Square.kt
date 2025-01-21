package week1

fun main() {
    val (n, m, a) = readln().split(" ").map { it.toLong() }


    val flagstonesAlongN = (n + a - 1) / a
    val flagstonesAlongM = (m + a - 1) / a

    val totalFlagstones = flagstonesAlongN * flagstonesAlongM;

    println(totalFlagstones)
}