vector<int> breakingRecords(vector<int> scores) {
    int lowest = scores[0];
    int highest = scores[0];
    int recordlowCount = 0;
    int recordhighCount = 0;
    for(int i = 1; i<=scores.size()-1;i++){
        if(scores[i]>highest){
            recordhighCount++;
            highest = scores[i];
        }
        else if(scores[i]<lowest){
            recordlowCount++;
            lowest = scores[i];
        }
    } 
    vector<int> scores_tempi(2);
    scores_tempi[0] = recordhighCount;
    scores_tempi[1] = recordlowCount;
    return scores_tempi;
}