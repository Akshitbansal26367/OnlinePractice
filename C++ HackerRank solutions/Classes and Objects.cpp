#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{
    public:
    int t,i,m1,m2,m3,m4,m5,s[5],sum;
    
    void input()
    {
        cin>>m1>>m2>>m3>>m4>>m5;
    }
    
    int calculateTotalScore(int sum = 0)
    {
        sum = sum+m1+m2+m3+m4+m5;
        int getSum = sum;
        return getSum;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
