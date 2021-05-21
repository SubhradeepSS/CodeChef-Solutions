#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,n;
	    cin>>a>>b>>n;
	    switch(n%3){
	        case 0:
    	        cout<<a;
    	        break;
	        case 1:
	            cout<<b;
	            break;
            case 2:
                cout<<(a^b);
                break;
	    }
	    cout<<"\n";
	}
	return 0;
}
