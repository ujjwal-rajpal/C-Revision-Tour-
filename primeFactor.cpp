/**
  * print prime factor of a number
  * purpose:  used to calculate prime factor of a number
  *  
  * written by ujjwal
  * ================================
  *
  * explanation prime factors: 
  *
  * prime numbers are numbers whch are divisibe by themself or by 1 only (1,2,3,5,7 .....)
  *
  *
  *
  *
  *
  *
  */
  
  
  
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int num=315,i;
	
	//print all the 2s that divide the number
	while(num%2 == 0){
		cout << 2 << " ";
		num = num/2;
	}
	
	//print other prime factor
	//now the prime number is prited whih is more than or equal to 3
	//every composite number has a prime factor which is atleast less than or equal to sqrt  of itself (condition)
	//the difference between two prime number is atleast 2 i.e 5-3 =2
	
	
	for( i=3; i<sqrt(num); i+=2){
		
		while (num%i == 0){
			cout << i << " ";
			num = num/i;
		}
	}
		
	//if number is prime and greater than 2
	if(num > 2){
		cout << num;
	}
		

	
	
	
	return 1;
}
