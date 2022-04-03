int pickingNumbers(vector<int> a) {
    
    sort(a.begin(),a.end());
    int len=0;
    int start=0;
    int num=1;
    int changeIndex=0;
    
    for(int i=1;i<a.size();i++){
        if(a[i]-a[start]>=1){
            changeIndex=i;
        }
        if(a[i]-a[start]>=2){
            num=1;
            len=max(len,i-start);
            start=changeIndex;
            i=changeIndex;
        }
        else
            num++;
    }
    return max(len,num);
    
    //IT FAILS FOR ONE CASE, I can not solve.
    // int sub1=0;
    // int sub1_save=0;
    // int prev,next,curr;
    // int result=0;

    // sort(a.begin(),a.end());
    
    
    // for(auto x:a){
    //     if(x==a[0])
    //         result++;
    // }
    // if(result==a.size())
    //     return result;
    // else 
    //     result=0;
    
    
    // for(int i=0;i<a.size();i++){
    //     if(a[i]==a[i+1]){
    //        sub1++;
    //     }
        
    //     else{
    //         sub1++;
    //         prev=a[i-sub1];
    //         curr=a[i];
            
    //         if(sub1_save!=0){
    //            if(curr-prev==1){
    //                if(result<sub1_save+sub1) 
    //                     result=sub1_save+sub1; 
    //                     cout<<"prev:"<<prev<<" sub1_save:"<<sub1_save<<" sub1:"<<sub1<<" curr:"<<curr<<" result"<<result;                       
    //                     sub1_save=sub1;

    //            } 
    //            else{
    //                sub1_save=sub1; 
    //            }
    //         }
    //         else{
    //             sub1_save=sub1; 
    //         }
    //         sub1=0;
    //     } 
    // }
    // return result;  
}
