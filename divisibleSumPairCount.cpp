int divisibleSumPairs(int n, int k, vector<int> ar) {
    int resultCount = 0;
    for(int i = 0; i<=n; i++){
        for(int j = ar.size()-1; j>i;j--){
            if((ar[i]+ar[j])%k==0){
                resultCount++;
            }    
        }
    }
    return resultCount;
}