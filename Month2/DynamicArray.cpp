vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    int lastAnswer=0;
    vector<vector<int>> arr(n);
    vector<int> result;
    
    for(auto query:queries){
        if(query[0]==1){
            int idx=(query[1]^lastAnswer)%n;
            arr[idx].push_back(query[2]);
        }
        else if(query[0]==2){
            int idx=((query[1]^lastAnswer)%n);
            lastAnswer=arr[idx][query[2] % arr[idx].size()];
            cout<<lastAnswer<<endl;
            result.push_back(lastAnswer);
        }
    }
    return result;
}
