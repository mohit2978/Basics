// const User = {
//     name: "hitesh",
//     email: "hitesh@lco.dev",
//     isAvtive: true
// }

//  function createUser({ name, isPaid }: { name: string, isPaid: boolean }) {
//     console.log("Name is"+name);
//     console.log("Ispaid value"+isPaid);
     
// }

//  let newUser = {name:"mohit", isPaid: false, email: "h@h.com"}

//  createUser(newUser )



// function createCourse():{name: string, price: number}{
//     return {name: "reactjs", price: 399}
// }





// type User = {
//     readonly _id: string
//     name: string
//     email: string
//     isActive: boolean
//     credcardDetails?: number
// }

// let myUser: User = {
//     _id: "1245",
//     name: "h",
//     email: "h@h.com",
//     isActive: false
// }

// myUser.name="mohit";
// myUser._id="123";

type cardNumber = {
    cardnumber: string
}

type cardDate = {
    cardDate: string
}

type cardDetails = cardNumber & cardDate & {
    cvv: number
}
 let  cd:cardDetails={
    cardnumber:"abc",
    cardDate:"def",
    cvv:123
}

console.log(cd);


// myUser.email = "h@gmail.com"
// myUser._id = "asa"








export {}