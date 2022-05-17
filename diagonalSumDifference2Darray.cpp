int diagonalDifference(vector<vector<int>> arr) {
    int lefttoright_diagonalsum = 0;
    int righttoleft_diagonalsum = 0;
    int k = arr[0].size()-1;
    for(int i = 0; i<=arr.size()-1;i++){
        lefttoright_diagonalsum=lefttoright_diagonalsum + arr[i][i];
        righttoleft_diagonalsum=righttoleft_diagonalsum + arr[k][i];
        k=k-1;
    }
    int result = abs(lefttoright_diagonalsum-righttoleft_diagonalsum);
    return result;
}