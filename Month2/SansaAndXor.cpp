int sansaXor(vector<int> arr) {
    int result=0;
    
    if(arr.size()%2==0)
        return 0;
    else{
        for(int i=1;i<=arr.size();i++){
            //Find frequency of occurence number in subarray for each number
            //Left subarray size * right subarray size [1,2,3,4] for 3: 3*2=6
            if( (i*(arr.size()-i+1)) %2) 
            result^=arr[i-1];
        }
    }
    
    /*  //Not Valid for High Number of Array
    int result=0;
    vector<int> res;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(i==0){ //a^b^c
            for(auto j:arr)
                result^=j;
            cout<<result<<endl;
        }
        else if(i==(arr.size()-1)){ //(a^b^c)
            for(auto j:arr)
                result^=j;
            cout<<result<<endl;
        }
        else{//It is enough because (a^b)^(b^c)=a^(b^b)^c=a^c
            result^=(arr[0]^arr[arr.size()-1]); 
            cout<<arr[0]<<" "<<arr[arr.size()-1]<<endl;
            cout<<result<<endl;
        }     
    }
    */
    //Not Valid for High Number of Array
    /*
    for(int i=1;i<=arr.size();i++){
        for(int j=0;j<arr.size();j+=i){
            result=0;
            for(int z=j;z<i;z++){
               result^=arr[z]; 
            }
            res.push_back(result); 
        }    
    }
    result=0;
    for(auto i:res){
        result^=i;
    }
    */
    return result;
}
