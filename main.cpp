#include<iostream>
int main() {
	std::cout << "Podaj 4 liczby: << std::endl;
	int a,b,c,d;
	std::cin >> a >> b >> c >> d;
	std::cout << "Srednia z nich wynosi: " << (a+b+c+d)/4;
	return 0;
}
