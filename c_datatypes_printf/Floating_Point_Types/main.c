#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv)
{
  printf("Storage size for float : %d \n", sizeof(float));
  printf("Storage size for double : %d \n", sizeof(double));
  printf("FLT_MAX      : %g\n", (float) FLT_MAX);
  printf("FLT_MIN      : %g\n", (float) FLT_MIN);
  printf("-FLT_MAX     : %g\n", (float) -FLT_MAX);
  printf("-FLT_MIN     : %g\n", (float) -FLT_MIN);
  printf("DBL_MAX      : %g\n", (double) DBL_MAX);
  printf("DBL_MIN      : %g\n", (double) DBL_MIN);
  printf("-DBL_MAX     : %g\n", (double) -DBL_MAX);
  printf("Precision value: %d\n", FLT_DIG );

	_Bool b = sizeof(b) * CHAR_BIT; 
	char c = sizeof(c) * CHAR_BIT; 
	unsigned char uc = sizeof(uc) * CHAR_BIT; 
	short s = sizeof(s) * CHAR_BIT; 
	unsigned short us = sizeof(us) * CHAR_BIT; 
	int i = sizeof(i) * CHAR_BIT; 
	unsigned int ui = sizeof(ui) * CHAR_BIT; 
	long l  = sizeof(l) * CHAR_BIT; 
	unsigned long ul  = sizeof(ul) * CHAR_BIT; 
	float f = sizeof(f) * CHAR_BIT; 
	double d  = sizeof(d) * CHAR_BIT; 
	long double ld  = sizeof(ld) * CHAR_BIT; 
#ifdef	__STDC_IEC_559_COMPLEX__ 
	_Complex float cf = sizeof(cf) * CHAR_BIT; 
	_Complex double cd  = sizeof(cd) * CHAR_BIT; 
	_Complex long double lcd  = sizeof(lcd) * CHAR_BIT; 
#endif 
	void* ptr = (void *) (sizeof(ptr) * CHAR_BIT); 
 
	if (i == 16 && ptr == (void *)16) { 
		if (l == 16) { 
			printf ("PDP-11 programming model, ILP16\n"); 
		} else 
			printf ("PDP-11 programming model, IP16, L32\n"); 
	} 
	if (i == 32 && ptr == (void *)32) { 
		if (l == 32) { 
			printf ("Vax/68000/x86 programming model, ILP32, S%d\n", (int) s); 
		} else 
			printf ("Unknown ISA programming model, IP32, S%d, L%d\n", (int)s, (int) l); 
	} 
	if (s == 16 && i == 32 && ptr == (void *)64) { 
		if (l == 64) { 
			printf ("Alpha/Intel64 programming model, LP64, S16, I32\n"); 
		} else 
			printf ("Unknown ISA programming model, P64, S16, I32, L%d\n", (int)l); 
	} 
	if (i == 64 && ptr == (void *)64) { 
		if (l == 64) { 
			printf ("Unknown ISA programming model, ILP64, I%d, S%d\n", (int)i, (int)s); 
		} else 
			printf ("Unknown ISA programming model, IP64, S%d, L%d\n", (int)s, (int)l); 
	} 
	printf("sizeof (_Bool): %d bits\n", (int)b); 
	printf("sizeof (char): %d bits\n", (int)c); 
	printf("sizeof (unsigned char): %d bits\n", (int)uc); 
	printf("sizeof (short): %d bits\n", (int)s); 
	printf("sizeof (unsigned short): %d bits\n", (int)us); 
	printf("sizeof (int): %d bits\n", i); 
	printf("sizeof (unsigned int): %d bits\n", (int)ui); 
	printf("sizeof (long): %d bits\n", (int)l); 
	printf("sizeof (unsigned long): %d bits\n", (int)ul); 
	printf("sizeof (float): %d bits\n", (int)f); 
	printf("sizeof (double): %d bits\n", (int)d); 
	printf("sizeof (long double): %d bits\n", (int)ld); 
#ifdef	__STDC_IEC_559_COMPLEX__ 
	printf("sizeof (_Complex float): %d bits\n", (int)cf); 
	printf("sizeof (_Complex double): %d bits\n", (int)cd); 
	printf("sizeof (_Complex long double): %d bits\n", (int)lcd); 
#endif 
	printf("sizeof (void*): %d bits\n", (int)ptr); 
	
	return 0;
}
