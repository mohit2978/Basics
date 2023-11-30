// const score: Array<number> = []
// const names:Array<string> = []
// function identityOne(val: boolean | number): boolean | number{
//     return val
// }
// function identityTwo(val: any):any{
//     return val
// }
// function identityThree<Type>(val: Type): Type {
//     return val
// }
// identityThree(true)
function identityFour(val) {
    return val;
}
var BottleImpl = /** @class */ (function () {
    function BottleImpl(brand, type, mat) {
        this.brand = brand;
        this.type = type;
        this.mat = mat;
    }
    return BottleImpl;
}());
var b = identityFour({ brand: "abc", type: 123, mat: 456 });
console.log(b);
// function getSearchProducts<T>(products: T[]): T {
//     // do some database operations
//     const myIndex = 3
//     return products[myIndex]
// }
// const getMoreSearchProducts = <T,>(products: T[]): T => {
//     //do some database operations
//     const myIndex = 4
//     return products[myIndex]
// }
// interface Database {
//     connection: string,
//     username: string,
//     password: string
// }
// function anotherFunction<T, U extends Database>(valOne:T, valTwo:U):object {
//     return{
//         valOne,
//         valTwo
//     }
// }
// // anotherFunction(3, {})
// interface Quiz{
//     name: string,
//     type: string
// }
// interface Course{
//     name: string,
//     author: string,
//     subject: string
// }
// class Sellable<T>{
//     public cart: T[] = []
//     addToCart(product: T){
//         this.cart.push(product)
//     }
// }
