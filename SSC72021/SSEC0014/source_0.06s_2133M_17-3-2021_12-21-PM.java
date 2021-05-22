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
		Scanner sc = new Scanner(System.in);
		int[] a;
		int x=0,y=0;
		a = new int[3];
// 		b = new int[3];
		for(int i=0;i<3;i++){
		    a[i] = sc.nextInt();
		}
		for(int i=0;i<3;i++){
		    int z=sc.nextInt();
		    if(a[i]>z){
		        x++;
		    }
		    else if(a[i]<z){
		        y++;
		    }
		}
	    System.out.print(x);
	    System.out.print(" ");
	    System.out.print(y);
	}
}
