#include <stdio.h>


int main() {
	int m, n;
	printf("Enter m value\n");
	scanf("%d", &m);
	printf("Enter n value\n");
	scanf("%d", &n);

	// Cases from 1 to 3
	
	// Case є1
	// ѕеремножую пре≥нкримент числа n на пре≥нкримент числа m, та виводжу результат
	printf("Result 1:\nResult of working program is: (%d)\n", ++n * ++m);
	

	// Case є2
	if (m++ < n){
		// якщо пост≥нкримент числа m буде меншим за число n, то результат буде 1, ≥накше 0
		printf("Result 2:\nResult of working program is: (%d)\n", m++ < n);
	}

	// Case є3
	if (n++ > m){
		// якщо пост≥нкримент числа n буде б≥льшим за число m, то результат буде 1, ≥накше 0
		printf("Result 3:\nResult of working program is: (%d)\n", n++ > m);
	}
	return 0;
}