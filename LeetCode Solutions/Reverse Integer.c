int reverse(int x){

    int rev = 0,last;

    while(x!=0) {
        
        last = x%10;

        if((rev>INT_MAX/10) || (rev<INT_MIN/10))
            return 0;

        rev = (rev*10) + last;
        x = x/10;
    }

    return rev;
}
