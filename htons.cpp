#include <stdint.h>
#include "htons.h"

uint32_t htons(uint32_t a){
	uint32_t a1 = (a & 0xFF000000) >> 24;
	uint32_t a2 = (a & 0x00FF0000) >> 8;
	uint32_t a3 = (a & 0x0000FF00) << 8;
	uint32_t a4 = (a & 0x000000FF) << 24;
	
	uint32_t b = a1|a2|a3|a4;
	return b;
}
