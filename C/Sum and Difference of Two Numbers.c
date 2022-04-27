#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int int1, int2;
    float float1, float2;
	  scanf("%i %i\n%f %f", &int1, &int2, &float1, &float2);
    
    printf("%i %i\n%.1f %.1f", int1+int2, int1-int2, float1+float2, float1-float2);
    
    return 0;
}
