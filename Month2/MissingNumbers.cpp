vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    
    sort(brr.begin(),brr.end());
    sort(arr.begin(),arr.end());
    vector<int> result;
    
    //First Way of Solution
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
    /*
    //Second Way of Solution
    map<int,pair<int,int>> freq;
    for(auto i:arr){
        freq[i].first++;
    }
    for(auto i:brr){
        freq[i].second++;
    }
    for(auto i:freq){
        if(i.second.first<i.second.second){
            result.push_back(i.first);
        }
    }
    */
    return result;
    
}
