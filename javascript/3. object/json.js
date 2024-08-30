let requestBody = {
    id: "1",
    name: "Oasis C-1",
    date: new Date(),
    discount: false,
};

console.log(requestBody);

// Convert To Json string

let jsonRequest = JSON.stringify(requestBody, null, 2);
console.log(jsonRequest);

// convert json to object

let jsonRAW = `{
    "isAvailable": false,
    "Seat": "30-C"
}`;

let convertedObject = JSON.parse(jsonRAW);
console.log(convertedObject);

