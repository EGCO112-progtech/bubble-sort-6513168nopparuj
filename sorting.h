// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

/* void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} */





void insertionsort(int x[],int n)
{
  int j,i;
  for(j=1;j<n;j++){
  int value =x[j];
  for(i=j-1;i>=0;i--){
    if(value<x[i]) break;
      else x[i+1]=x[i];
    display(x,n);
    }
  x[i+1]=value;
    display(x,n);
    printf("\n");
    }

}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(i=0;i<n-1;i++){
  sorted=0;
  for(j=0;j<n-1-i;j++){
    if(a[j]>a[j+1]){
    swap(&a[j],&a[j+1]);
      sorted=1;
      }
    display(a,n);
    }
  if(sorted==0) break;
  }
  
}

void selectionSort(int a[],int n)
{
  int i,j;
  int m=a[0];
  int mi=0;
  for(j=0;j<n-1;j++ )
  {
    m=a[j];
    mi=j;
    for(i=j+1;i<n;i++)
    {
      if(m>a[i])
      {
        m=a[i];
        mi=i;
      }
    }
  swap(&a[j],&a[mi]);
  printf("Minimum is %d\n",m);
  display(a,n);
  }
}

int Isprime(int num){
  if(num==1) return 0;
  for(int i=2;i<num;i++){
    if(num%i==0) return 0;
  }
  return 1;
}


  





