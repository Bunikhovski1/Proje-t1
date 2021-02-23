#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale (LC_CTYPE, "ru");
	int a ,v = 0,s = 0;

        printf("Введення: ");
        scanf("%d",&a);

        v = (a * a * a);

        s = 6 * (a * a);

       printf("Вiдповiдь V = %d",v);
	printf("\nВiдповiдь S = %d\n",s);

	return 0;
}
