#include <stdio.h>

int main()
{
    double latitude;
    double longitude;
    char info[80];
    int started = 0;

    puts("data=[");
    while (scanf("%lf,%lf,%79[^\n]", &latitude, &longitude, info) == 3) {
        if (started)
        printf(",\n");
        else
        started = 1;
        printf("{latitude: %lf, longitude: %lf, info: '%s'}", latitude, longitude, info );
    }
    puts("\n");
    return 0;
}