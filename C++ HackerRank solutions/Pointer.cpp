#include <iostream>
#include <stdlib.h>
using namespace std;

void update(int *a,int *b) 
{
    cout<<(*a + *b)<<endl;
    cout<<abs(*a - *b);
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);

    return 0;
}
