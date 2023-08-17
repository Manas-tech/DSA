#include<stdio.h>
int main(){
    char a[]={"demon slayer"};
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]=='A'||a[i]=='a')
            a[i]='1';
        else if(a[i]=='E'||a[i]=='e')
            a[i]='2';  
        else if(a[i]=='I'||a[i]=='i')
            a[i]='3';
        else if(a[i]=='O'||a[i]=='o')
            a[i]='4';
        else if(a[i]=='U'||a[i]=='u')
            a[i]='5';  
    }
 puts(a);
}