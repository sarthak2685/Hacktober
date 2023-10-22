

let p1 = async()=>{
  return new Promise((resolve,reject)=>{
  setTimeout(()=>{
    resolve("value 1")
  },2000)
})};

let p2 = async()=>{
  return new Promise((resolve,reject)=>{
  setTimeout(()=>{
    resolve("value 2")
  },1000)
})};

let p3 = async()=>{
  return new Promise((resolve,reject)=>{
  setTimeout(()=>{
    resolve("value 3")
  },3000)
})};

let a = async()=>{
  console.time("run");
  // let a1= await p1();
  // let a2 = await p2();
  // let a3 = await p3();
  // console.log(a1,a2,a3);
  let a1=p1();
  let a2=p2();
  let a3=p3();
  let a1a2a3 =await Promise.all([a1,a2,a3])
  console.log(a1a2a3);
  console.timeEnd("run");
};
 a();                    

