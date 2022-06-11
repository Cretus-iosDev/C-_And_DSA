#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	
	int p,r,t,SI;
	
	//asking for input
	cout<<"Enter the principle"<<endl;
	cin>>p;
	cout<<"Enter the rate"<<endl;
	cin>>r;
	cout<<"Enter the time"<<endl;
	cin>>t;
	
	//formula
	
	SI = (p*r*t) / 100;
	cout<<"simple interest:- "<< SI << endl;
	

	return 0;
}