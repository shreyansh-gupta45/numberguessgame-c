#include <stdio.h>
void main (){
    int a,b;
    char name[50],playagain;
    do
    {
    
    printf("Enter your name :");
    scanf("%49s",&name);
    printf("Hello %s \nWelcome to NUMBER GUESSING GAME.\nTheir will be a number in my mind from 0 to 100,and you have to guess it.\nYour goal is to guess the number as fast as you can,and for your help i will give you hints.\n\n INSTRUCTIONS-:\n(+) represents Your guess is higher than the actual number\n(-) represents Your guess is lower than the actual number\nAND REMEMBER ONE THING IF I DON'T RESPOND TO YOUR GUESS IT MEANS YOU ARE FAR AWAY FROM THE ACTUAL NUMBER :) .. \nLET'S PLAY...\n",name);
    a=38;
    do
    {
    printf("\n\nEnter your guess :");
    scanf("%d",&b);
     if((b-a)<=10&&(b-a)>0)
    {
        printf("VERY CLOSE (+)");
    }
    else if (-10<=(b-a)&&(b-a)<0){
        printf("VERY CLOSE (-)");
    }
    else if (-20<=(b-a)&&(b-a)<-10){
        printf("CLOSE (-)");
    }
    else if ((b-a)<=20&&(b-a)>10){
        printf("CLOSE (+)");
    }
    
    else if ((b-a)==0){
        printf("CONGRATULATIONS!! YOU WON..");
    }
    } while (b!=a);
        printf("PLAY AGAIN (y/n) :");
        scanf(" %c",&playagain);
    } while (playagain=='y'||playagain=='Y');

    if (playagain=='n'||playagain=='N')
    {
        printf("Bye %s,\nHave a nice day!!",&name);
    }
    
}