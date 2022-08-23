//objects:

// const obj={name:"vedprakash",
//             age:23,
//             gender:"male"};
// console.log(Object.getPrototypeOf(obj));

// const personPrototype = {
//     greet() {
//       console.log('hello!');
//     }
//   }
  
//   const carl = Object.create(personPrototype);
//   //carl.greet();
//   console.log(Object.getPrototypeOf(carl));

// const obj={a:4,b:5,__proto__:{c:6,d:7}}
// console.log(obj.[Prototype]);
//console.log(Object.getPrototypeOf(obj));


//==============================================================================================================================
//Prototype Inheritance

// const user={
//     getName:function(){
//                         return this.name
//                       },
//     getAge: function(){
//                         let age=new Date().getFullYear()-this.birth
//                          return age
//                     }
//         }

    
// const student={
//                 name:"ved",
//                 birth:1999,
//                 __proto__:user  //this is also a way to inherit user object into student.
//               }

    
//student.__proto__=user;  //student object inheriting user object.

// console.log(student.getAge()); //calling the method of user object from student object.



//=======================================================================================================================
//creating custom prototype properties and fucntions that can be used with any object.

Object.prototype.customName="vedprakash";
Object.prototype.customfunction=function(){console.log("this is custom function")};
const obj={name:"ved"}
obj.customfunction();