string kangaroo(int x1, int v1, int x2, int v2) {
    string result;
    for(int second = 0;second<=10000;second++){
        int distk1 = x1+v1*second;
        int distk2 = x2+v2*second;
        if(distk1 == distk2){
            result = "YES";
            break;
        }
        else if (distk1 != distk2){
            result = "NO";
            continue;
        }
    }
    return result;
}
