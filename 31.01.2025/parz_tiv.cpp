#include<iostream>

void parz(){
	int a = 0;
	std::cout<<"ներմուծԵք թիւ";'\n';
	std::cin>>a;
	a = a%2;

	if(a == 1){
	std::cout<<"թիւ պարզեցրաց";'\n';	
	}else{
		std::cout<<"․";'\n';
	}
}
int main(){

	parz();
}
