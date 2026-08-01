#include <stdio.h>
void countvowel(char word[]);
int main(){
    char word[100];
    printf("Enter the word : ");
    fgets(word,100,stdin);
    puts(word);
    countvowel( word);

    return 0;
}
void countvowel(char word[]){
    int c=0;
    for (int i = 0; word[i]!='\0'; i++)
    {
        if (word[i]=='a'|| word[i]=='e'|| word[i]=='i'|| word[i]=='o' ||word[i]=='u')
        {
            c++;
        }
        
    }
    printf("Number of vowerls are %d",c);
}