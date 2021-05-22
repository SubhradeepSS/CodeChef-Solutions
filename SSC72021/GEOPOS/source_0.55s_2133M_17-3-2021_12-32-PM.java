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
		Scanner sc = new Scanner(System.in);
		t=sc.nextInt();
		while(t-- > 0){
		    int n;
		    n = sc.nextInt();
		    int sum=0,maxS=0;
		    while(n-- > 0){
		        int x=sc.nextInt();
		        sum+=x;
		        maxS=(maxS>x?maxS:x);
		    }
		    if(sum-maxS>maxS){
		        System.out.println("Yes");
		    }
		    else{
		        System.out.println("No");
		    }
		}
	}
}
