import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    
    repeat(t) {
        val a = scanner.nextLong()
        val b = scanner.nextLong()
        val c = scanner.nextLong()
        
        println(if (canMakeEqual(a, b, c)) "YES" else "NO")
    }
}

private fun canMakeEqual(a: Long, b: Long, c: Long): Boolean {
    val totalCards = a + b + c
    if (totalCards % 3 != 0L) {
        return false
    }
    
    val target = totalCards / 3
    if (target < maxOf(a, b) || target > c) {
        return false
    }
    
    val cardsToTake = c - target
    if (cardsToTake < 1 || cardsToTake > c) {
        return false
    }
    
    val cardsNeededForA = target - a
    val cardsNeededForB = target - b
    
    return cardsNeededForA >= 0 && cardsNeededForB >= 0 && 
           cardsNeededForA + cardsNeededForB == cardsToTake
} 
