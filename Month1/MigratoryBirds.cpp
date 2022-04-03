int migratoryBirds(vector<int> arr) {
    map<int,int> birdFreq;
    int result=0;
    int freq=0;
    for(auto i:arr){
        birdFreq[i]++;
    }
    for(auto i:birdFreq){
       if(i.second>freq){
           freq=i.second;
           result=i.first;
       }   
    }
    return result;
} 
