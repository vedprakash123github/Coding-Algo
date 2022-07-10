

/*{
let x=6;
}
function p()
{
    console.log(x);
}
p();*/
//f1();
//Query is : why I can't access this function outside of blocks. is it block scoped.

    
/*function f1()
{
    
    var a=12;
    console.log(a);
    function f12()
    {
        var c=a;
        console.log(c);
    }
    
    
}
}
f1();
console.log("js");*/






// Query: Why I can't see the f12() in f1 scope block if I am not making a call to f12 in f1 but in the ec f12 should be there.
/*function f1()
{
    
    var a=12;
    
    function f12()
    {
        var c=a;
        console.log(c);
    }
    
    
}*/


//Closures

/*let p=33;
function x()
{
   
    var a=7;
    //y();
    function y()
    {
        var p=99;
       
        console.log(a);
        
    }
    return y;
}
var z=x();
console.log(z);
z();*/

/*var warnUser = function (msg) {
    var calledCount = 0;
    return function() {
       calledCount++;
       console.log(msg + ' You have been warned ' + calledCount + ' times.');
    };
};

var warnForTamper = warnUser('You can not tamper with our HTML.');
warnForTamper();
warnForTamper();*/

/*function countWrapper() {
    var counter = 0;
    function updateClickCount() {
        ++counter;
        console.log(counter);
        // Do something with counter
    }
    return updateClickCount;
    
}

var z=countWrapper();
z();
z();
console.log(z());*/

/*function clickCount()
{
    var counter=0;
    return function()
    {
        ++counter;
        console.log(counter);
    }
}

var updateClickCount = clickCount();
updateClickCount();*/

/*f();
function showV()
{
    var p=24;
    setTimeout(function()
       {
           console.log(p);
       },500);
}

function f()
{
    var p=34;
    setTimeout(function()
       {
           console.log(p);
       },1000);
       showV();
       
}*/




/*function a()
{
    console.log("a called");
    return function()
    {
        console.log("annonymous function");
    }
}
var res=a();
res();
//res();*/


/*var b=function xyz(){
    console.log("njj");
}*/

//b();


//xyz();

/*function x()
{
    console.log(x);
}
x();
setTimeout(function(){console.log("timer"),5000});
y();
function y()
{
    console.log(y);
}*/
//document.getElementById("clickme").addEventListener("click",function xyz(){console.log("buttonClicke");});

/*function a()
{
   console.log("in function a");
   
}
function b()
{
    console.log("in function b");
}
console.log("after b");

function c()
{
    console.log("in function c");
}

a();
b();
c();*/

/*function foo(callbackFn){
    callbackFn();
    // function test is undefined here, since it was declared in another scope 
}

function bar(){
    // test is only available in bar's scope
    let x=78;
    console.log("bar");
    function test(){
        console.log("test");
    }
    test();
    
}
//foo(bar);
const arr=[1,2,3,4,5];
const output= arr.map(function double(x){return x*2;});
const output2=arr.filter(function odd(x){return x%2;});
const output3=arr.filter(function double(x){return x*2;});
const output4=arr.reduce(function(acc,curr){
    if(curr>acc)
    {
        acc=curr;
    }
    return acc;
},0)

/*console.log(output);
console.log(output2);
console.log(output3);
console.log(arr);*/
//console.log(output4);

var data="hello this is data1"
console.log(data)
var data="Hello this is data2"
console.log(data)


