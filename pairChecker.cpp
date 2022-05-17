int sockMerchant(int n, vector<int> ar) {
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = n; j>i; j--){
            if(ar[i]==ar[j] && ar[i] != -1 && ar[j] !=-1){
                ar[i] = -1;
                ar[j] = -1;
                count++;
            }
        }
    }
    return count;
}