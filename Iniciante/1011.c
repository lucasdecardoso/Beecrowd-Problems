#include <stdio.h>

int main() {

    double volume, raio;

    scanf("%lf", &raio);
  
    volume = ( (4/3.0) * 3.14159 * (raio * raio * raio) );

    printf("VOLUME = %0.3lf\n", volume);

    return 0;
}
