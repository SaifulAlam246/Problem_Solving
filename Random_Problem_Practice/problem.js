/** Problem -01 ( Divide the Asset ) */
var area = 800;
//write your code here
console.log(area/2);


/** Problem -02 ( Cycle or Laptop ) */
var money = 10000;
//write your code here
if(money>=25000){
    console.log("Laptop");
}
else if(money>=10000){
    console.log("Cycle");
}
else{
    console.log("Chocolate");
}


/** Problem -03 ( Medicine Planner ) */
var lastDay = 30 ;
//write your code here
for(let i=1;i<=lastDay;i++){
    if(i%3===0){
        console.log(i," - medicine");
    }
    else{
        console.log(i," - rest")
    }
}

/** Problem 04 - (Delete / Store) */
var fileName= "exp.docx";
//write your code here
var s = fileName.split('.');
if(s[0][0]==='#' || s[1]==='pdf' || s[1]==='docx'){
    console.log('Store');
}
else{
    console.log('Delete');
}

/** Problem 05 - ( PH Email Generator )  */
var student= { name: "mewo" , roll: 96 ,department: "cse"  };
//write your code here
var value=Object.keys(student);
var ans="";
for(var key of value){
    if(key==='department'){
        ans+='.';
    }
   ans+=student[key];
}
console.log(ans + "@ph.ac.bd");


/** Problem 06 :  (Current Salary )  */
var experience = 40;
var startingSalary = 30000;
//write your code here

for(let i=1;i<=experience;i++){
    bonus = startingSalary * 5 /100;
    startingSalary+=bonus;
}

console.log(startingSalary.toFixed(2));


