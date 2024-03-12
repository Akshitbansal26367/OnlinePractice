//Java Code
class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        String s = "";
        for (int i = str.length() - 1; i>=0; i--)
            s = s + str.charAt(i);
        
        return s;
    }
}

// C++ code
class Solution
{
    public:
    string reverseWord(string str)
    {
        int i = 0, temp;
        int size = str.size();
        
        while (i <= size-1) {
            swap (str[size-1],str[i]);
            i++;
            size--;
        }
        
        return str;
    }
};
