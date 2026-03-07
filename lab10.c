#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook; 
void DisplayData(struct Books CBook); //คือ printf ข้อมูล struct books จากพารามิเตอร์ที่รับเข้ามา

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",&ComputerBook.BookTitle); 
    DisplayData(ComputerBook); // ส่งข้อมูลไปยังฟังก์ชัน DisplayData พารามิเตอร์ ComputerBook
    return 0; 
} 
void DisplayData(struct Books CBook){ 
    printf("Book ID : %d \n",CBook.BookID); 
    printf("Book Title : %s \n",CBook.BookTitle); 
} 
