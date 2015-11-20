#include <iostream>
using namespace std;

int add(int a,int b);
int subtract(int,int);

int main(){
	
	cout<<add(5,3)<<endl;
	cout<<subtract(5,3)<<endl;
	
	return 0;
	
}

int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}
