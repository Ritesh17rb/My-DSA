

try {
    let age = prompt("Enter Your Age")
    age = Number.parseInt(age)

    // console.log(ritesh)
    if (age > 150) {
        throw new ReferenceError("Ritesh is India")
    }
} catch (error) {
    console.log(error.name);
}




// console.log("INida")