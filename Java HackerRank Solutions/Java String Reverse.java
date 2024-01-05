import java.util.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        int len = A.length();
        String b = "";
        
        for(int i = len-1; i>=0; i--)
        b= b + A.charAt(i);
        
        if(A.compareTo(b)==0)
        System.out.print("Yes");
        
        else
        System.out.print("No");
        sc.close();
    }
}
