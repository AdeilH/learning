

fun main(){
    val a = 10;
    val b = 15;
    // single line
    val min = if (a > b) a else b;
    println("${min}");
    println("${maximum(2, 4)}");
}

fun maximum(a: Int, b: Int): Int{
    if (a > b){
        return a;
    } else {
        return b;
    }
}