/* strtod example */
#include <stdio.h>  /* printf, NULL */
#include <stdlib.h> /* strtod */

int main() {
    char szOrbits[] = "365.24.1.1 29.53";
    char* pEnd;
    double d1, d2;
    d1 = strtod(szOrbits, &pEnd);
    d2 = strtod(pEnd, NULL);
    printf("%f %f\n", d1, d2);
    printf("The moon completes %.2f orbits per Earth year.\n", d1 / d2);
    return 0;
}
