vector<int> closestNumbers(vector<int> arr) {
    vector<int> result;
    sort(arr.begin(),arr.end());    
    int minDiff=abs(arr[1]-arr[0]);
    
    for(int i=0;i<arr.size()-1;i++){
        if(abs(arr[i+1]-arr[i])<minDiff){
            minDiff=abs(arr[i+1]-arr[i]);
        }
    }
    
    for(int i=0;i<arr.size()-1;i++){
        if(abs(arr[i+1]-arr[i])==minDiff){
            result.push_back(arr[i]);
            result.push_back(arr[i+1]);
        }
    }
    return result; 
}
