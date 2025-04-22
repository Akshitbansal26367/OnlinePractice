int smallestEvenMultiple(int n) {
    int value;
    if(n%2==0)
        return n;
    
    else if (n==1)
        return 2;
    
    for(int i = 1; i<n; i++) {
        if((n*i)%2==0) {
            value = n*i;
            break;
        }
    }
    return value;
}
