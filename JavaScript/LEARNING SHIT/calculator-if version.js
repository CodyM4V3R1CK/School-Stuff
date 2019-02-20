let calculator=function(a,b,c){
    if (b=="+"){
        return a+c
    }else if (b=="-"){
        return a-c
    }else if (b=="*"){
        return a*c
    }else if (b=="/" && c==0){
        return "error, can't divide by zero"
    }else if (b=="/"){
        return a/c
    } 
}
console.log(calculator(100,"/",0))