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