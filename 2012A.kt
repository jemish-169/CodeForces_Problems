fun main(){
     val num = readLine()!!.toInt()

    repeat(num) {
        val (k, m) = readInts()
        println("${minOf(k,m)} ${maxOf(k,m)}")
    }
}

fun readInts(): List<Int> {
    return readLine()!!.split(" ").map { it.toInt() }
}

// 3 2 1 3
// 8 4 2 8


// 8 8 4