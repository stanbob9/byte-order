#include <stdint.h>

uint32_t convert(uint32_t num)
{
	return (num&0xff)<<24 | (num&0xff00)<<8 | (num&0xff0000)>>8 | (num&0xff000000)>>24;
}