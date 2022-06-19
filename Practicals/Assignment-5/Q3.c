     #include<stdio.h>
    void fibo(int n){
        static int n1=0,n2=1,n3;
        if(n>0){
             n3 = n1 + n2;
             n1 = n2;
             n2 = n3;
             printf("%d ",n3);
             fibo(n-1);
        }
    }
    int main(){
        int n;
        printf("Enter the number of elements in series: ");
        scanf("%d",&n);
        printf("Fibonacci Series: ");
        printf("%d %d ",0,1);
        fibo(n-2);
     return 0;
    }