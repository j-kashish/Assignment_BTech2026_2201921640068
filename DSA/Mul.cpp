int Mul(int* a, int* b, int n ){
    b[0]=a[0];
    for (int i=0;i<n;i++){
        if (b[i]= b[i-1]* a[i])
    }
int prod =1;
for(int i=1;i<n-1;i++){
    b[i]=b[i-1]*prod;
    prod*= a[i];
}

b[0]=prod;
}