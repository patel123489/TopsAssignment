#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    
    printf("Enter the value of Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9/5) + 32;
    printf("%f fahernheit",fahrenheit);
    
}
