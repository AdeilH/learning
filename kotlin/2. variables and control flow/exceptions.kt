fun main(){
    val arr1 = arrayOf(5, 3,4,2,1,3);
    
    // runtime exceptions
    try{
        val element = arr1[5];
        println("${element}");
    } catch(e: Throwable){
        println(e.message);
    }
    // Kotlin only has unchecked exception
    try{
    throwException();
    } catch(e: Throwable){
        println(e.message);
    }

    val test = try{
        arr1[6]
    }catch(t: Throwable){
        0
    }
    println("${test}");
}

fun throwException(){
    throw Exception("Application Level Exception");
}