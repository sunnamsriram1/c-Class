#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  
  
  int a,b, choice;

printf ("\n4.Division[  విభజన&భాగహారం ]\n");

printf("\nEnter PRESS 4\n");
scanf(" %d", &choice);

printf("\nEnter Marks : ");
scanf(" %d", &a);
printf("\nEnter Subjet : ");
scanf(" %d", &b);

switch (choice)
{
    
    case 4:
    printf("\nResult = %d / %d= %d\n", a, b, a/b);
    break; 
  
  }
  
  
  
  
  
  return 0;
}
