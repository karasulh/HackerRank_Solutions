vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> result;
    for(int i=d;i<arr.size();i++){
        result.push_back(arr[i]);
    }
    for(int i=0;i<d;i++){
        result.push_back(arr[i]);
    }
    return result;
    //IT FAILS FOR SOME CASES, I can not solve it.
    /*
    int temp=0; 
    int i=0;
    vector<int>::iterator it;
    while((i++)<d){  
        it=arr.begin();  
        temp=*it;
        arr.erase(it);
        arr.push_back(temp);
        for(auto x:arr) cout<<x<<" ";       
    }
    return arr;
    */
}
