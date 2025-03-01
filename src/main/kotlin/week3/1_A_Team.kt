package week3

fun main(){
    var input = readln().toInt()

    var count = 0

    val array = mutableListOf<List<Int>>()

    while (input > 0){
        val ( a, b, c ) = readln().split(" ").map { it.toInt() }
        array.add(listOf(a, b, c))
        input--
    }

    for(i in array) {
        var c = 0
        for(j in i){
            if(j > 0) c++
        }

        if(c >= 2) count++
    }

    println(count)
}

// simplify the code
fun main2(){
    val n = readln().toInt()
    var count = 0

    repeat(n) {
        val (a, b, c) = readln().split(" ").map { it.toInt() }
        if (listOf(a, b, c).count { it > 0 } >= 2) count++
    }

    println(count)
}