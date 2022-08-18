#include <iostream>

#include <array>
#include <vector>

#include <cmath>
#include <ctime>
#include <chrono>

using std::cout;
using std::endl;


int main(int argc, char **argv) {
	cout << "Hello World!" << endl;
	
	int *arr = new int[20];
	int *ptr = new int;

	std::array<int, 20> a;
	a.fill(0);
	printf("%ld | %d \n", a.size(), a[1]);

	std::vector<double> vec;
	vec.push_back(0.0);
	vec.push_back(10.5);
	printf("%lf %lf \n", vec[0], vec.at(1));

	

	delete[] arr;
	delete ptr;

	return 0;
} 
