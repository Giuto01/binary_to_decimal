#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototypes
int load_vet(int vet[], int dim);
void bin_to_dec(int vet[], int dim);

int i, res;

int main(void){

	int n;
	printf(":: Enter the number of digits of the binary code: ");
	scanf("%d", &n);

	int v[n];

	res = 0;

	puts(":: Enter the number in binary format from the least significant to the most significant digit\n");

    load_vet(v, n);
	bin_to_dec(v, n);

	printf(":: The result is: %d \n", res);
	system("pause");
	return 0;
}


// Load array
int load_vet(int vet[], int dim){

	for(i = 0; i < dim; i++){

		printf(":: Enter the %d digit: ", (i + 1));
		scanf("%d", &vet[i]);

		// Check if the number is in binary code
		if( vet[i] != 0 && vet[i] != 1){

			printf(":: Invalid number\n");
            return 1;
		}
	}
}

// Convert from binary to decimal
void bin_to_dec(int vet[], int dim){

	for(i = 0; i < dim; i++){

		res += vet[i] * pow(2, i);
		
	}
}
