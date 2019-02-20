#include <stdlib.h>
#include <math.h>

int main() {
	long double A = 0;
	long double B = 0;
	long double C = 0;
	printf("This programm solves square equation.\n");
	for (int cont = 1; cont;) {
		printf("Please, input coefficient in the following format: \"A B C\"\nfrom A * x ^ 2 + B * x + C = 0.\n");
		scanf_s("%Lf %Lf %Lf", &A, &B, &C);
		if (!A) {
			if (!B) {
				if (!C) {
					printf("Each real number is solution.\n");
				}
				else {
					printf("There is no solution.\n");
				}
			}
			else {
				printf("There is only one solution: %f.\n", -1 * (long double)C / (long double)B);
			}
		}
		else {
			int D = 0;
			D = B * B - 4 * A * C;
			if (D > 0) {
				printf("There are two real solutions:\nX_1 = %f\nX_2 = %f\n",
					(-1 * (long double)B + sqrt(D)) / (2 * (long double)A), (-1 * (long double)B - sqrt(D)) / (2 * (long double)A));
			}
			else {
				if (D == 0) {
					printf("There is only one solution: %f.\n", -1 * (long double)B / (2 * (long double)A));
				}
				else {
					printf("There are two complex solutions:\nX_1 = %Lf + i * %Lf\nX_2 = %Lf - i * %Lf\n",
						(-1 * (long double)B) / (2 * (long double)A), sqrt(-1 * D) / (2 * (long double)A),
						(-1 * (long double)B) / (2 * (long double)A), sqrt(-1 * D) / (2 * (long double)A));
				}
			}
		}
		printf("If you want to solve another equation input 1, else input 0\n");
		scanf_s("%d", &cont);
	}
	return 0;
}