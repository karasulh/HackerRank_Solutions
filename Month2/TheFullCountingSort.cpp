bool sort_helper(vector<string> s1,vector<string> s2){
    return stoi(s1[0])<stoi(s2[0]);
}

void countSort(vector<vector<string>> arr) {
    
    for(int i=0;i<arr.size()/2;i++){
        arr[i][1]='-';
    }
    
    //This Stable_Sort Way is working but STABLE_SORT exceeds time limit when n=max, arr.size()=1000000   
    //In "sort" the order of the same numbers are changing if we use it.
    //sort(arr.begin(),arr.end(),sort_helper); //No work here.
    //Use when the given same numbers should stay with given order.
    /*
    stable_sort(arr.begin(),arr.end(),sort_helper); 
    
    for(int i=0;i<arr.size();i++){ 
        cout<<arr[i][1]<<" ";                     
    }
    */
    //This way is working
    vector<string> arr2[100];
    for(int i=0;i<arr.size();i++){
        int index=stoi(arr[i][0]);
        arr2[index].push_back(arr[i][1]);
    }
    
    for(int i=0;i<100;i++){
        for(auto j:arr2[i])
            cout<<j<<" ";
    }
    
}
