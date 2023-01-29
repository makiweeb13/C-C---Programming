#include <stdio.h>
#include <stdlib.h>

int* decimalToBinary(int, int*);
int binaryToDecimal(int);
void displayBinary(int*, int);

int main(void) 
{
	int binary, decimal, n, count, *pb;
	
	start:
		
	printf("Convert . . .\n");
	printf("1: Binary to Decimal\n");
	printf("2: Decimal to Binary\n");
	printf("3: Exit program\n");
	
	printf("Enter number of choice (1/2/3): ");
	scanf("%d", &n);
	
	switch (n)
	{
		case 1:
			printf("Enter binary number: ");
			scanf("%d", &binary);
			printf("Decimal = %d", binaryToDecimal(binary));
			break;
		case 2:
			printf("Enter decimal number: ");
			scanf("%d", &decimal);
			pb = decimalToBinary(decimal, &count);
			printf("Binary = ");
			displayBinary(pb, count);
			break;
		case 3:
            exit(0);
			break;
	}
	
	free(pb);
	printf("\n\n");
	goto start;
	
	return 0;
}

int* decimalToBinary(int d, int *c)
{
	int i = 0, *p;
	p = (int*) malloc(sizeof(int)*8);
	while (d > 0) 
	{
		p[i] = d%2;
		d/=2;
		i++;
	}

    *c = i;
	return p;
}

int binaryToDecimal(int b)
{
	int power = 2, digit, d = 0, i;
	for (i = 0; i < 8; i++) 
	{
        digit = b%10;
		if(digit == 1)
		{
			d+=power;
		}
		power*=2;
        b/=10;
	}
	return d/2;
}

void displayBinary(int b[], int c)
{
	int i;
	for (i = c-1; i >= 0; i--) 
    {
		printf("%d", b[i]);
	}
}