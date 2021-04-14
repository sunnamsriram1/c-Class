
#include <stdio.h>
#include <stdlib.h>

int main()

{
    char person1[20];
    char person2[20];
    int  mutualFriends;
    int sunnam;
    int sriram;


   printf("\nEnter Your Informitions\n");

   printf("What is Your Name?\n");
   scanf("%s", person1);
  
   printf("Who is the Best Friend?\n");
   scanf("%s", person2);

   printf("How many Mutual Friends?\n");
   scanf("%d", &mutualFriends);
   printf("\nEnter Your Best Number\n");
   scanf("%d", &sunnam);
   printf("\nHow Many Lovers Dud?\n");
   scanf("%d", &sriram);


printf("\n%s and %s Are Best Friends and Have %d mutual Friends %d Is Your Best Number and You Have %d Lovers Dud\n", person1, person2, mutualFriends, sunnam,sriram);


   return 0;
}
