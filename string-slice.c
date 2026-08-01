#include <stdio.h>
void slice(char word[],int n,int m);
int main(){
    char word[100];
    printf("Enter the word:");
    scanf("%s",word);

    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int m;
    printf("Enter m :");
    scanf("%d",&m);

    slice(word,n,m);

    
    return 0;
}
void slice(char word[],int n,int m){
    char result[100];
    int j=0;
    for (int i = n; i <=m; i++)
    {
        result[j]=word[i];
        j++;
    }
    result[j]='\0';
    puts(result);

}