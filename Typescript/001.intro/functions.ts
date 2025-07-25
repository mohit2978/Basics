function addTwo(num:number) {
    return num+2;
}

let val=addTwo(5);
console.log(val);

let user=(name:string,password:string,isADMIN:boolean=false):number=>{
    if(!isADMIN){
        console.log("not admin "+name);
        return 1;
        
    }
    return 2;
    
}

console.log(user("mohit","1245",true));
console.log(user("rohit","1245"));


let arr=["a","b","c"];

arr.map((ele):string=>{
    return "Elment is "+ele;
})