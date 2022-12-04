#include<iostream>

void square(int hight, int lenght) {
	for (int i = 1; i <= hight; i++) 
	{
		
		for (int j = 1; j <= lenght; j++) 
		{
			std::cout << "*"<<" ";
		}
				
		std::cout << "\n";
	}
}

bool truevalue(int a) {
	if (a > 0)
		return true;
	else
		return false;
}

void luckynumber(int a) {
	
	if (a > 99999 && a < 1000000) {
		if (a / 100000 + a / 10000 % 10 + a / 1000 % 10 == a / 100 % 10 + a / 10 % 10 + a % 10)
			std::cout << "lucky";
		else std::cout << "not lucky";
	}
	else {
		std::cout << "false";
	}
}

int factorial(int a) {
	int fact;
	if (a == 1)
		return 1;
	else
		fact = factorial(a - 1) * a;
	/*std::cout << fact << " ";*/
	return fact;

}

int cube(int a, const int x = 3) {
	int mult = 1;
	for (int i = 1; i <= x; i++)
	{
		mult *= a;
	}
	return mult;
}


int main() {
	setlocale(LC_ALL, "Russian");
	/*Задание 1 Написать функцию, выводящую на экран прямоугольник с высотой N и шириной K.*/
	int hight;
	int lenght;
	int a;
	std::cout << "input hight:";std::cin >> hight;
	std::cout << "\n";
	std::cout << "input lenght:";std::cin >> lenght;
	std::cout << "\n";
	square(hight, lenght);
	/*Задание 2 Написать функцию, которая возвращает истину, если передаваемое значение положительное
и ложь, если отрицательное*/

	
	std::cout << "input number: "<<"\n"<< "a = ";std::cin >> a;
	std::cout << "if a<0 a=0, if a>0, a=1" << "\n";	std::cout <<"a = "<< truevalue(a)<<"\n";

	/*Задание 3 Написать функцию, которая определяет, является ли «счастливым» шестизначное число.*/
	std::cout << "input your lucky number: " << "\n" << "lucky = "; std::cin >> a;
	luckynumber(a);
	
	/*Задание 4 Написать функцию, вычисляющую факториал переданного ей числа.*/
	std::cout << "\ninput number: "; std::cin >> a;
	std::cout<< "\n" << "factorial("<<a<<") = " << factorial(a)<<"\n";
	/*Задание 5 Написать функцию, которая возвращает куб числа*/

	std::cout << "\ninput number: "; std::cin >> a;
	std::cout << "cubic(a)=" << cube(a) << "\n";



	return 0;


}


