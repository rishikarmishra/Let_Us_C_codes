#include <stdio.h>

int main() {
   
    double x, y;

   
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%lf %lf", &x, &y);

    
    if (x == 0 && y == 0) {
        printf("The point (%.2f, %.2f) is at the origin.\n", x, y);
    }
   
    else if (y == 0) {
        printf("The point (%.2f, %.2f) is on the X-axis.\n", x, y);
    }
    
    else if (x == 0) {
        printf("The point (%.2f, %.2f) is on the Y-axis.\n", x, y);
    }
    else {
        printf("The point (%.2f, %.2f) is not on the X-axis, Y-axis, or origin.\n", x, y);
    }

    return 0;
}
