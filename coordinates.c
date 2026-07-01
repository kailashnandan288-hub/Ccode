#include <stdio.h>

int main() {
    float x, y;

    printf("Enter coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0)
        printf("point lies in Quadrant I.\n");

    else if (x < 0 && y > 0)
        printf("point lies in Quadrant II.\n");

    else if (x < 0 && y < 0)
        printf("point lies in Quadrant III.\n");

    else if (x > 0 && y < 0)
        printf("point lies in Quadrant IV.\n");
        
    else
        printf("point lies on an axis or at the origin.\n");

    return 0;
}