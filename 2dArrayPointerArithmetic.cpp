long arrayManipulation(int n, vector<vector<int>> queries) {
    int* myArray = new int[n*n];
    
    for(int i = 0; i<=queries.size()-1;i++){
        for(int j = 0; j<=queries[i][1]; j++){
        myArray[queries[i][j]*n+j] += queries[i][2];
        }
    }
    int max = 0;
    for(int k = 0; k<=queries.size()-1;k++){
        for(int u = 0; u<=queries.size(); u++){
            if(myArray[k*n+u]>max){
                max = myArray[k*n+u];
            }
        }
    }
    delete[] myArray;
    return max;
}