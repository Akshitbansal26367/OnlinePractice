import java.util.*;

public class Solution 
{
    static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) 
    {
        int N = sc.nextInt();
        
        if(N%2==1)
        System.out.println("Weird");
        
        else if(N>=2 && N<=5)
        {
            if(N%2==0)
            System.out.println("Not Weird");
        }
        
        else if(N>=6 && N<=20)
        {
            if(N%2==0)
            System.out.println("Weird");
        }
        
        else
        System.out.println("Not Weird");
        
        sc.close();
    }
}
