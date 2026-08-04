#include <stdio.h>
#include <string.h>
struct address
{
    int House_no;
    int block;
    char city[100];
    char state[100];
};
void address(struct address add);

int main(){
    struct address adds[5];

    printf("Enter the info of person 1 :");
    scanf("%d",&adds[0].House_no);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

    printf("\n");

    printf("Enter the info of person 2 :");
    scanf("%d",&adds[1].House_no);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

    printf("\n");

    printf("Enter the info of person 3 :");
    scanf("%d",&adds[2].House_no);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

    printf("\n");

    printf("Enter the info of person 4 :");
    scanf("%d",&adds[3].House_no);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

    printf("\n");

    printf("Enter the info of person 5 :");
    scanf("%d",&adds[4].House_no);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state); 

    address(adds[0]);
    address(adds[1]);
    address(adds[2]);
    address(adds[3]);
    address(adds[4]);
    
    return 0;
}
void address(struct address add){
    printf("Address : %d,%d,%s,%s\n",add.House_no,add.block,add.city,add.state);
}