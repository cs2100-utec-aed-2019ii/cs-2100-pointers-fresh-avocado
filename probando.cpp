#include <iostream>
#define SIZE 10

/* using namespace std; */

void ejercicio1() {
	int array[SIZE];
	int* ptr = array; // int* ptr = &arr[0]

	for (int i = 0; i < SIZE; ++i) {
		*(ptr+i) = i+1;
	}

	for (int i = 0; i < SIZE; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

}

void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void ejercicio2() {
	int a = 5;
	int b = 10;
	int c = 7;

	swap(a, b);
	swap(a, c);

	std::cout << "a: " << a << " b: " << b << " c: " << c << std::endl;

}

int a;

void funct(int x, int** y) {
	a = 10;
	**y = x-a;
	*y = &a;	
}

void swap2(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;

}

int main() {

	/* int a, b = 8, *p = &b; */
	/* a = 30+b; */
	/* p = &a; */
	/* *p = 20-b; */
	/* funct(a, &p); */
	/* *p = 3; */
	/* std::cout << a << " " << b << "\n"; */

	/* int a = 8; */
	/* int* ptr = &a; */

	/* std::cout << *ptr << " " << ptr << " " << &ptr; */
int x = 15;
int* ptr = &*&x;
x -= 7;
*ptr = x+10;
std::cout << *&*ptr << std::endl;
	

	/* ejercicio1(); */
	/* ejercicio2(); */

	/* int b = 5; */
	/* int c = 10; */

	/* swap2(&b, &c); */

	/* std::cout << "b: " << b << " c: " << c << "\n"; */

	return 0;
}




















