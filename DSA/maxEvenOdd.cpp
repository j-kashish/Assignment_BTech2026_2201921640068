int maxEvenOdd(int arr[],int n ){
    int res=1;
    int curr=1;

    for(int i=0;i<n;i++){
        if ((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2 !=0 && arr[i-1] ==0))
        {
        cur++;
        res=max(curr,res);
        }
        else
            curr=1;
        }
    
    return res
}