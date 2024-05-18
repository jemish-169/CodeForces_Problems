fun main(args : Array<String>)
{
    val n = readLine() !!.toInt()

                repeat(n)
    {
        val l = readLine() !!.toInt()
                    when(l)
        {
            1, 4, 7->println("1") 2->println("2") else->println("0")
        }
    }
}
