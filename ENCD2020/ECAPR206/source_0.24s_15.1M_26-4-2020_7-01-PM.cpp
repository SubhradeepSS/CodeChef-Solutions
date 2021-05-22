#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int i=0;
	    long long int sum=0;
	    for(int i=0;i<k;i++)
	        sum+=a[i];
	    i=k;
	    int j=0;
	    long long int s=sum;
	    while(j<n){
	        if(s+a[i%n]-a[j]>sum)
	            sum=s+a[i%n]-a[j];
	        s=s+a[i%n]-a[j];
	        i++;
	        j++;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
