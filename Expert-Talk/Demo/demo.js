var myName = 'Kaushal';

console.log(myName);

// Arrow function in JS

let obj = new Object({
    name: 'Kaushal',
    age: 21,
    sayName: function() {
        setTimeout(() => {
            console.log(this.name);
        }
        , 1000);
    }
})