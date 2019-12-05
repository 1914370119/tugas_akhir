#include <stdio.h>
#include <math.h>
int main ()
{
int a,b,c,D,x1,x2;

printf ("masukannilai a");
scanf("%d", &a);
printf ("masukannilai b");
scanf("%d", &b);
printf ("masukannilai c");
scanf ("%d", &c);
    //a = 13;
    //b = 10;
    //c = 25;
if (a > 0){
 D = (pow(b, 2) - (4 * a * c));
if (D >= 0){
x1 = ( -b + sqrt(D)) / 2*a;
x2 = (-b - sqrt (D)) / 2*a;
printf ("x1: %d", x1);
printf ("\n");
printf ("x2; %d", x2);
printf("\n");
 } else{
printf("akarimajiner");
        }
    }

return (0);

  }
