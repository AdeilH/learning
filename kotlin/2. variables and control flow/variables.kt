fun main(){
    var byte: Byte = 1;
    var s: Short = -32000;
    var i: Int = 33;
    var l: Long = 35000000;
    var l_prefix= 3_500_000_000L;

    var bin = 0b00100101;
    var hex = 0xAA;

    var d: Double = 35.00;
    var f: Float = 35.00f; 
    var f_prefix = 35.00f; 
    var isBool: Boolean = true;
    var name: String = "adeel"
    val charType: Char = 'a';
    
    val constName: String = "Abc";

    // string Template
    println("Hello $constName");
    println("Hello ${constName.uppercase()}"); 
}