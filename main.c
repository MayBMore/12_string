#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE*fp;
	char input[100];
	int i;
	
	fp = fopen("sample.txt", "w");
	
	for (i=0 ; i<3 ; i++) {
		printf("input a word : ");
		scanf("%s", input);
		fprintf(fp, "%s\n", input);
	}
	//Sookmyung
	//Electronics
	//Programming
	
	fclose(fp);
	return 0;
}
