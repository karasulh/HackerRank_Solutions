string balancedSums(vector<int> arr) {
    int left=0,right=0,sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    
    for(int i=0;i<arr.size();i++){
        //cout<<left<<" "<<(sum-arr[i])/2<<endl;
        if(left==(sum-arr[i])/2){
            return "YES";
        }
        left+=arr[i];
    }
    
    return "NO";
}
