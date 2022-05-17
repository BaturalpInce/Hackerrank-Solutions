string dayOfProgrammer(int year) {
    string result = "";
    if(year<=1917){
        if(year%4==0){
            result = "12.09."+to_string(year);
        }
        else{
            result = "13.09."+to_string(year);
        }
        //condition for julian cal
    }
    else if(year==1918){
        result = "26.09."+to_string(year);
    }
    else if(year>=1919){
        //cond for greg cal
        if(year%400==0||((year%4==0)&&(year%100!=0))){
            result = "12.09."+to_string(year);
        }
        else{
            result = "13.09."+to_string(year);
        }
    }
    return result;
}