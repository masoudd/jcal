#include <stdio.h>
#include <stdlib.h>
#include "jalali.h"

int main(int argc, char** argv)
{
    int start;
    int end;
    if (argc == 3) {
        start = atoi(argv[1]);
        end = atoi(argv[2]);
    } else if (argc == 1) {
        start = 1206;
        end = 1498;
    }
    else {
        printf("Wrong arguments given\n");
        printf("Usage: list_leap [START_YEAR END_YEAR]\n"
                "\tBoth arguments inclusive\n"
                "\tDefaults to 1206 1498\n");
        exit(1);
    }

    for (int year = start; year <= end; year++) {
        if (jalali_is_jleap(year)) {
            printf("%d\n", year);
        }
    }
    exit(0);
}
