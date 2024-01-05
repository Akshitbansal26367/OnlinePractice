#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) 
{
    int sum = 0;
    
    if(n==1)
    return a;
    
    else if(n==2)
    return b;
    
    else if(n==3)
    return c;
    
    else if(n>=4)
    return find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c) + 
    find_nth_term(n-3,a,b,c);
    
    // n = 5;
    // find_nth_term(4,a,b,c) + find_nth_term(3,a,b,c) +
    //find_nth_term(2,a,b,c)
    
    // find_nt_term(3,a,b,c)+find_nth_term(2,a,b,c)+find_nth_term(1,a,b,c)+
    //find_nth_term(3,a,b,c) + find_nth_term(2,a,b,c)
    
    // 3 + 2 + 1 + 3 + 2 = 11
    
    else
    return 0;
}

int main() 
{
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
