const testSet = new Set();

testSet.add("ABC");

console.log(testSet);

testSet.add("ABC");
console.log(testSet);

testSet.add("XYZ");
console.log(testSet);

console.log(testSet.size);

console.log(testSet.values());

testSet.delete("XYZ");