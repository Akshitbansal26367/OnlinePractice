#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int sqr(int mid, int n, int m) {
	    long long answer = 1;
	    for (int i = 1; i <= n; i++) {
	        answer = answer * mid;
	        if(answer > m) return 2;
	    }if(answer == m) return 1;
	    else return 0;
	}
	
	int NthRoot(int n, int m) {
	    int low = 1, high = m;
	    while(low <= high) {
	        int mid = low + (high - low) / 2;
	        int square = sqr(mid,n,m);
	        if(square == 1)
	            return mid;
	        else if(square == 0)
	            low = mid + 1;
	       else 
	        high = mid - 1;
	    }
	    return -1;
	}
};
