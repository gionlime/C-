#include <stdio.h>

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book = {"C语言","Jeek","编程语言",123456};

int main(){
  printf("title:%s author:%s subject:%s book_id:%d\n",book.title,book.author,book.subject,book.book_id);
  return 0;
}