/*
 ============================================================================
 Name        : bin_to_dec.c
 Author      : Vito Proscia
 Version     : 1.1
 Description : Converte the binary code in decimal
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_DIGITS 100

// Prototypes
void Load_array(int arr[], int dim);
int Binary_to_decimal(int arr[], int dim);

int main(void){

	int digits[MAX_DIGITS];
	unsigned short numbers;
	int result;

	result = 0;

	printf(":: Enter the number of digits of the binary code: ");
	scanf("%hu", &numbers);

	printf(":: Enter the number in binary format from the least significant to the most significant digit: \n");

	Load_array(digits, numbers);
	result = Binary_to_decimal(digits, numbers);

	printf(":: The result is: %d \n", result);

	return 0;
}

// Load array
void Load_array(int arr[], int dim){

	int i;

	for(i = 0; i < dim; i++){

		do{

			printf(":: Enter the %d digit (1 or 0): ", (i + 1));
			scanf("%d", &arr[i]);

		}while(arr[i] != 0 && arr[i] != 1); // Check if the number is in binary code

	}

}

// Convert from binary to decimal
int Binary_to_decimal(int arr[], int dim){

	int i, currentResult;

	currentResult = 0;

	for(i = 0; i < dim; i++){

		currentResult += arr[i] * pow(2, i);

	}

	return currentResult;
}
