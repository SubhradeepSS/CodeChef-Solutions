#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],b[n];
	    cin>>a[0];
	    int m1=a[0];
	    for(int i=1;i<n;i++)
	        {
	            cin>>a[i];
	            if(a[i]>m1)
	                m1=a[i];
	        }
	    cin>>b[0];
	    int m2=b[0];
	    for(int i=1;i<n;i++)
	        {
	            cin>>b[i];
	            if(b[i]>m2)
	                m2=b[i];
	        }
	    if(m1!=m2)
	        cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;
	}
	return 0;
}
