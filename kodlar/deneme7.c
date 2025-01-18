#include <stdio.h>
int main(){
    float cm , metre , km; 
    print("Uuzunluğu santimetre cinsinden giriniz");
    scanf("%f",&cm); 
    metre = cm / 100.0;
    km = cm / 100000.0; 
    printf("Metre cinsinden uzunluğu = %.2f m \n", metre);
    printf("Km cinsinden uzunluğu = %.2f km", km);
    return 0;


}
