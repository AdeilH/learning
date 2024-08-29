// object literal preffered {}

let obj1 = {};

// object through Constructor

let obj2 = new Object();

obj1.test = "Hello";

console.log(obj1);
console.log(obj2);

let obj3 = {
    test: "Hello",
    failed: true,
};

console.log(obj3);

// accessing a property

console.log(`${obj3.test}`);
console.log(`${obj3["failed"]}`);

// delete property

delete obj3.test;
console.log(`after deleting test ${obj3.test}`);

// objects are passed by reference

let obj4 = obj3;

obj4.test = "Hello";

console.log(`updating test in obj4 ${obj3.test}`);
