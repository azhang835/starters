#include "stdio.h"
//Initial ver.
int main(){
   int a;
   a=4;
   int b;
   b=4;
   int i,j;
   int c[10];
   int d[10][10];
   c[0]=1000;
   c[1]=2000;
   printf("hello a=%d\n", a);
   printf("hello b=%d\n", b);
   printf("hello c[1]=%d\n", c[1]);
   if (b<a){
      printf("b is less than a!\n");
   }
   else if(b>a){
      printf("b is greater than a!\n");
   }
   else {
      printf("b is a!\n");
   }
   for(i=0; i<10; i=i+2){
      c[i]=i*2;
      printf("c[%d]=%d!\n", i,c[i]);
   }
   printf("hello c[3]=%d\n", c[3]);
   for(i=0; i<10; i=i+1){
      for(j=0; j<10; j=j+1){ 
         d[i][j]=i*j;
         printf("d[%d,%d]=%d!\n", i,j,d[i][j]);
      }
   }
   printf("hello c[3]=%d\n", c[3]);
   a=power(100000);
   a=factl(8);
   printf("hello a=%d\n", a);
   return 0;
}
int power(int a){
   int b;
   b=a*a; 
   //printf("Hello \n");
   return b; 
   
}
int factl(int x){
   if (x==1){
      return 1;
   }
   return x*factl(x-1);
}
