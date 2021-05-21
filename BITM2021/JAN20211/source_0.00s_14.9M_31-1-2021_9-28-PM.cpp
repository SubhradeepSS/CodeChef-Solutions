#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c=__builtin_popcount(n);
	    if(c%2){
	        cout<<"Non-Magical\n";
	    }
	    else{
	        cout<<"Magical\n";
	    }
	}
	return 0;
}
