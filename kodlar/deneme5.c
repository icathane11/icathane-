#include <stdio.h>
int main(){
int sayi1 , sayi2; 
int toplam , fark , carpim , mod; 
float bolum; 
printf("Lütfen iki sayi giriniz"); 
scanf("%d%d" , &sayi1, &sayi2); 
toplam = sayi1 + sayi2; 
fark = sayi1 - sayi2; 
carpim = sayi1 * sayi2; 
bolum = (float)sayi1 / sayi2; 
mod = sayi1 % sayi2; 
printf("Toplam = %d\n", toplam); 
printf("fark = %d\n", toplam); 
printf("Çarpım = %d\n", carpim); 
printf("Bölüm = %d\n", bolum); 
printf("yüzde = %d\n", mod); 
return 0;
}