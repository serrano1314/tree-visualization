#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define clrscr() system("cls")
struct node{
    char data[20];
    struct node *llink;
    struct node *rlink;
    
};
struct node *root = NULL;
void gotoxy(int x,int y){
    printf("%c[%d;%df",0x1B,y,x);
}
void setColor(int txColor,int bgColor){
	printf("\033[%d;%dm",bgColor+40,txColor+30);
}
void resetColor(){
	printf("\033[0m");
}
void display(void){
    clrscr();
    resetColor();
    printf("              PLEASE TYPE THE NAME OF THE FOLLOWING FIELD IN THE TREE...\n");
    printf("                                   GRANDPARENT\n");
    printf("                    ---------------------*-----------------------\n");
    printf("                    |                 PARENT                     |\n");
    printf("              ------*------------                    ------------*------\n");
    printf(" 	      |                 |       CHILD        |                 |\n");
    printf("  ------------*           ------*------        ------*------           *------------\n");
    printf("  |           |    GRAND  |           |        |           |   CHILD   |           |\n");
    printf("  *           |           *           |        *           |           *           |\n");   
    resetColor();
}
struct node *newnode(char data[20]) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  strcpy(node->data,data);
  node->llink = NULL;
  node->rlink = NULL;

  return (node);
}
int main(void){
    char temp_name[25];
    display();
    setColor(8,1);
    gotoxy(36,3);scanf("%s",&temp_name);
    gotoxy(36,3);
    printf(" %s ",root = newnode(temp_name));

    setColor(8,2);
    gotoxy(17,5);scanf("%s",&temp_name);
    gotoxy(17,5);
    printf(" %s ",root->llink = newnode(temp_name));
    gotoxy(58,5);scanf("%s",&temp_name);
    gotoxy(58,5);
    printf(" %s ",root->rlink = newnode(temp_name));

    setColor(8,4);
    gotoxy(10,7);scanf("%s",&temp_name);
    gotoxy(10,7);
    printf(" %s ",root->llink->llink = newnode(temp_name));
    gotoxy(28,7);scanf("%s",&temp_name);
    gotoxy(28,7);
    printf(" %s ",root->llink->rlink = newnode(temp_name));
    gotoxy(50,7);scanf("%s",&temp_name);
    gotoxy(50,7);
    printf(" %s ",root->rlink->llink = newnode(temp_name));
    gotoxy(69,7);scanf("%s",&temp_name);
    gotoxy(69,7);
    printf(" %s ",root->rlink->rlink = newnode(temp_name));

    setColor(8,3);
    gotoxy(1,9);scanf("%s",&temp_name);
    gotoxy(1,9);
    printf("%s",root->llink->llink->llink = newnode(temp_name));
    gotoxy(12,10);scanf("%s",&temp_name);
    gotoxy(12,10);
    printf("%s",root->llink->llink->rlink = newnode(temp_name));

    gotoxy(24,9);scanf("%s",&temp_name);
    gotoxy(24,9);
    printf("%s",root->llink->rlink->llink = newnode(temp_name));
    gotoxy(35,10);scanf("%s",&temp_name);
    gotoxy(35,10);
    printf("%s",root->llink->rlink->rlink = newnode(temp_name));

    gotoxy(45,9);scanf("%s",&temp_name);
    gotoxy(45,9);
    printf("%s",root->rlink->llink->llink = newnode(temp_name));
    gotoxy(56,10);scanf("%s",&temp_name);
    gotoxy(56,10);
    printf("%s",root->rlink->llink->rlink = newnode(temp_name));

    gotoxy(70,9);scanf("%s",&temp_name);
    gotoxy(70,9);
    printf("%s",root->rlink->rlink->llink = newnode(temp_name));
    gotoxy(80,10);scanf("%s",&temp_name);
    gotoxy(80,10);
    printf("%s",root->rlink->rlink->rlink = newnode(temp_name));

    resetColor();
    gotoxy(0,15);
    return 0;
}