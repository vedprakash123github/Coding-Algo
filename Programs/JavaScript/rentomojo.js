/*console.log(x);
console.log(getname)
var x=7;
name();
function getname()
{
    console.log('namste javascript')
}
var getname2=function(){
    console.log("getname2");
}*/

/*var x=4;
a();
b();
function a()
{
    var x=11;
    console.log(x);
}
function b()
{
    var x=12;
    console.log(x);
}*/


// let x=50;
//   x="hi";
//  console.log(x);

//  function stackframeRecord()
//  {
//      try{
//          return 1+stackframeRecord();
//      }
//      catch(e)
//      {
//          return 1;
//      }
//  }

//  console.log("stack frame")
//  console.log(stackframeRecord())
// const ved={
//     name:'ved',
//     age:23,
//     add:'Pinahat'
// };
// ved['age']=47
// console.log(ved.age)
// console.log(ved['name'])

// function create(name,age)
// {
//     const obj={
//         des:'developer'
//     }
//     obj.name=name;
//     obj.age=age
//     obj.introduce=function()
//     {
//         console.log('hi, I am',this.name,'age',age);
//     }
//     return obj;
// }

// const obj1=create('ved',27)
// console.log(obj1.name)
// console.log(obj1.age)
// console.log(obj1.des)
// obj1.introduce()

// const jsobj={
//     name:'javascript',
//     age:23,
//     add:'browser'
// }
// jsobj.gd='now'
// console.log(jsobj.name)
// console.log(jsobj.gd)
// function z()
// {
//     const i=90;
// function x()
// {
//     const x=56;
//     return function y()
//     {
//         const s=45;
//         console.log(i,x,s);
//     }
// } 
// const r=x();
// return r;
// }
// y=z();
// y();

// function myfunction(name,add)
// {
//     console.log(add)
//     name();
// }

// myfunction(function(){console.log('hi')},'pinahat')
// const x=function(){
//     console.log('hi')
// }
// x();

// function x()
// {
//     //let p=10;
//     for(let i=0;i<3;i++)
//     {
//         setTimeout(function y(){ console.log(i)},1000);
        
//     }
   
// }
// y=x();

// function test()
// {
//     let s=10;
//     var t=90;
//     return function(){
//         console.log(s,t);
//     }
// }
// var x=test();
// x();

// function constfun()
// {
//     this.v1=function() {
//         console.log('v1');
//     }
//     this.v2=function() {
//         console.log('v2');
//     }
// }

// const res=new constfun();
// res.v1();


//=========currying examples==============
// function calculateVolume(length) {
//     return function (breadth) {
//         return function (height) {
//             return length * breadth * height;
//         }
//     }
// }
// const b=calculateVolume(4);
// const h=b(5);
// console.log(h(6));
//console.log(calculateVolume(4)(5)(6));


// function add(x)
// {
//     return function(y)
//     {
//         return function(z)
//         {
//             return x+y+z;
//         }
//     }
// }

// console.log(add(3)(4)(5));

// function x(abc)
// {
//     abc();
// }

// x(function ()
// {
//     console.log('abc')
// });
//===================================================================================
//arrow functions
// const sum=()=>{
//     console.log('hi')
// }

// const sum1=function(){
//     console.log('hi')
// }
// function sum3()
// {
//     console.log('sum3');
// }
// console.log(sum);
// console.log(sum1);
// sum3();

//constructor function

// function cons(name,year)
// {
//     this.name=name;
//     this.year=year;
//     this.f=function(){
//         console.log('this is a function');
//     }

// }
// const obj=new cons('ved',1976);
// obj.add='pinhat';
// obj.water='bluie';
// console.log(obj);
// console.log(obj.name);


// const func=()=>{
//     parenthesis can be omitted id there an arguement
//     const fun=x=>{
//         curly braces can be omitted if the function body has single AudioListener;
//         const fun=()=> conso
//     }
// }
// const f= x=> console.log(x);
// f(5);


// function sum(a)
// {
//     a();
// }

// sum(function (){
//     console.log('hi');
// });

// class Car{
//     constructor(name,age,add,profession)
//     {
//         this.name=name;
//         this.age=age;
//         this.add=add;
//         this.profession=profession;
//         this.display=function(){
//             console.log(name,age,add,profession);
//         }
//     }
// }
// const obj=new Car('ved',67,'pinahat','engineer');
// //obj.display();
// let {name,age}=obj; //destructing in js;
// console.log(name);
// console.log(age);
//console.log(obj);

// const arr=[10,20,30,40,'ki',true,90.00,undefined];
// arr.push(44);
// arr.pop(44);
//arrays can have functions as their elements
// const arr=[10,20];
// arr[2]=function ()
// {
//     console.log('this function is inside array');
// }
// arr[2]();
//console.log(arr[2]);

