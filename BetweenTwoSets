int getTotalX(vector<int> a, vector<int> b) {
    int result;
    int maxA= *max_element(a.begin(),a.end());
    int minB= *min_element(b.begin(),b.end());
    vector<int> samples;
    vector<int> samples2;
    for(int i=maxA;i<=minB;i++){
       int divided=0; 
       for(auto x:a){
           if(i%x==0)
             divided++;
        }  
        if(divided==a.size()) 
            samples.push_back(i);             
    }
    //cout<<samples.size()<<endl;
    
        
    for(int i=0;i<samples.size();i++){
        int divided=0;
        for(auto y:b){
            if(y%samples[i]==0)
                divided++;       
        }
        if(divided==b.size()){
            samples2.push_back(samples[i]);
        }                 
    }
    result=samples2.size();
    
    return result; 
}
