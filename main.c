#include <stdio.h>
#include <stdlib.h>
#include <string.h> //라이브러리 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char src[100] = "Programming course";
	int i = 0; //문자 수를 세는 변수 
	
	while ( src[i] != 0) {//src 내용을 dst로 옮김
		i++;
 }
		
	printf("문자열\"%s\"의 길이 : %i", src, i) ;
	printf("\n");
	printf("%i", strlen(src)); //라이브러리에 포함. 길이세기 
	
	//strcpy(dst, src);라이브러리에 포함. 카피하는거 
	return 0;
}
