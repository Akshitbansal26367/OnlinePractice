import java.util.*;
import java.lang.*;
import java.io.*;

public class Main
{
	public static void main (String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    sc.nextLine();
	    
	    for(int k = 0; k<t; k++)
	    {
	        String s = sc.nextLine();
	        String q = sc.nextLine();
	        String z = "";
	        
	        int lenS = s.length();
	        int i;
	        
	        for(i = 0; i<lenS; i++)
	        {
	            if(s.charAt(i)==q.charAt(i))
	            z = z + 'G';
	            
	            else
	            z = z + 'B';
	        }
	        
	        System.out.println(z);
	    }
	}
}
