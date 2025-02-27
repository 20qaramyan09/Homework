#include<iostream>

int main(){
	int number = 0;
	int sum = 0;
	int b = 0;
<<<<<<< HEAD
	std::cout<<"nermuteq tiv tasakan hamakargic"<<std::endl;
=======
	std::cout<<"enmuteq tiv tasakan hamakargic"<<std::endl;
>>>>>>> 68c22f7 (.)
	std::cin>>number;
	

	do{
	b = number / 2;
	sum = number % 2;
	std::cout<<sum<<std::endl;
	number = b;
	}while(b != 1);
	std::cout<<"1"<<std::endl;
} 
