#include <iostream>
using namespace std;

const int n=6;

bool valid(int a[][n], int r,int c){
    return (
            r>=0&&c>=0&&r<n&&c<n&&a[r][c]==0
        );
}

bool f(int a[][n],int i,int j){
    if(i==0&&j==0&&a[i][j]==0){
        return true;
    }
    if(!valid(a,i,j)){
        return false;
    }
    if(f(a,i-1,j)||f(a,i,j-1)||f(a,i-1,j-1)){
        return true;
    }
    return false;
}

int main() {
	// your code goes here
	int a[n][n];
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cin>>a[i][j];
	    }
	}
	cout<<(f(a,n-1,n-1)?"Yes":"No");
	return 0;
}
