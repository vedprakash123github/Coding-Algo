

//exercise 1:

// let mass_Mark=78;
// let height_Mark=1.69;

// let mass_John=92;
// let height_John=1.95;

// let BMI_Mark=mass_Mark/(height_Mark**2);
// let BMI_John=mass_John/(height_John**2);

// const high_Bmi=BMI_Mark>BMI_John;
// console.log(high_Bmi);
// if(BMI_Mark>BMI_John){
//     console.log(`marks bmi is larger ${BMI_Mark}`);
// }
// else
// {
//     console.log(`John's BMI is larger ${BMI_John}`);
// }

//========================string literals=======================

//console.log('starting with \n\ line ending with \n\ second line');
// console.log(`this is 
// multiline string
// here`);

//====================type conversion================
// const yearBirth='1999';
// console.log(Number(yearBirth)); //convert to number from string
// console.log(yearBirth+18);  
// console.log(Number("ved"));  //Not a Number means invalid number
// console.log(typeof NaN) //NaN is numeric type

// console.log(String(89)+89+90); //convert to string


//============type coercion============================
//type coercion occurs behind the scenes when javascript evaluates two or more operands in operators at that time js automatically converts one type to another
// console.log("I am"+23 +"years old"); //here js converts 23 to strig implicitly
// console.log('23'-'10'-3)// note here js will 

//=========================================================
//object creation using bracket{}

// let obj={
//     name:"ved",
//     age:21,
//     add:"agra"
// };

// for(let key in obj)
// {
//     console.log(key);
// }
// delete obj.add;

//===============================
//object creation using constructor function

function person(first,last, age)
{
    this.first=first;
    this.last=last;
    this.age=age;
}

let obj1=new person("ved","sharma",30);
console.log(obj1);


