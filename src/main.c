#include "stdio.h"
#include "stdlib.h"
#include "CombineFiles.h"
 int main(int argc, char *argv[]){
	if (argc==0){
		printf("sup");
	}
	for (int i=0; i<argc; i++){
		printf("%s  \n", argv[i]);
	}
	CombineFiles();
	return 0;
}
