#include <iostream>


int NUM;
const double PI = 3.1416;
int arr[3];

void num_x2() {
	NUM *= 2;
}
void use_static() {
	static int a = 1;
	std::cout << " a= " << a << '\n';
	a++;
}

int power(int num1, int num2=2) {
	int tmp = 1;
	for (int i = 1; i <= num2; i++)
		tmp *= num1;
	return tmp;
}

inline int absolute( int num) {
	return (num < 0 ? -num : num);
}
inline int sum_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return sum;
}
int max(int num1, int num2) {
	std::cout << "INT\n";
	return num1 > num2 ? num1 : num2;
}
double max(double num1, double num2) {
	std::cout << "DOUBLE\n";
	return num1 > num2 ? num1 : num2;
}
int max(int num1, int num2, int num3) {
	std::cout << " THREE INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}

template <typename T>
T absol(T num) {
	return num < 0 ? -num : num;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//шаблонные функции
	std::cout << absol(7) << '\n';
	std::cout << absol(-7.2f) << '\n';


	//// перегруженная функция
	//std::cout << max(7, 15) << '\n';//15
	//std::cout << max(5.8, 5.2) << '\n';
	//std::cout << max(5,17,10) << '\n';


	// встраиваемые функции
	//std::cout << " Введите число - ";
	//std::cin >> n;
	//std::cout << '|' << n << "|= " << absolute(n) << std::endl;

	//int mass[3]{ 10,15,7 };
	//std::cout << sum_arr(mass, 3) << '\n';









	//std::cout << "NUM = " << NUM << std::endl;
	//NUM = 5;
	//num_x2();
	//std::cout << "NUM = " << NUM << std::endl;

	//use_static();
	//for (int i = 0; i < 9; i++) {
	//	use_static();
	//}
	
	//// параметры по умолчанию
	//std::cout << " 4^3 =" << power(4, 3) << '\n';
	//std::cout << " 5^2 =" << power(5) << '\n';








	return 0;
}