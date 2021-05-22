#include <iostream>
using namespace std;

bool f(int a[], int n){
    for(int i=0;i<n;i++){
        int diff=abs(a[i]-i-1);
        if(diff>3){
            return true;
        }
    }
    return false;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(f(a,n)){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
