let word = "abcd";
let testNumber = 1234;
let testBoolean = false;
let testDouble = 30.05;
// This is undefined
let undefined;

// This is null
let nullObject = null;

console.log(word);
console.log(testNumber);
console.log(testBoolean);
console.log(testDouble);
console.log(undefined);
console.log(nullObject);

let price = 1_000_000;
let americanFormat = price.toLocaleString("en-US");
let punjabFormat = price.toLocaleString("pa-PA");
console.log(americanFormat);
console.log(punjabFormat);


let currencyformatter = new Intl.NumberFormat("en-US", {style: "currency", currency: "USD"});
let currencyformatter2 = new Intl.NumberFormat("pa-PA", {style: "currency", currency: "JPY"});

console.log(`${currencyformatter2.format(price)}`);

// Dates

var date = new Date();

console.log(date.toDateString());

console.log(date.toLocaleDateString("en-US"));
console.log(date.toLocaleDateString("en-UK"));
console.log(date.toLocaleDateString("ja-JP"));
console.log(date.toLocaleDateString("ur-PK"));


console.log(date.toLocaleTimeString("en-US"));
console.log(date.toLocaleTimeString("en-UK"));

let options = {
    dateStyle: "long",
    timeStyle: "long"
};

console.log(date.toLocaleString("en-US", options));