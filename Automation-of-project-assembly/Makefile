all: lab1 goldbach

lab1: primes.o calculate_primes.o
	gcc -g -O0 -o lab1 primes.o calculate_primes.o
	
goldbach: calculate_primes.o goldbach.o
	gcc -g -O0 -o goldbach calculate_primes.o goldbach.o

primes.o: primes.c
	gcc -g -O0 -c primes.c
	
calculate_primes.o: calculate_primes.c 
	gcc -g -O0 -c calculate_primes.c

goldbach.o: goldbach.c
	gcc -g -O0 -c goldbach.c
	
primes: primes.o calculate_primes.o
	gcc -g -O0 -o primes primes.o calculate_primes.o

cleanprimes:
	rm primes

cleangolbach:
	rm goldbach

cleancalculate:
	rm calculate_psimes	

clean:
	rm lab1 goldbach *.o 

man:
	@echo "clean - полная отчиска "
	@echo "cleanprimes - удаляет primes"
	@echo "cleangolbach - удаляет goldbach"
	@echo "cleancalculat - удаляет calculate_primes"
