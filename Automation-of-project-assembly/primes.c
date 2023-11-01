/*!
 \file
 Заполняет массив индикаторов простых чисел от 0 до n включительно, 
	primes — массив размера не менее n + 1.
*/
/*!
\brief Функция заполнения массива индикаторами простых чисел от 0 до n включительно 
\code
#include <stdio.h>
#include "calculate_primes.h"

int main() {

	int n;
	int i;
	printf ("Введи число n:");
	scanf ("%d", &n);
	int array[n];
	for (i = 1; i <= n; i++){
		array[i] = i;
	}

	calculate_primes(array,n);
	
	for (i = 1; i <= n; i++) {
	
	if (array[i] != 1) {
		printf ("%d 1\n",i);
		}
	else {
	printf ("%d 0\n",i);
		}
	}
	return 0;
}
\endcode 
*/
#include <stdio.h>
#include "calculate_primes.h"

int main() {

	int n;
	int i;
	printf ("Введи число n:");
	scanf ("%d", &n);
	int array[n];
	for (i = 1; i <= n; i++){
		array[i] = i;
	}

	calculate_primes(array,n);
	
	for (i = 1; i <= n; i++) {
	
	if (array[i] != 1) {
		printf ("%d 1\n",i);
		}
	else {
	printf ("%d 0\n",i);
		}
	}
	return 0;
}	
