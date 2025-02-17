bool isSubsequence(String &s1, String &s2, int n ,int m){
    if (n<m){
    return false;
    }
    int j=0;
for(int i=0;i<n && j<m ; i++){
    if (s1[i] == s2)
    j++;
}
return (j==m);
}