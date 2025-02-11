int maxSubarrySum(int arr[],int n ){
    int maxSum =IN_MIN;
    for(int i=0;i<n-1;i++){
       int currSum=0;
    }
    for(int j=i;j<n-1;j++){
        currSum+ = arr[j];
if(currSum > maxSum) {
    currSum =maxSum;

    }
}
return maxSum;
}
