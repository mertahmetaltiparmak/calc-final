#include <stdio.h>
#include <stdlib.h>

int menu();

void toplam();
void cikarma(); 
void carpma();
void bolme();
void faktoriyel();
void aritmetik();

int main() {
    int option = 1;
   
    while (option != 0) {

       option = menu();
        
        switch (option) {
            case 1:
                toplam();
                break;
            case 2:
                cikarma();
                break;
            case 3:
                carpma();
                break;
            case 4:
                bolme();
                break;
            case 5:
                faktoriyel();
                break;
            case 6:
                aritmetik();
                break;
            case 0:
                break;
        }
    }
    system("pause");
    return 0;
}

int menu() {
    int opt;
    printf("1 - Toplama\n");
    printf("2 - Cikarma\n");
    printf("3 - Carpma\n");
    printf("4 - Bolme\n");
    printf("5 - Faktoriyal\n");
    printf("6 - Pozitif sayilarin Aritmetik Ort.\n");
    printf("0 - Cikis\n\n");

    printf("Yapmak istediginiz islemi secin:");
    scanf("%d", &opt);
    printf("\n"); 

    return opt;
}
void toplam() {
    int numberOne, numberTwo, result;

     printf("birinci sayiyi girin:");
     scanf("%d", &numberOne);
     printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &numberTwo);
    printf("\n");

    result = numberOne + numberTwo;
    printf("Sonuc:%d\n\n", result);
}
void cikarma() {
    int numberOne, numberTwo, result;

    printf("birinci sayiyi girin:");
    scanf("%d", &numberOne);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &numberTwo);
    printf("\n");

    result = numberOne - numberTwo;
    printf("Sonuc:%d\n\n", result);

}
void carpma() {
    int numberOne, numberTwo, result;

    printf("birinci sayiyi girin:");
    scanf("%d", &numberOne);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &numberTwo);
    printf("\n");

    result = numberOne * numberTwo;
    printf("Sonuc:%d\n\n", result);

}
void bolme() {
    int numberOne, numberTwo, result;

    printf("birinci sayiyi girin:");
    scanf("%d", &numberOne);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &numberTwo);
    printf("\n");

    result = numberOne / numberTwo;
    printf("Sonuc:%d\n\n", result);

}
void faktoriyel() {
    int numberOne, factorial = 1;

    printf("sayi girin:");
    scanf("%d", &numberOne);
    printf("\n");

    if (numberOne < 0) {
        printf("Gecersiz deger\n\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 1; i <= numberOne; i++) {
        factorial *= i;
    }
    printf("%d! = %d\n\n", numberOne, factorial);

}
void aritmetik() {
    int numberOne, numberTwo, average, sum = 0;

    printf("Kac sayi gireceksiniz:");
    scanf("%d", &numberOne);
    printf("\n");

    if (numberOne <= 0) {
        printf("Gecersiz deger\n\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i <= numberOne; i++) {
        printf("Sayi girin:");
        scanf("%d", &numberTwo);
        printf("\n");

        if (numberTwo == 0 || numberTwo < 0) {
            printf("Lutfen pozitif bir sayi girin.\n\n");
            exit(EXIT_FAILURE);
        } else {
            sum += numberTwo;
        }
    }
    average = sum / numberOne;
    printf("aritmetik ortalama:%d\n\n", average);
}