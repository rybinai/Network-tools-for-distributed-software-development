/*!
 \file
 Программа проверки гипотезы Гольдобаха с использованием функции calculate_primes() из соответствующего модуля. 
*/
#include <stdio.h>
#include "calculate_primes.h"
/*!
\brief Функция реализует гипотезу Гольдобаха
\code 
int main () {
	int n, m, number1, number2, i, x, y;
	int s = 0;
	 max = 1000000;
	int buffer = 0;
		printf ("Введи число n: ");
		scanf ("%d", &n);
		printf ("Введи число m: ");
		scanf ("%d", &m);
	int arr[m];
	for (i = 1; i <= m; i++) {
		arr[i] = i;
		}
		
	calculate_primes (arr,m);
	
	for (i = n; i <= m; i++) {
	if (i % 2 == 0) {
		printf ("%d ",i);
		for (x = 1;x <= m; x++){
			for (y = 1; y <= m;y++) {
				if ((arr[x] != 1) && (arr[y] != 1) && (arr[x] + arr[y] == i)) {
				s++;
				if ((arr[x] != arr[y]) && ((arr[x]+arr[y]) == (arr[y]+arr[x]))) {
				buffer++;
				}
		if (x <= max) {
			number1 = x;
			number2 = y;
			max = x;
		}
	}
	}
}
s= s - buffer/2;
printf ("%d %d %d\n",s ,number1, number2);
s = 0;
buffer = 0;
max = 1000000;
}
}
}
\endcode 
*/	
int main () {
	int n, m, number1, number2, i, x, y;
	int s = 0;
	int max = 1000000;
	int buffer = 0;
		printf ("Введи число n: ");
		scanf ("%d", &n);
		printf ("Введи число m: ");
		scanf ("%d", &m);
	int arr[m];
	for (i = 1; i <= m; i++) {
		arr[i] = i;
		}
		
	calculate_primes (arr,m);
	
	for (i = n; i <= m; i++) {
	if (i % 2 == 0) {
		printf ("%d ",i);
		for (x = 1;x <= m; x++){
			for (y = 1; y <= m;y++) {
				if ((arr[x] != 1) && (arr[y] != 1) && (arr[x] + arr[y] == i)) {
				s++;
				if ((arr[x] != arr[y]) && ((arr[x]+arr[y]) == (arr[y]+arr[x]))) {
				buffer++;
				}
		if (x <= max) {
			number1 = x;
			number2 = y;
			max = x;
		}
	}
	}
}
s= s - buffer/2;
printf ("%d %d %d\n",s ,number1, number2);
s = 0;
buffer = 0;
max = 1000000;
}
}
}
