int birthdayCakeCandles(vector<int> candles) {
    int highest = 0;
    int count = 0;
    for(int i = 0; i<=candles.size()-1;i++){
        if(candles[i]>highest){
            highest = candles[i];
        }
    }
    for(int i = 0; i<=candles.size()-1;i++){
        if(candles[i]==highest){
            count++;
        }
    }
    return count;
}