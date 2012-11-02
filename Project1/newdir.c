#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
#include<string.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char* argv[]){
	mkdir("newDIR", 511);
}