/**
  * primeNumber
  *
  * purpose: used to check a number is prime or not
  *
  * we will divide the number from 2 and incremnt the divisor by 1 and check if remainder is 0 number is not prime otherwise number is prime
  *
  *
  */


#include <iostream>

using namespace std;

int main(){
	
	int num=9 ,i;
	//incement the devisor by 1 nad check remainder is not zero
	for(i=2; i< num/2; i++){
		if(num%i == 0){
			cout << "Not Prime";
			return 0;
		}
	}
	cout << "Prime";
	return 0;
	
}
