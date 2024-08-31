let signingPrice = new Map();

signingPrice.set("Raya", 30.00);
signingPrice.set("Calafiori", 35.00);
signingPrice.set("Merino", 35.00);
signingPrice.set("Sterling", 0.00);

console.log(signingPrice);

console.log(signingPrice.size);

// Getting data
console.log(signingPrice.get("Raya"));

// Delete Data
signingPrice.delete("Raya");
console.log(signingPrice);