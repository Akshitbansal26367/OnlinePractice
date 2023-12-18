import java.util.Scanner;

public class Main
{
	public static void main (String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    
	    int T = sc.nextInt();
	    
	    for(int i = 0; i<T; i++)
	    {
	        int N = sc.nextInt();
	        int array[] = new int[N];
	        int holiday_count = 8;
	        int j;
	        
	        for(j = 0; j<N; j++)
	        array[j] = sc.nextInt();
	        
	        for(j = 0; j<N; j++)
	        {
	            if(array[j] !=6 && array[j]!=13 && array[j]!=20 && array[j]!=27 && array[j]!=7 && array[j]!=14 && array[j]!=21 && array[j]!=28)
	            holiday_count = holiday_count +1;
	        }
	        System.out.println(holiday_count);
	    }
	}
}
