#include<bits/stdc++.h>

using namespace std;
class Solution{
public:	
	int first_occurrence(int arr[], int n, int x) {
	    int low = 0, high = n - 1;
	    int first = -1;
	    while(low <= high) {
	        int mid = low + (high - low)/2;
	        if(arr[mid] == x) {
	            first = mid;
	            high = mid - 1;
	        } else if(arr[mid] > x)
	            high = mid - 1;
	       else
	        low = mid + 1;
	    }
	    return first;
	}
	
	int last_occurrence(int arr[], int n, int x) {
	    int low = 0, high = n - 1;
	    int last = -1;
	    while(low <= high) {
	        int mid = low + (high - low)/2;
	        if(arr[mid] == x) {
	            last = mid;
	            low = mid + 1;
	        } else if(arr[mid] > x)
	            high = mid - 1;
	       else
	        low = mid + 1;
	    }
	    return last;
	}
	
	int count(int arr[], int n, int x) {
	    int first = first_occurrence(arr, n, x);
	    if(first == -1)
	        return 0;
	   int last = last_occurrence(arr, n, x);
	   return last - first + 1;
	}
};
