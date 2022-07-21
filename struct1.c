#include <stdio.h>
#include <string.h>

struct Books{

    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
void printBook(struct Books *book);
int main(){
    struct Books book1;
    struct Books book2;
    //Book1
    strcpy(book1.title,"C Programming");
    strcpy(book1.author,"jeek");
    strcpy(book1.subject,"C");
    book1.book_id = 123456;

    printBook(&book1);

    return 0;
}

void printBook(struct Books *book){
    printf("pointer -> book1 title: %s author: %s subject: %s book_id: %d\n",book->title,book->author,book->subject,book->book_id);

}