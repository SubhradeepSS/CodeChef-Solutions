#include <bits/stdc++.h> 
using namespace std;  

int longestPalSubstr(string str,int n) 
{ 
    bool table[n][n]; 
      
    memset(table, 0, sizeof(table)); 
  
    // All substrings of length 1 are palindromes 
    int maxLength = 1; 
      
    for (int i = 0; i < n; ++i) 
        table[i][i] = true; 
  
    // check for sub-string of length 2. 
    int start = 0; 
    for (int i = 0; i < n-1; ++i) 
    { 
        if (str[i] == str[i+1]) 
        { 
            table[i][i+1] = true; 
            start = i; 
            maxLength = 2; 
        } 
    } 
  
    // Check for lengths greater than 2. k is length 
    // of substring 
    for (int k = 3; k <= n; ++k) 
    { 
        // Fix the starting index 
        for (int i = 0; i < n-k+1 ; ++i) 
        { 
            // Get the ending index of substring from 
            // starting index i and length k 
            int j = i + k - 1; 
  
            // checking for sub-string from ith index to 
            // jth index iff str[i+1] to str[j-1] is a 
            // palindrome 
            if (table[i+1][j-1] && str[i] == str[j]) 
            { 
                table[i][j] = true; 
  
                if (k > maxLength) 
                { 
                    start = i; 
                    maxLength = k; 
                } 
            } 
        } 
    } 
  

    return maxLength; 
} 
 
int main() 
{ 
    int n;
    string s;
    cin>>n>>s;
    cout<<longestPalSubstr(s,n); 
    return 0; 
} 