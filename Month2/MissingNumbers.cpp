vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    
    sort(brr.begin(),brr.end());
    sort(arr.begin(),arr.end());
    vector<int> result;
    map<int,int> bmap;
    for(auto i:brr){
        bmap[i]++;
    }
    for(auto i:arr){
        bmap[i]--;
    }
    for(auto i:bmap){
        if(i.second!=0){
            result.push_back(i.first);
        }
    }
    return result;
    
}
