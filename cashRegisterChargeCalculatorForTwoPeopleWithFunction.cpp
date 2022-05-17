void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i = 0; i<=bill.size()-1;i++){
        if(i == k){
            continue;
        }
        else{
        sum += bill[i];    
        }
    }
    if(sum/2 == b){
        cout<<"Bon Appetit";
    }
    else{
        cout<<b-(sum/2);
    }
}
