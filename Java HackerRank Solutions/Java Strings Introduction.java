import java.util.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        sc.close();
        
        int x=A.length()+B.length();
        System.out.println(x);
        
        int y=A.compareTo(B);
        if(y>0)
            System.out.println("Yes");
        else
            System.out.println("No");
        
        String ab=A.substring(0,1).toUpperCase();
        String ab1=B.substring(0,1).toUpperCase();
        System.out.println(ab+A.substring(1)+" "+ab1+B.substring(1));
    }
}
