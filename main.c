#include <stdio.h>
#include <stdlib.h>
#include <string.h> //���̺귯�� 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char src[100] = "Programming course";
	int i = 0; //���� ���� ���� ���� 
	
	while ( src[i] != 0) {//src ������ dst�� �ű�
		i++;
 }
		
	printf("���ڿ�\"%s\"�� ���� : %i", src, i) ;
	printf("\n");
	printf("%i", strlen(src)); //���̺귯���� ����. ���̼��� 
	
	//strcpy(dst, src);���̺귯���� ����. ī���ϴ°� 
	return 0;
}
