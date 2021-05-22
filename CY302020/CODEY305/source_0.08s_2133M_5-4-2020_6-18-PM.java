/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		String regex = "\\b([a-z]+)\\b(?:\\s+\\1\\b)+";
    Pattern p = Pattern.compile(regex, Pattern.CASE_INSENSITIVE);

Scanner in = new Scanner(System.in);
 int numSentences = Integer.parseInt(in.nextLine());
 
 while (numSentences-- > 0) {
 String input = in.nextLine();
 
 Matcher m = p.matcher(input);
 
 // Check for subsequences of input that match the compiled pattern
 while (m.find()) {
 input = input.replaceAll(m.group(), m.group(1));
 }
 
 // Prints the modified sentence.
 System.out.println(input);
 }

	}
}
