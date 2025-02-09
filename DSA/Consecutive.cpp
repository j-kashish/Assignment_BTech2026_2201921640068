int Consecutive(bool arr[] ,int n ){
    int res=0;
    for (int i =0;i<n;i++){
     if (arr[i]==0)
           res=0;
    
     else {
        cur++;
        res= max(curr,res);
     }
    }
    return res;
}