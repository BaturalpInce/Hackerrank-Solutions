string timeConversion(string s) {
    int a = stoi(s.substr(0,2));
    if(s.substr(8,9)=="PM" && a>=12){
        string emptychar = "";
        s.replace(8,2,emptychar);
        }
    else if(s.substr(8,9)=="PM" && a<12){
        int c = stoi(s.substr(0,2));
        if(c<12 && c>10){
        int b = c+12;
        s.replace(0,2,to_string(b));        
        }
        else{
        int b = stoi(s.substr(1,1))+12;
        s.replace(0,2,to_string(b));
        }
        string emptychar = " ";
        s.replace(8,2,emptychar);
    }
    else if(s.substr(8,9)=="AM" && a>=12){
        string b = "00";
        s.replace(0,2,b);
        string emptychar = "";
        s.replace(8,2,emptychar);
    }
    else if(s.substr(8,9)=="AM" && a<12){
        string emptychar = "";
        s.replace(8,2,emptychar);
    }
    return s;
}