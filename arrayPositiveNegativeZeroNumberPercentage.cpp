void plusMinus(vector<int> arr) {
    float limit = arr.size();
    float zeroCount = 0;
    float posCount = 0;
    float negCount = 0;
    for(int i = 0; i<=limit-1;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else if(arr[i]>0){
            posCount++;
        }
        else if(arr[i]<0){
            negCount++;
        }
        if(i==limit){
            break;
        }
    }
    float zCount = zeroCount/limit;
    float pCount = posCount/limit;
    float nCount = negCount/limit;
    cout<<setprecision(6)<<pCount<<endl<<setprecision(6)<<nCount<<endl<<setprecision(6)<<zCount;
}