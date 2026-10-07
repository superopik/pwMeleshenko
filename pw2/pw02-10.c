#include <stdio.h>
#include <stdint.h>
int main()
{
	int packet_id;
	int status_code;
	float voltage;
	scanf("%x %o %f", &packet_id, &status_code, &voltage);
	status_code = (uint8_t)status_code;
	uint16_t checksum=packet_id+status_code;
	printf("PACKET_ID: %d\nSTATUS_CODE: %u\nSTATUS_CHAR: %c\nVOLTAGE: %f\nCHECKSUM: %d", packet_id, status_code, status_code, voltage, checksum);
	return 0;
}