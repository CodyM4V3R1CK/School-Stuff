let calculator=function(a,b,c){
    switch (b){
        case "+" :
            return a+c;
        case "-" :
            return a-c;
        case "*" :
            return a*c;
        case "/" :
            if (c==0){
                return "Error, can't divide by zero"
            }
            return (a/c)
    }
}
console.log(calculator(12,"/",0))