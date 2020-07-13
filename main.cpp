#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "convert.h"

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("usage : %s <file1> <file2>\n", argv[0]);
		exit(-1);
	}

	FILE *fp1, *fp2;
	uint32_t num1, num2, sum;

	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2], "r");

	fread(&num1, sizeof(uint32_t), 1, fp1);
	fread(&num2, sizeof(uint32_t), 1, fp2);
	
	fclose(fp2);
	fclose(fp1);
	
	num1 = convert(num1);
	num2 = convert(num2);
	sum = num1 + num2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", num1, num1, num1, num2, sum, sum);	

	return 0;
}
