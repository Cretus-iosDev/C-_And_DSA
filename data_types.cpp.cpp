#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	
	//interger
	int a,b,c;
	a=10;
	b=15;
	c=a+b;
	
	cout<< c <<endl;
	
	//character
	char d = 'x';
	cout<< d <<endl;
	
	//decimal number
	float f = 1.23;
	
	
	//boolean
	bool b1 = true;
	
	//it gives back you the storage spaces
	int size = sizeof(f);
	cout<< size <<endl;

	return 0;
}