<<<<<<< HEAD
#include <iostream>
#include <ctime>
#include "quickSelect.h"
#define MAX_SIZE 100
#define UPPER_BOUND 10000
#define LOWER_BOUND 1

inline void display(int *array) {
	for (int i = 0; i < MAX_SIZE; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

int main(void) {
	int array[MAX_SIZE];

	srand(time(0) );

	// Populate the array with random integers.
	for (int i = 0; i < MAX_SIZE; i++)
		array[i] = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;

	int k = rand() % (MAX_SIZE - 1) + 1;

	std::cout << "Array: " << std::endl;
	display(array);

	int pos = algo::quickSelectIterative(array, MAX_SIZE, k);

	std::cout << k << "th smallest element: " << array[pos] << std::endl;

	return 0;
=======
#include <iostream>
#include <ctime>
#include "quickSelect.h"
#define MAX_SIZE 100
#define UPPER_BOUND 10000
#define LOWER_BOUND 1

inline void display(int *array) {
	for (int i = 0; i < MAX_SIZE; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

int main(void) {
	int array[MAX_SIZE];

	srand(time(0) );

	// Populate the array with random integers.
	for (int i = 0; i < MAX_SIZE; i++)
		array[i] = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;

	int k = rand() % (MAX_SIZE - 1) + 1;

	std::cout << "Array: " << std::endl;
	display(array);

	int pos = algo::quickSelectIterative(array, MAX_SIZE, k);

	std::cout << k << "th smallest element: " << array[pos] << std::endl;

	return 0;
>>>>>>> a04fdc2f4df5be282c51d9e64b2d665987a68025
}