    #include<stdio.h>
    #include<math.h>
    int main(){
        int n = 0;
        int isPrime = 1; // initially it is prime
        if (n == 0 || n==1)
        {
            printf("NUMBER IS NOT PRIME");
            // return 0 ;
        }   
        for (int  i = 2; i < n; i++)
        {
            if (n % i == 0){
                isPrime = 0 ; // found a divisor 
                break;
            }
        }
        if (isPrime){
            printf("NUMBER IS PRIME!!");
        }else{
            printf("NUMBER IS NOT PRIME!!");
        }
        
        return 0;
    }