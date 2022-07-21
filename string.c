#include <stdio.h>
#include <string.h>

int main(){
    char site[] = "Hello C String";
    printf("site[11]: %s\n",site);


    char str1[14] = "jeek";
    char str2[14] = "google";
    char str3[14];
    int len;
     //str1 拷贝到 str3
     strcpy(str3,str1);
     printf("strcpy(str3,str1): %s\n",str3);
     //连接str1 str2
     strcat(str1,str2);
     printf("strcat(str1,str2): %s\n",str1);
     //连接后的总长度
     len = strlen(str1);
     printf("strlen(str1): %d\n",len);
    return 0;
}