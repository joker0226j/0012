#include<stdio.h>
#include<stdlib.h>

int main() {

int v,b,n;
int a=5;

for(v=a;v>=1;v--){
for(b=a;b>v;b--){
printf(" ");
}
for(n=1;n<=v;n++){
printf("*");
}
printf("\n");
}
printf("\n");

system("PAUSE");
return 0;
}
