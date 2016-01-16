#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *ptr ,n,i,n1;
	printf("dizi buyuklugunu giriniz\n");
	scanf("%d",&n); 
	ptr =(int*)malloc(n*sizeof(int));
	printf("dizinin adresi %p\n",ptr);
	for (i=0;i<n;i++)
	    printf("%d\t",*(ptr+i));
	    
	printf("\ndizinin ikinci buyuklugunu giriniz\n");
	scanf("%d",&n1);
	ptr=(int*)realloc(ptr,n1*sizeof(int));
	printf("boyutu degistirilmis dizinin adresi %p\n",ptr);
	for (i=0;i<n1;i++)
	    printf("%d\t",*(ptr+i));
	return 0;
}
