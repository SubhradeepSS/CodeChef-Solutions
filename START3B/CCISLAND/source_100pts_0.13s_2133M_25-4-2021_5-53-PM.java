/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int t;
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		while(t-- > 0){
		    int[] a = new int[5];
		    for(int i=0;i<5;i++){
		        a[i]=sc.nextInt();
		    }
		    int x=a[0]/a[2],y=a[1]/a[3];
		    System.out.println(
		            Math.min(x,y)>=a[4]?"YES":"NO"
		        );
		}
	}
}
