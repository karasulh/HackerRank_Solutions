int sockMerchant(int n, vector<int> ar) {
    int result(0);
    
    /*
    //Second Way, Easy Solution 
    map<int,int> socks;
    for(auto i:ar){
        socks[i]++;
        //cout<<i<<" "<<socks[i]<<endl;
    } 
    for(auto i:socks){
        result+=i.second/2;
    }
    */
    
    //First Way, Complex Solution
    vector<int>::iterator it;
    vector<int>::iterator it2;
    for(it=ar.begin();it!=ar.end();it++){
        int temp=1;
        for(it2=it+1;it2<ar.end();it2++){
            cout<<"now"<<*it2<<endl;
            if(*it == *it2){
               temp++;
               ar.erase(it2);
               for(auto y:ar) cout<<y<<endl;
               it2-=1; //after erasing, it increases it2 with 1, so we decrease it again not to miss any
               //it2=it+1; // it is also okay.
            }
        }
        result+=temp/2;
    } 
            
    return result;
}
