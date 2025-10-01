#include<stdio.h>
int main(){
    float accNO,premiumChannels,basicChannels,amountDue,additionalBasicChannels;
    float billProcessingFees;
    char customerType;
    printf("enter your account number:");
    scanf("%f",&accNO);
    printf("enter you customer type(r = residential,p = premium):");
    scanf(" %c",&customerType);
    if(customerType=='R'||customerType=='r'){
        billProcessingFees=4.5;
        printf("you are residential customer!!!\n");
        printf("how many premium channels you use:");
        scanf("%f",&premiumChannels);
        printf("how many basic channels you use:");
        scanf("%f",&basicChannels);
        amountDue=billProcessingFees + (basicChannels*20.5) +(premiumChannels*7.5) ;
    }else if (customerType=='P'||customerType=='p'){
        billProcessingFees=15.0;
        printf("you are premium customer!!!\n");
        printf("how many premium channels you use:");
        scanf("%f",&premiumChannels);
        printf("how many additional basic channels you use:");
        scanf("%f",&additionalBasicChannels);
        amountDue=billProcessingFees + (basicChannels*10) + (additionalBasicChannels*5) +(premiumChannels*50) ;
    }else{
        printf("you enter wrong customer type!!!");
    }
    printf("ACCOUNT NUMBER: %.1f\n",accNO);
    printf("AMOUNT DUE:%.3f",amountDue);
    return 0;
}