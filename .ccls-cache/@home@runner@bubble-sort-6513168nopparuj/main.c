#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int Isprime(int a){
  if(a==1) return 0;
  for(int i=2;i<a;i++){
    if(a%i==0) return 0;
  }
  return 1;
}

int main(int argc , char *argv[]) {
int i,*a,n,*prime;
  n=argc-1;
  a=(int*)malloc(sizeof(int)*n);
  prime=(int*)malloc(sizeof(int)*n);
  int j=0;
  for(i=0;i<n;i++){
    a[i]=atoi(argv[i+1]);
    if(Isprime(a[i])){
      prime[j]=a[i];
      j++;
    }
  }
  if(j==0) printf("no prime\n");
  else{
  n=j;
  display(prime,n);
  bubbleSort(prime,n); 
   //insertion(a,N);

  // selectionSort(a,N);
   display(prime,n);
  }
 return 0;
}


