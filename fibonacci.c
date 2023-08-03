#include<stdio.h>
void generateFibonacciSeries(int);  

void sum(int n){
    int fib[n];
  fib[0]=0;
    fib[1]=1;
    for (int i=2;i<=n-1;i++)
    {
      fib[i]=fib[i-1]+fib[i-2];
    }

    int ans = 0;

    for (int i=0;i<=n-1;i++)
    {
      ans += fib[i];
    }

    ans -= 1;

    printf("%d", ans);
}

int main()  
{  
    int n;  
    printf("How many number of series? :\n");  
    scanf("%d", &n);  
    printf("series:");  
    generateFibonacciSeries(n);
    printf("\nEvene:");  
    evenNumber(n);
    printf("\nSum :");  
    sum(n);
    return 0;  
}  

generateFibonacciSeries(int n)  
{  
    int fib[n],i;
    fib[0]=0;
    fib[1]=1;
    for (i=2;i<=n-1;i++)
    {
      fib[i]=fib[i-1]+fib[i-2];
    }

 

    for (i=0;i<=n-1;i++)
    {
      printf("%d", fib[i]);
    }

}
void evenNumber(int n){
  if(n==0) printf("0");
  else if(n==1) printf("No even numbers");
  else{
    int fib[n],i;
    fib[0]=0;
    fib[1]=1;
    for (int i=2;i<=n-1;i++)
    {
      fib[i]=fib[i-1]+fib[i-2];
    }

 

    for (int i=0;i<=n-1;i++)
    {
      if(fib[i]%2==0)
        printf("%d", fib[i]);
    }
  }
}