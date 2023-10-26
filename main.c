#include<stdio.h>
#include<stdlib.h>

int main(){
    int password;
    int reenter;
    int retypecount = 0;
    int retypelimit = 3;
    int accountlocked = 0;

    printf("Enter the Password:");
    scanf("%d", &password);

    while(password != reenter && accountlocked == 0){
        if(retypecount < retypelimit){
            printf("Reenter the password:");
            scanf("%d", &reenter);
            retypecount++;
        } else {
            accountlocked = 1;
        }
    }
    if(accountlocked == 1){
        printf("Access Denied");
        } else{
             printf("Access Granted");
            }
       }

