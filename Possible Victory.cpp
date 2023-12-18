#include <iostream>
using namespace std;

int main() 
{
    int r,o,c;
    cin>>r>>o>>c;
    int overs_remaining=20-o;                  //2
    int balls_remaining=6*overs_remaining;     //12
    int max_runs=6*balls_remaining;       //72
    int max_achieved_score=max_runs+c;    //72+648=720
    
    if (max_achieved_score>r)
    cout<<"YES"<<endl;
    
    else
    cout<<"NO"<<endl;
}
