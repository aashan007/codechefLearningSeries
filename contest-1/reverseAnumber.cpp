#include <iostream>
using namespace std;

int reverseNumber(int n){
    int reverseNumber=0;
    while(n>0){
        reverseNumber*=10;
        int temp = n%10;
        reverseNumber = reverseNumber+temp;
        
        n=n/10;
    }
    
    return reverseNumber;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<reverseNumber(n)<<endl;
	}
	return 0;
}
