#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]){
  if(argc<4)
    return EXIT_FAILURE;
  int sc=strcmp(argv[1], argv[2]);
  if(sc==1) printf("Equal");
  else
    printf("Not Equal");
  return EXIT_SUCCESS;
}