string gamingArray(vector<int> arr) {
    
    int max=arr[0];
    int count=1;
    for(auto i:arr){
        if(i>max){
            max=i;
            count++;
        }  
    }
    if(count%2==1)
        return "BOB";
    else
        return "ANDY";
    //No work for large sized arr case
    /*
    int person=0; //if 0=Bob, if 1=Andy
    vector<int>::iterator it;
    it = max_element(arr.begin(),arr.end()); 
    while(it!=arr.begin()){
      it = max_element(arr.begin(),it);  
      person++;
      person%=2;
    }
    if(person==0)
        return "BOB";
    else
        return "ANDY"; 
    */
}
