

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

// function person(first,last, age)
// {
//     this.first=first;
//     this.last=last;
//     this.age=age;
// }

// let obj1=new person("ved","sharma",30);
// console.log(obj1);


//call back hell

// register(function(){
//     sendEmail(
//         login(
//             getUserData(
//                 displayUserData(){}){}
//                 ){}
//                 ){}
//                 });


// Promise
// function multiply(x)
// {
//     return new Promise((resolve,reject)=>{
//         //setTimeout(()=>resolve(x*2),x*1000);
//        // setTimeout(()=>reject("error occured"),x*1000);
//         //resolve(x*2);
//         reject("error occured");
        
//     })
       
    
       
       
    
// }
// const promise=multiply(2);
// //promise.then(response=>console.log(response),err=>console.log(err));

// promise.catch()

//Array ops

// let arr=[10,20,30];
// arr.reduce(fun);
// console.log(arr);
// function fun(acc,curr){
//     return acc+curr;
// }

// const p1 = Promise.resolve("calling next");
// // const p2 = p1.catch((reason) => {
// //   // This is never called
// //   console.error("catch p1!");
// //   console.error(reason);
// // }).then((res)=>{console.log(res)});
// const p2=p1.then((res)=>{console.log(res);return res});

// console.log(p2);

// function doSomething()
// {
//     return new Promise((resolve,reject)=>{
//         resolve("promise resolved");
//     })
// }

// const p1=doSomething();
// const p2=p1.then()

// function register(cb){setTimeout(()=>{console.log('this is register function');cb();},1000);}
// function sendEmail(cb){setTimeout(()=>{console.log('this is sendMail function');cb();},2000)}
// function login(cb){setTimeout(()=>{console.log('this is login function');cb();},3000)}
// function getUserData(cb){setTimeout(()=>{console.log('this is getUserData function');cb()},4000)}
// function displayUSerData(){setTimeout(()=>{console.log('this is displayUserData function')},5000)}


//call back hell


// register(function(){
//     sendEmail(function(){ 
//         login(function(){
//             getUserData(function(){
//                 displayUSerData();});
//             });
//         });
//        });


       function register(){
        return new Promise((resolve,reject)=>{
            setTimeout(()=>{console.log('this is register function');resolve('error while registering');},4000);
        })
       }

       function sendEmail(){
        return new Promise((resolve,reject)=>{
            setTimeout(()=>{console.log('this is sendMail function');resolve('error occured while sending email');},1000);
        })
       }

        function login(){
        return new Promise((resolve,reject)=>{
            setTimeout(()=>{console.log('this is login function');resolve();},1000);
        })
       }

       function getUserData(){
        return new Promise((resolve,reject)=>{
            setTimeout(()=>{console.log('this is getUserData function');resolve();},1000);
        })
       }

       function displayUserData(){
        return new Promise((resolve,reject)=>{
            setTimeout(()=>{console.log('this is displayUserData function');resolve();},2000);
        })
       }


       //chaining promises

const p=register();
p.then(sendEmail) //then() also returns a promise. here then will return the promise returned by the sendMil function and this promise will be handled by the next then().
    .then(login)
    .then(getUserData)
    .then(displayUserData)
    .catch((err)=>{console.log(`error: ${err}`);});


// function register(){setTimeout(()=>{console.log('this is register function');},4000);}
//  function sendEmail(){setTimeout(()=>{console.log('this is sendMail function');},1000)}
//  function login(){setTimeout(()=>{console.log('this is login function');},6000)}
//  function getUserData(){setTimeout(()=>{console.log('this is getUserData function');},1000)}
//  function displayUserData(){setTimeout(()=>{console.log('this is displayUserData function')},1000)}


//function with async keyword also returns a promise internally
//await can only be used inside a async function.
//awati will make the js wait till the code infront of wait executes completely.

// async function authenticate()
// {
//     try{
//     const message=await register();
//     await sendEmail();  //the control will not move to next line untill the sendMail call is completed.
//     await login();
//     await getUserData();
//     await displayUserData();
//     }catch(err){console.log(err);} //this is one of the way of handling error in async and wait.
//    // console.log(message);
// }
// authenticate().then(()=>console.log('all set'));//.catch((err)=>console.log(err)); //we can handle the error in two ways one by using a catch block here 
//                                                 //and other way is by using a try catch block in the authenticate method.


// Example function to print values of r asynchronously.


// function print(r)
// {
//     return new Promise((resolve,reject)=>{
//         console.log(r);
//         resolve(r*10);
//     });
// }

// print(1).then((res)=>{setTimeout(()=>{print(res)},1000)})
// .then((res)=>{print(res)});

// Promise.resolve(1)
//     .then((r)=>{console.log(r);return r*10;}) //1
//     .then((r)=>{console.log(r);return r*10;})//10
//     .then((r)=>{setTimeout(()=>console.log(r),1000);return r*10;})
//     .then((r)=>{console.log(r)})