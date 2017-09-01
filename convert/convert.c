#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <system.h>

int main(int argc, char **argv){
	char *command = "";
	char *upcommand = "upcase|pwd";
	char *lowcommand = "lowcase|pwd";

	if(argc>0){
		int argNum=--argc;
		do{
			if(strcmp(argv[argNum], "-u") == 0){
				command = upcommand;
			}else if(strcmp(argv[argNum], "-l") == 0){
				command = lowcommand;
			}
		}while(argNum-->0);
	}
	printf("command:%s\n", command);
}
