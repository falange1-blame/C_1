//문장(ASCII Strings) vs 정수(Raw Byte Buffers)
#include <stdio.h>
#include <string.h>
int main(void)
{
	/* (1) ASCII string — printable text, terminated by '\0' */
	char text[] = "TEMP=23";
	printf("ASCII: %s, length=%lu\n", text, strlen(text));

	/* (2) Raw byte buffer — binary data, length tracked separately */
	unsigned char raw[6] = { 0x01, 0x42, 0xFF, 0x00, 0x7E, 0xA3 };
	int raw_len = 6, i;

	for (i = 0; i < raw_len; i++) {
		printf("0x%02X ", raw[i]);
	}
	printf("\n");

	/* strlen on raw[] would stop at index 3 (0x00) — wrong! */
	return 0;
}