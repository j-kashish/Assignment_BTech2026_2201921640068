void LeftRotateD(int arr[],int d,int n ){
    int temp[d];
    for(int i=0;i<d;i++){
        arr[i]=arr[temp];
     }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}