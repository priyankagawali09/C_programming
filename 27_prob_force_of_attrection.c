#include <stdio.h>
// calculate force of attraction
float cal_force(float m)
{
    // f=m.g
    // gravity =9.8 constant
    return m * 9.8;
}
int main()
{
    float mass;
    printf("Mass of body ");
    scanf("%f", &mass);
    printf("force of attraction body of mass %.2f is %.2f ", mass, cal_force(mass));

    return 0;
}