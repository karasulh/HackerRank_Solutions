int maxMin(int k, vector<int> arr) {
    
    sort(arr.begin(),arr.end());
    int result=arr[k-1]-arr[0];
    
    for(int i=1;i<arr.size()-(k-1);i++){
        if((arr[i+k-1]-arr[i])<result)
            result=arr[i+k-1]-arr[i];
    }
    
    return result;
}
