vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    
    vector<int> result;
    sort(sticks.begin(),sticks.end());
    for(int i=sticks.size()-1;i>=2;i--){
        if(sticks[i]<sticks[i-1]+sticks[i-2]){
            result.push_back(sticks[i-2]);
            result.push_back(sticks[i-1]);
            result.push_back(sticks[i]);
            return result;
        }
        
        
    }
    result.push_back(-1);
    return result;
    
}
