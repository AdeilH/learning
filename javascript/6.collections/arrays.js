let signings = ["Raya", "Calafiori", "Merino", "Neto", "Sterling"];

// searching 

let raya_signed = signings.includes("Raya");
console.log(raya_signed);

let raya_index = signings.indexOf("Raya");
console.log(signings[raya_index]);

// adding at the end

signings.push("prayers");
console.log(signings)

// adding at the beginning
signings.unshift("prayers");
console.log(signings);

// adding at an index
signings.splice(3, 0, "prayers");
console.log(signings);

signings.shift();
console.log(signings);

signings.splice(2, 1);
console.log(signings);