// function x(s)
// var x=10;
// {let  x=90;}
//=============================================================
//map fucntion
// function double(x)
// {
//     return x*2;
// }
// function triple(x)
// {
//     return x*3
// }
// function binary(x)
// {
//     return x.toString(2);
// }

// const arr=[11,20,30,40]
// const output=arr.map(double)
// console.log(output)

//====================================================================================================
//filter function 
// function isOdd(x)
// {
//     return x%2
// }
// function sum1(acc,curr) 
// {
//     if(curr>acc) {acc=curr}
//     return acc;
// }

// const arr1=[10,11,12,13,14,15]
// const output1=arr1.reduce(sum1,0)
// console.log(output1)

//===================================================================
//Promise

// let p=new Promise((resolve,reject)=>{
//     let a=2+1;
//     if(a==2)
//     {
//         resolve('suceess')
//     }
//     else{
//         reject('Failed')
//     }
// })

// p.then((message)=>{console.log("sucees", message)})
// .catch((error)=>{console.log("errro",error)})

// let a=9;
// if(x=1)
// {
//      a=6;
// }
// console.log(a);

// let b={x,y};
// let c=b;
// //c.z=5;
// console.log(b)
// console.log(c);

//=======================================================================
//let and const variables
//both the scenarios given below will give error

//  var a=10; //let variables can not be declared again
//  let a=19;
//  console.log(a)

//let a=2;
//var a=10;           
//console.log(a)

//=======================================================================

{
    //const varables have to be initialised/defined. 
    //Also const variables can not be reassigned the values.
    //Also //const variable can not be redeclared
    //Refer below

    //const b;  //SyntaxError: Missing initializer in const declaration
    // const b=0;
    // //b=10;     //TypeError: Assignment to constant variable.
    // console.log(b)
}


//==================================================================================
{
    //illegal shadowing :
                    // while shadowing a varible. It should not cross the scope of boundary. Below is example of shadowing
    //let variable can not be shadwoed by var. This is illegal shadowing.See the example below
    // let a=10;
    // {
    //     var a=2;
    // }
    // console.log(a);
    }

//================================================================================================
//In objects this points to the object.
// const obj={name:'ved',
//             a: function(name)
//             {
//                 console.log(this)
//             }    
//         };

// obj.a('Sharma');

//===================================================================================================
//In function this points to global object.

// function sample(name,address)
// {
//     console.log(this);
// }

// sample('anish','delhi')

//=================================================================================================
//objects are passed by reference in js whule the primitive types are passed by value in js


// const obj={name:'ved'};
// function sample(obj)
// {
//     obj.name='dev';
// }
// sample(obj)
// console.log(obj.name);

// const obj1={a:4,b:6}
// const obj2=obj1;
// obj1.a=15;
// console.log(obj2)

//=====================================================================================================
//arrays are passed by reference in js

// const arr=[10,20,30,40]

// function sample(nums,x)
// {
//     x=x*x;
//     nums[0]=x;
// }
//sample(arr,15);
// for(let index=0;index<arr.length;index++)
// {
//     console.log(arr[index]);
// }
// console.log(arr.indexOf(50))
 //arr.forEach(item=> console.log(item));

 //=================================================================================================
 //constructor function
  
//  function test(name,age,add) //query
//  {
//     this.name=name;
//     this.age=age;
//     this.add=add;
//  }
//   test('ved',23,'delhi');
//  console.log(test.rahul)
  

//  function test(name,age,add)
//  {
//     this.name=name;
//     this.age=age;
//     this.add=add;
//     this.f=function()
//     {
//         console.log('Hi')
//     }
//  }
//  const obj=new  test('ved',23,'delhi');
//  obj.job='It';
//  obj.f();
//  console.log(obj.job)

//===================================================================================
//This key word in function called in an object
//objects are defined in scripscope and hence they are not accessible before initialisation like the let and const.
//are are aceesible before initialisation.

// var fname='ved'
// // console.log(arr)
// // var arr=[10,20,30]
// // console.log(obj)
// const obj={
//     fname:'Atul',
//     f:function()
//     {
//         console.log('inside object')
        
//     }
// }
// function show()
// {
//     console.log(this.fname)
// }
// //show();
// //obj.f();

//===========================================================
 //passing function inside an annonymous function if the function needs arguments.
 //always pass function without parenthesis if you want to use them as call back function
// function v(name)
// {
//     console.log('hi',name)
// }
// function a(b)
//   {
//       b();
//   }
// a(()=>{v('ved')});

function sap()
{
    console.log('sap');
}

function vap(sap)
{
    sap();
}
vap(sap());
