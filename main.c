#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale (LC_CTYPE, "ru");
	int a ,v = 0,s = 0;

        printf("��������: ");
        scanf("%d",&a);

        v = (a * a * a);

        s = 6 * (a * a);

       printf("�i����i�� V = %d",v);
	printf("\n�i����i�� S = %d\n",s);

	return 0;
}
