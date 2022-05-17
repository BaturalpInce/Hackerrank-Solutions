vector<int> reverseArray(vector<int> a) {
    int tmp = 0;
    int abc = a.size()-1;
    for(int i = 0; i<=a.size()/2-1;i++){
        tmp = a[i];
        a[i] = a[abc];
        a[abc--] = tmp;
    }
    return a;
}