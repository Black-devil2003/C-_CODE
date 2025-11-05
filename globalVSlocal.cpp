#include<iostream>
int x=10;
int main(){
	int x=20;
	std::cout<<"Local x: " << x << std::endl;
	std::cout<<"global x: " << ::x << std::endl;
	return 0;
}
