fun test(name: String){
    println("Hello " + name);
}

fun simpleAdd(a: Int, b: Int) = a + b;

fun main(){
    test("World");
    println(simpleAdd(1,2));
}