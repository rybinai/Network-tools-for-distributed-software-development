/*! 
	\file
	Функция в отдельном файле 
*/
/*!
\brief Функция заполнения массива индикаторами простых чисел от 0 до n включительно
\code
void calculate_primes (int primes[], int n){
	int i,j;
	for (i = 2; i <= n;i++){
		if (primes [i] != 1) {
			for (j = 2; j <= n; j++){
				if ((primes[j] % primes[i] == 0) && (primes  [j] != primes [i])) {
					primes[j] = 1;
					}
				}
			}
		}
} 
\endcode
*/
void calculate_primes (int primes[], int n){
	int i,j;
	for (i = 2; i <= n;i++){
		if (primes [i] != 1) {
			for (j = 2; j <= n; j++){
				if ((primes[j] % primes[i] == 0) && (primes  [j] != primes [i])) {
					primes[j] = 1;
					}
				}
			}
		}
}
