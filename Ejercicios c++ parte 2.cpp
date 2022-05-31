#include <iostream>
#pragma warning(disable : 4996)
#include <math.h>
using namespace std;

//20)
//int operacionSuma()
//{
//	int a;
//	int b;
//	printf("Cual es el valor de A ?");
//	scanf_s("%i", &a);
//	printf("Cual es el valor de B ?");
//	scanf_s("%i", &b);
//	int res;
//	res = (a + b);
//	printf("%i", res);
//	return res;
//}
//int operacionResta()
//{
//	int a;
//	int b;
//	printf("Cual es el valor de A ?");
//	scanf_s("%i", &a);
//	printf("Cual es el valor de B ?");
//	scanf_s("%i", &b);
//
//	int res;
//	res = (a - b);
//	printf("%i", res);
//	return res;
//	
//}
//
//int operacionMulti()
//{
//	int a;
//	int b;
//	printf("Cual es el valor de A ?");
//	scanf_s("%i", &a);
//	printf("Cual es el valor de B ?");
//	scanf_s("%i", &b);
//
//	int res;
//	res = (a * b);
//	printf("%i", res);
//	return res;
//}
//int operacionDivi()
//{
//	int a;
//	int b;
//	printf("Cual es el valor de A ?");
//	scanf_s("%i", &a);
//	printf("Cual es el valor de B ?");
//	scanf_s("%i", &b);
//
//	int res;
//	res = (a / b);
//	printf("%i", res);
//	return res;
//}

int main()
{
	/*
	13)
	int num;
	 printf("Ingresa un numero y te devuelvo sus divisores positivos\n");

	 scanf("%i", &num);

	 for (int i=1; i < num; i++) {

		 if (num%i==0)
		 {
			 printf("%i es divisor de %i\n", i, num);
		 }

	 }
	 */

	 /*
	  14)
	  int num;

	  printf("Ingresa un numero\n");
	  scanf_s("%i", &num);


	  for (int i = 0; i < num; i++)
	  {
		  printf_s("%i", i);
	  }
	  */

	  /*
	  15)
	  for (int i = 1; i < 100; i++) {
		  printf("%i", i);
	  }
	  */

	  /*
	  16)
	  for (int i = 1; i < 100; i++) {

		  if (i % 2 == 0)
		  {
			  printf("%i\n", i);
		  }

	  }
	  */

	  /*
	  17)
	  int num;
	 printf("Decime un numero pa");

	 scanf("%i", &num);

	 for (int i = 0; i < num; i++)
	 {
		 printf("%i\n", i);
	 }*/
	 /*
	 18)
	 for (int i = 44; i < 72; i++) {
		 if (i % 4 == 0) {
			 printf("%i\n", i);
		 }
	 */



	 /*
	 19)
	 double num = 4.0;

	 for (double i = 1;i <= num;i++)

	 {
		 double x = 1;

		 for (double j = 1; j <= i;j++) {

			 x = x * 10;

		 }

		 printf("%.1f \n", x);
	 }*/


	 /*
	 20)
	 int caso;
	 printf("Que caso elegis?\n");
	 scanf_s("%i", &caso);

	 switch (caso)
	 {
	 case 1:

		 operacionSuma();


		 break;
	 case 2:

		 operacionResta();


		 break;

	 case 3:

		 operacionMulti();

		 break;
	 case 4:

		 operacionDivi();

		 break;

	 }*/
	 /*
	 21)
	 int vector[10];

	 for (int i = 0; i < 10; i++) {

		 printf("\n\tIngrese un número entero: ");

		 scanf("%i", &vector[i]);
	 }


	 for (int i = 0; i < 10; i++) {

		 printf("\n\t %i", vector[i]);
	 }
	 */
/*
	22)
	int nroDeMes;
	int dia;
	int sumaDeDias = 0;

	int cantDiasPorMes[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("\n\nIngrese un mes (ejemplo: Febrero es el mes 2): ");

	scanf("%i", &nroDeMes);

	printf("\n  Ese mes tiene %i días ", cantDiasPorMes[nroDeMes - 1]);

	printf("\n\nAhora, ingrese un mes (ejemplo: Febrero es el mes 2) y un día: ");

	scanf("%i %i", &nroDeMes, &dia);

	for (int i = 0; i <= nroDeMes; i++) {

		sumaDeDias += cantDiasPorMes[i - 1];
		if (i == nroDeMes) {

			sumaDeDias -= (cantDiasPorMes[i - 1] - dia);
		}
	}

	printf("\n Esa fecha es el número de día %i del año ", sumaDeDias);
}*/
}
