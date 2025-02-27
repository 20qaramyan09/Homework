#include<iostream>
void big_small(){
	int a = 0;
	int b = 0;
	std::cout<<"1-ին թիւ";'\n';
	std::cin>>a;
	std::cout<<"2 թիւ";'\n';
	std::cin>>b;
	if(a > b){
		std::cout<<a;'\n';
	}else{
		std::cout<<b;'\n';
	}
}

int main(){

	big_small();
return(0);
}
