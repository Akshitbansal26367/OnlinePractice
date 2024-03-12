//C++ code

class Solution{
public:	

	int isPalindrome(string S)
	{
	    int left = 0;
	    int right = S.size() - 1;
	    
	    while (left <= right) {
	        if (S[left] != S[right])
	            return 0;
	       
	        left++;
	        right--;
	    }
	    
	    return 1;
	}

};


//C code
void swap (char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int isPalindrome(char  S[])
{
        int i, flag = 1;
        int size = strlen(S);
        char temp[size];
        
        for (i = 0; i < size; i++)
            temp[i] = S[i];
        
        i = 0;
        while (i <= size - 1) {
            swap(&S[size - 1], &S[i]);
            i++;
            size--;
        }
        
        for (i = 0; i < size; i++) {
            if (S[i] != temp[i]) {
                flag = 0;
                break;
            }
        }
        
        return flag;
}
