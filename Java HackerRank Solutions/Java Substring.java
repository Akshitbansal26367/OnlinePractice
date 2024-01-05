import java.util.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int start = in.nextInt();
        int end = in.nextInt();
        in.close();
        String a = "";
        int i;
        
        for(i = start; i<end; i++)
        a = a + s.charAt(i);
        
        System.out.println(a);
    }
}
