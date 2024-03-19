//Write a program in C to count the total number of vowels or consonants in a string.
#include<stdio.h>
int main(){
    char str[50];
    int i,vowel,conso;
    printf("enter string:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++){
        if(str[i] == 'a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] == 'u'){
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            conso++;
        }
    }
    printf("\n total number of vowels:%d",vowel);
    printf("\n total number of consonants:%d",conso);
}