#include <stdio.h>


int main() {
	int m, n;
	printf("Enter m value\n");
	scanf("%d", &m);
	printf("Enter n value\n");
	scanf("%d", &n);

	// Cases from 1 to 3
	
	// Case �1
	// ���������� ����������� ����� n �� ����������� ����� m, �� ������� ���������
	printf("Result 1:\nResult of working program is: (%d)\n", ++n * ++m);
	

	// Case �2
	if (m++ < n){
		// ���� ������������ ����� m ���� ������ �� ����� n, �� ��������� ���� 1, ������ 0
		printf("Result 2:\nResult of working program is: (%d)\n", m++ < n);
	}

	// Case �3
	if (n++ > m){
		// ���� ������������ ����� n ���� ������ �� ����� m, �� ��������� ���� 1, ������ 0
		printf("Result 3:\nResult of working program is: (%d)\n", n++ > m);
	}
	return 0;
}