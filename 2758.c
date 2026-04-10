#include <stdio.h>

int main()
{
    float fl1, fl2;
    double db1, db2;
    
    scanf("%f %f %lf %lf", &fl1, &fl2, &db1, &db2);
    printf("A = %f, B = %f\n", fl1, fl2);
    printf("C = %lf, D = %lf\n", db1, db2);
    printf("A = %.1f, B = %.1f\n", fl1, fl2);
    printf("C = %.1lf, D = %.1lf\n", db1, db2);
    printf("A = %.2f, B = %.2f\n", fl1, fl2);
    printf("C = %.2lf, D = %.2lf\n", db1, db2);
    printf("A = %.3f, B = %.3f\n", fl1, fl2);
    printf("C = %.3lf, D = %.3lf\n", db1, db2);
    printf("A = %.3E, B = %.3E\n", fl1, fl2);
    printf("C = %.3E, D = %.3E\n", db1, db2);
    printf("A = %.0f, B = %.0f\n", fl1, fl2);
    printf("C = %.0lf, D = %.0lf\n", db1, db2);

    return 0;
}
