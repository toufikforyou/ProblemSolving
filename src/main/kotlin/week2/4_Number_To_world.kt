package week2

fun numberToWords(num: Int): String {
    if (num == 0) return "Zero"

    val unitsMap = mapOf(
        1 to "One",
        2 to "Two",
        3 to "Three",
        4 to "Four",
        5 to "Five",
        6 to "Six",
        7 to "Seven",
        8 to "Eight",
        9 to "Nine"
    )
    val teensMap = mapOf(
        10 to "Ten",
        11 to "Eleven",
        12 to "Twelve",
        13 to "Thirteen",
        14 to "Fourteen",
        15 to "Fifteen",
        16 to "Sixteen",
        17 to "Seventeen",
        18 to "Eighteen",
        19 to "Nineteen"
    )
    val tensMap = mapOf(
        20 to "Twenty",
        30 to "Thirty",
        40 to "Forty",
        50 to "Fifty",
        60 to "Sixty",
        70 to "Seventy",
        80 to "Eighty",
        90 to "Ninety"
    )

    val scaleNames = listOf("", "Thousand", "Million", "Billion", "Trillion")

    fun processChunk(num: Int): String {
        val result = StringBuilder()
        val hundreds = num / 100
        val lastTwoDigits = num % 100

        if (hundreds > 0) {
            result.append("${unitsMap[hundreds]} Hundred")
            if (lastTwoDigits > 0) result.append(" ")
        }

        when {
            lastTwoDigits in 10..19 -> {
                result.append(teensMap[lastTwoDigits])
            }

            lastTwoDigits > 0 -> {
                val tens = (lastTwoDigits / 10) * 10
                val units = lastTwoDigits % 10
                if (tens > 0) {
                    result.append(tensMap[tens])
                    if (units > 0) result.append(" ")
                }
                if (units > 0) {
                    result.append(unitsMap[units])
                }
            }
        }

        return result.toString()
    }

    val result = StringBuilder()
    var rem = num
    var scaleIndex = 0

    while (rem > 0) {
        val chunk = rem % 1000
        if (chunk > 0) {
            val chunkWords = processChunk(chunk)
            if (result.isNotEmpty()) result.insert(0, " ")
            if (scaleIndex > 0) result.insert(0, " ${scaleNames[scaleIndex]}")
            result.insert(0, chunkWords)
        }
        rem /= 1000
        scaleIndex++
    }

    return result.toString()
}