#include<iostream>
int main() {
	std::cout << "Podaj 3 liczby: << std::endl;
	int a,b,c;
	std::cin >> a >> b >> c;
	std::cout << "Srednia z nich wynosi: " << (a+b+c)/3;
	return 0;
}
