#include <stdio.h>
#include<string.h>
int main(){
char a[10],b[10];
scanf("%s",a);
strcpy(b,a);
strrev(b);
if (strcmp(a,b)==0){
    printf("PALINDROME");
}
else{
    printf("NOT A PALINDROME");
}
}