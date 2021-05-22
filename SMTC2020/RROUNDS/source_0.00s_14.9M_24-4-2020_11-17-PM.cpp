#include <iostream>
using namespace std;

long long int max(long long int a,long long int b){
    return (a>b?a:b);
}

long long int min(long long int a,long long int b){
    return (a<b?a:b);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int x,r,A,B,a,b;
	    cin>>x>>r>>A>>B;
	    a=max(A,B);
	    b=min(A,B);
	    if(x*(a-b)%a==0){
	        if((x*(a-b))/a-1>0)
	        cout<<(x*(a-b))/a-1<<endl;
	        else
	            cout<<0<<endl;
	    }
	   else
	        {
	        cout<<(x*(a-b))/a<<endl;
	        }
	}
	return 0;
}
