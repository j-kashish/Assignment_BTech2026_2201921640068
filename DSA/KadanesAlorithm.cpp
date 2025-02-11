int maximunSubarraySum(int arr[],int n ){
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n-1;i++){
        currSum+ = arr[i];
        if (currSum> maxSum){
            currSum =maxSum;
        }
        if (currSum<maxSum){
            currSum=0;
        }
    }
    return maxSum;
}