#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    int d=101,f=101;
	    int p[n];
	    for(int i=0;i<n;i++)
	        cin>>p[i];
	    int type[n];
	    for(int i=0;i<n;i++)
	        {
	            cin>>type[i];
	            if(type[i]==0&&p[i]<d)
	                d=p[i];
	            else if(type[i]==1&&p[i]<f)
	                f=p[i];
	        }
	   if(f+d<=100-s)
	    cout<<"yes"<<endl;
	   else
	    cout<<"no"<<endl;
	}
	return 0;
}
