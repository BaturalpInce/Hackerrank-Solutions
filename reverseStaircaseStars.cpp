void staircase(int n) {
    for(int i = 1; i<=n;i++){
        for(int y = n-i; y>0;y--){
            cout<<" ";
        }
        for(int j = 0; j<i;j++){
            cout<<'#';
        }
        cout<<endl;
    }
}
