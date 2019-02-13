let quadrants=function (x,y){
    if(x == 0) {
        if(y ==0) {
            return "bod je na 0,0"
        }else {
            return "bod je na ose y"
        }
    }else {
        if(y ==0) {
            return "bod je na priamke x"
        }else {
            if(x > 0) {
                if(y > 0) {
                    return "bod je v Q1"
                }else {
                    return "bod je v Q4"
                }
            }else {
                if(y > 0) {
                    return "bod je v Q2"
                }else {
                    return "bod je v Q3"
                }
            }
        }
    }
}
console.log(quadrants(0,0))