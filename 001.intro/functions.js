function addTwo(num) {
    return num + 2;
}
var val = addTwo(5);
console.log(val);
var user = function (name, password, isADMIN) {
    if (isADMIN === void 0) { isADMIN = false; }
    if (!isADMIN) {
        console.log("not admin " + name);
        return "hello";
    }
    return false;
};
console.log(user("mohit", "1245", true));
console.log(user("rohit", "1245"));
