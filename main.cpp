#include <stdio.h>
#include <stdint.h>
#include "htons.h"

int main() {
        uint32_t buffer1[1];
	FILE *file1;
	file1 = fopen("thousand.bin", "rb");
	fread(buffer1, sizeof(uint32_t), 1, file1);
	uint32_t a = buffer1[0];
	fclose(file1);

	uint32_t buffer2[1];
	FILE *file2;
	file2 = fopen("five-hundred.bin", "rb");
	fread(buffer2, sizeof(uint32_t),1,file2);
	uint32_t b = buffer2[0];
	fclose(file2);

	uint32_t a1 = htons(a);
	uint32_t b1 = htons(b);

	printf("%d\n", a1+b1);

	return 0;

}
