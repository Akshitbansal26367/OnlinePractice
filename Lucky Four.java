import java.util.Scanner;

public class Main
{
	public static void main (String[] args) 
	{
	    Scanner sc = new Scanner (System.in);
	    int t = sc.nextInt();
	    
	    for(int i = 0; i<t; i++)
	    {
	        int count = 0;
	        int T = sc.nextInt();
	        
	        while(T>0)
	        {
	            int last = T%10;
	             T = T/10;
	            
	            if(last==4)
	            count++;
	        }
	        
	        System.out.println(count);
	    }
	}
}
