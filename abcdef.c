#include<stdalign.h>
int main()
{
    int amount, nohun, notify, noten, nofive, notwo, noone, total;
    printf("Enter the amount");
    scanf("%d", &amount);
    nohun= amount/100;
    amount= amount%100;
    notify= amount/50;
    amount= amount%50;
    noten= amount/10;
    amount= amount%10;
    nofive= amount/5;
    amount= amount%5;
    notwo= amount/2;
    amount= amount%2;
    noone= amount/1;
    amount= amount%1;
    total= nohun+notify+noten+nofive+notwo+noone;
    printf(" Smallest number of notes=%d\n", total);
    return 0;
}