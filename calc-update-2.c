#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, factorial, option, result, numberOne, numberTwo, average, sum;
    factorial = 1;

    while(option != 0){

    printf("1 - Toplama\n");
    printf("2 - Cikarma\n");
    printf("3 - Carpma\n");
    printf("4 - Bolme\n");
    printf("5 - Faktoriyal\n");
    printf("6 - Pozitif sayilarin Aritmatik Ort.\n");
    printf("0 - Cikis\n\n");

    printf("Yapmak istediginiz islemi secin:");
    scanf("%d", &option);
    printf("\n");

    switch(option){

    case 1:

    printf("birinci sayiyi girin:");
    scanf("%d", &numberOne);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &numberTwo);
    printf("\n");

    result = numberOne + numberTwo;

    printf("Sonuc:%d\n\n", result);

    break;

    case 2:

    printf("birinci sayiyi girin:");
    scanf("%d", &numberOne);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &numberTwo);
    printf("\n");

    result = numberOne - numberTwo;

    printf("Sonuc:%d\n\n", result);

    case 3:

    printf("birinci sayiyi girin:");
    scanf("%d", &numberOne);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &numberTwo);
    printf("\n");

    result = numberOne * numberTwo;

    printf("Sonuc:%d\n\n", result);

    break;

    case 4:

    printf("birinci sayiyi girin:");
    scanf("%d", &numberOne);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &numberTwo);
    printf("\n");

    result = numberOne / numberTwo;

    printf("Sonuc:%d\n\n", result);

    break;

    case 5:

    printf("sayi girin:");
    scanf("%d", &numberOne);
    printf("\n");

    if(numberOne < 0){

    printf("Gecersiz deger\n\n");

    return 0;
    }

    for(i = 1; i <= numberOne; i++)

    factorial *= i;

    printf("%d! = %d\n\n", numberOne, factorial);

    break;

    case 6:

    // hatali calismiyor.

    printf("Kac sayi gireceksiniz:");
    scanf("%d", &numberOne);
    printf("\n");

    if(numberOne <= 0){

    printf("Gecersiz deger\n");

    return 0;
    }
    for(i = 1; i <= numberOne; i++){

    printf("Sayi girin:");
    scanf("%d", &numberTwo);
    printf("\n");

    if(numberTwo == 0 || numberTwo < 0){

    printf("Lutfen pozitif bir sayi girin.\n");

    return 0;
    }

    else{

    sum += numberTwo;

    }
    average = sum / numberOne;

    printf("aritmatik ortalama:%d\n\n", average);

    break;

    case 0:

    break;
    }

    return 0;
}

    }

}
