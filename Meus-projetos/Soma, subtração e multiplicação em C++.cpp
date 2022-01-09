 #include<stdio.h>
 #include<stdlib.h>
 main()
 {
float a, b, c, somaAB, subtraiBC, multiplicaCA;

printf("\n Digite um numero: ");
scanf("%f", &a);
printf("\n Digite outro numero: ");
scanf("%f", &b);
printf("\n Digite outro numero: ");
scanf("%f", &c);
system("cls");
somaAB = a+b;
subtraiBC = b-c;
multiplicaCA = c*a;
printf("\n Soma de ab: %f \n", somaAB);
printf("\n Subtracao de bc: %f \n", subtraiBC);
printf("\n Multiplicacao de ca: %f \n", multiplicaCA);
system("pause");
 }
 