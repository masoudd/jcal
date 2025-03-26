
#include <stdio.h>
#include <stdlib.h>
#include "jalali.h"
#include "jconfig.h"

/* prints a table of leap year distances from leap base to year 1500 */
int main(int argc, char** argv)
{
    int distance = 0;
    for (int year = JALALI_LEAP_BASE; year <= 1500; year++) {
        distance++;
        if (jalali_is_jleap(year)) {
            printf("%d", distance);
            if (distance == 4) {
                printf(" ");
            } else if (distance == 5) {
                //printf("\n");
                printf(" <-%d\n", year); // show the 5 year leap year
            } else {
                printf("distance is not 4 or 5??\n");
            }
            distance = 0;
        }
    }
    exit(0);
}
