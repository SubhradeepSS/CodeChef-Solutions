#include <iostream>
#include <bits/stdc++.h>
using namespace std;
# define NO_OF_CHARS 100000  
# define bool int  
 
char *removeDups(char str[])  
{  
    bool bin_hash[NO_OF_CHARS] = {0};  
    int ip_ind = 0, res_ind = 0;  
    char temp;  
      
    /* In place removal of duplicate characters*/
    while (*(str + ip_ind))  
    {  
        temp = *(str + ip_ind);  
        if (bin_hash[temp] == 0)  
        {  
            bin_hash[temp] = 1;  
            *(str + res_ind) = *(str + ip_ind);  
            res_ind++;  
        }  
        ip_ind++;  
    } 
    *(str+res_ind) = '\0';  
      
    return str;  
}
int main() {
	// your code goes here
	int t;
	char a[100000];
	cin>>t;
	while(t--){
	    cin>>a;
	    cout<<removeDups(a)<<endl;
	}
	return 0;
}
