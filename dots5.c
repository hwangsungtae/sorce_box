typedef volatile unsigned short hword;
#define VRAM 0x06000000
int main (void) {
	hword *ptr;
	hword color;
	ptr = (hword*) 0x04000000 ;
	*ptr = 0x0F03;
	color = 0x7FFF ;
	ptr = (hword*) VRAM;
	int i;
	for(i = 0; i < 4 ; i = i + 1 ) {
		*ptr = color;
		ptr = ptr + 2;
	}
	while (1);
	return 0;
}
