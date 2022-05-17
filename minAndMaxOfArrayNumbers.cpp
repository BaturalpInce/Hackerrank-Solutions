void miniMaxSum(vector<int> arr) {
    int posi = 0;
    long long currentSum = 0;
    long long highestSum = 0;
    long long smallestSum = 0;
    int for_once = 0;
    for(int position = arr.size()-1; position>=0;position--){
        for(int i = 0; i<=arr.size()-1;i++){
            if(i!=position){
            currentSum += arr[i];
            }
            else if(i==position){
                continue;
            }
        }
        while(for_once==0){
            highestSum=currentSum;
            smallestSum=currentSum;
            for_once = for_once+1;
        }
        if(currentSum > highestSum){
            highestSum=currentSum;
        }
        else if(currentSum<smallestSum){
            smallestSum = currentSum;
        }
        currentSum = 0;
    }
    cout<<smallestSum<<" "<<highestSum;
}
