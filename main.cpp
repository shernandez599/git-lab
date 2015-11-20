#include <iostream>
using namespace std;

int add(int,int);
int subtract(int num1,int num2);



int main(){
	
	cout<<add(5,3)<<endl;
	cout<<subtract(5,3)<<endl;
	
	return 0;
	
}

 int substract(int num1, int num2)
 {
     return(num1 - num2);
 }
 


int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

