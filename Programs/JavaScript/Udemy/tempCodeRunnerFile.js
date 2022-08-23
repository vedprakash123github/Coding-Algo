Promise.resolve(1)
//     .then((r)=>{console.log(r);return r*10;}) //1
//     .then((r)=>{console.log(r);return r*10;})//10
//     .then((r)=>{setTimeout(()=>console.log(r),1000);return r*10;})
//     .then((r)=>{console.log(r)})