#include "stdio.h"
#include "stdlib.h"
#include "CombineFiles.h"
#include "GetAllFilesInDir.h"
 int main(int argc, char *argv[]){
	if (argc==0){
		printf("sup");
	}
	for (int i=0; i<argc; i++){
		printf("%s  \n", argv[i]);
	}
	DisplayFilePaths(fpexp);
	return 0;
}
