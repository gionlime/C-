#include <stdio.h>

int main(){
    FILE *fp = NULL;
    fp = fopen("/Users/lijun/file/test.txt","a+");
     fprintf(fp,"test fprintf...\n");
     fputs("fputs test...\n",fp);
     fclose(fp);
    return 0;
}