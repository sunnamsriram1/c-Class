#include <stdio.h>
#include <stdlib.h>
//Compiler version gcc  6.3.0

int main()
{
  
  
  int choice;
//float choice2;

printf("\n1.All-Table\n2.Inter-Percent sign\n3.10th-Percent sign\n4.Marks-Entered\n5.\Cａｌｃｕｌａｔｏｒ\n");

//printf("\nEnter 0 to end \n");

printf("\nAny One No\n");
scanf(" %d", &choice);



if(choice > 0){

switch (choice)
{
    case 1:
printf("\nHello World\n");
/*
int x, y = 1;
//int y = 1;
int z;

printf("\nEnter Table No\n");
scanf(" %d", &x);
//int a = x * 20;

for(z=x; z<=x * 20; z+=x){
   printf("\n%d * %d = %d\n", y, x, z);
    y++;
} */
    break;

    case 2:
printf("\nHello World\n");


int Roll;

printf("\nEnter Your Intermediate Roll No\n");
scanf("%d", &Roll);

if(Roll >= 1000000000){
	printf("\nWelcome to World\n");

    printf("\nYour Roll No %d\n", Roll);


int english, telugu, economics, commerce, civics, avg;

float  b, a = 10;

int c;




printf("\nEnter 1st Year Marks\n");

printf("\nEnter Marks for English\n");
scanf(" %d", &english);
printf("\nEnter Marks for Telugu\n");
scanf(" %d", &telugu);
printf("\nEnter Marks for Economics\n");
scanf(" %d", &economics);
printf("\nEnter Marks for Commerce\n");
scanf(" %d", &commerce);
printf("\nEnter Marks for Civics\n");
scanf(" %d", &civics);

avg = (english + telugu + economics + commerce + civics) + 0;

printf("\n1 yer Total Marks: %d\n", avg);

//2nd Year


int English, Telugu, Economics, Commerce, Civics, Avg;


printf("\nEnter 2nd Year Marks\n");

printf("\nEnter Marks for English\n");
scanf(" %d", &English);
printf("\nEnter Marks for Telugu\n");
scanf(" %d", &Telugu);
printf("\nEnter Marks for Economics\n");
scanf(" %d", &Economics);
printf("\nEnter Marks for Commerce\n");
scanf(" %d", &Commerce);
printf("\nEnter Marks for Civics\n");
scanf(" %d", &Civics);

Avg = (English + Telugu + Economics + Commerce + Civics) + 0;

printf("\n2nd year Total Marks: %d\n", Avg);

c = avg + Avg;


printf("\n1st + 2nd Year All Total Marks: %d\n", c);

b = c / a;

printf("\nPercent sign: %.2f\n", b);

if(b >= 75){
	printf("\nGrade: A \n");
}else if(b >= 60){
	printf("\nGrade: B \n");
}else if(b >= 50){
	printf("\nGrade: C \n");
}else if(b >= 35){
	printf("\nGrade: D \n");
}else{
	printf("\nYou Need to Hard Work Dud!\n");
}


if (english >= 35){
	if (telugu >= 35){
		if (economics >= 35){
			if (commerce >= 35){
				if (civics >= 35){
					printf("\nResult: ALL PASS\n");
				}else{
					printf("\nCivics : FAIL\n");
				}
			}else{
				printf("\nCommerce : FAIL\n");
			}
		}else{
			printf("\nEconomics : FAIL\n");
		}
	}else{
		printf("\nTelugu : FAIL\n");
	}
}else{
	printf("\nEnglish : FAIL\n");
}









}else{
	printf("\nYour Not Eligibul!\n");
	printf("\nPlease Enter Roll No\n");
}

     break;

    case 3:
printf("\nHello\n");

// 10th Mark Results

// Head of Institution

// �???????�? Sunnam Sriram Contacts +918688655324





int age;

printf("\nEnter Your Age!\n");
scanf("%d", &age);

if (age >= 16){
	printf("\nWELCOME TO WORLD\n");

int year;

printf("\nEnter SSC Examination Year\n");
scanf("%d", &year);

printf("\nYou are SSC Examination held in MARCH %d in\n", year);

int Telugu, Hindi, English, Maths, Science, Social, Avg;
//float a, b = 6, c;

float c, a = 6;



printf("\nEnter Marks for Telugu \n");
scanf(" %d", &Telugu);
printf("\nEnter Marks for Hindi \n");
scanf(" %d", &Hindi);
printf("\nEnter Marks for English \n");
scanf(" %d", &English);
printf("\nEnter Marks for Maths \n");
scanf(" %d", &Maths);
printf("\nEnter Marks for Science \n");
scanf(" %d", &Science);
printf("\nEnter Marks for Social \n");
scanf(" %d", &Social);
Avg = (Telugu + Hindi + English + Maths + Science + Social) + 0;
printf("\nYour SSC TOTAL MARKS: %d \n", Avg);

c = Avg / a;

printf("\nPercent sign %.2f \n", c);



/*

printf("\nEnter Marks\n");
scanf(" %f", &a);
printf("\nPlease Enter 6\n");
scanf(" %f", &b);

c = a / b;

printf("\nPercent sign %.2f\n", c); */ 

if(c >= 90){
	printf("\nGrade: A \n");
}else if(c >= 80){
	printf("\nGrade: B \n");
}else if(c >= 70){
	printf("\nGrade: C \n");
}else if(c >= 60){
	printf("\nGrade: D \n");
}else if(c >= 50){
	printf("\nGrade: E \n");
}else{
	printf("\nYou Need to Hard Work Dud! \n");
}


if (Telugu >= 35){
	if (Hindi >= 15){
		if (English >= 35){
			if (Maths >= 35){
				if (Science >= 35){
					if (Social >= 35){
						printf("\nResult:ALL PASS \n");
					
					}else{
						printf("\nSocial: FAIL\n");
					}
				}else{
					printf("\nScience: FAIL\n");
				}
			}else{
				printf("\nMaths: FAIL\n");
			}
		}else{
           printf("\nEnglish: FAIL\n");
		}
	}else{
		printf("\nHindi: FAIL\n");
	}
}else{
	printf("\nTelugu: FAIL\n");
}

/*



float telugu, hindi, english, maths, science, social, avg;

int year;

printf("\nEnter SSC Examination Year\n");
scanf("%d", &year);

printf("\nYou are SSC Examination held in MARCH %d in\n", year);


printf("\nEnter Marks for Telugu \n");
scanf("%f", &telugu);
printf("\nEnter Marks for Hindi \n");
scanf("%f", &hindi);
printf("\nEnter Marks for English \n");
scanf("%f", &english);
printf("\nEnter Marks for Maths \n");
scanf("%f", &maths);
printf("\nEnter Marks for Science \n");
scanf("%f", &science);
printf("\nEnter Marks for Social\n");
scanf("%f", &social);

avg = (telugu + hindi + english + maths + science + social) / 6;
printf("\nYou are Results\n");
printf("\nPercent sign: %.2f \n", avg);


if(avg >= 90){
	printf("\nGrade: A \n");
}else if(avg >= 80){
    printf("\nGrade: B \n");
}else if(avg >= 70){
	printf("\nGrade: C \n");
}else if(avg >= 60){
	printf("\nGrade: D \n");
}else{
	printf("\nYou Hard Work Dud!\n");
}
/*

if((telugu >= 35) && (hindi >= 35) && (english >= 35) && (maths >= 35) && (science >= 35) && (social >= 35)){
	printf("\nResult: PASS \n");
}else{
	printf("\nResult: FAIL\n");
}  */

/*

if(telugu >= 35){
	if(hindi >= 15){
		if(english >= 35){
			if(maths >= 35){
				if(science >= 35){
					if(social >= 35){
						printf("\nResult: PASS \n");
					}else{
						printf("\nSocial Result: FAIL \n");
					}
				}else{
					printf("\nScience Result: FAIL \n");
				}
			}else{
				printf("\nMaths Result: FAIL \n");
			}
		}else{
			printf("\nEnglish Result: FAIL \n");
		}
	}else{
		printf("\nHindi Result: FAIL \n");
	}
}else{
	printf("\nTelugu Result: FAIL\n");
}

*/

}else{
	printf("\nYour Not Eligibul!\n");
}


    break;
    
    case 4:

printf("\nHiiiiii\n");
/*
int tmarks = 0;
float marksEntered = 0;
float totalSubejects = 0;
float avg = 0;

printf("\nEnter 0 to end \n");

do{
printf("\ntotalSubejects: %.0f \t Total marks: %d \t Averge: %.2f\n", totalSubejects,tmarks,avg);
printf("\nEnterMarks: ");
scanf(" %f", &marksEntered);
totalSubejects++;
tmarks += marksEntered;
avg = tmarks / totalSubejects;

}while (marksEntered != 0); */
    break; 
  
  case 5:
/*  
  printf("\nWelcome Your World\n");
  
    int a,b, choice;

printf("     \n  *******Welcome*********\n");
printf("\n Cａｌｃｕｌａｔｏｒ       \n");
printf("\n1.Addition[ కూడికలు ]\n2.Subtraction[  తీసివేత ]\n3.Multiolication[  గుణకారం ]\n4.Division[  విభజన&భాగహారం ]\n");
printf("\nపైవాటిలో నువ్వేమి చేద్దామనుకుంటున్నావు?\n");
scanf(" %d", &choice);
printf("\nNumber1 : ");
scanf(" %d", &a);
printf("\nNumber2 : ");
scanf(" %d", &b);

switch (choice)
{
      case 1:
    printf("\nResult = %d + %d = %d\n", a,b, a+b);
    break;
      case 2:
    printf("\nResult = %d - %d = %d\n", a, b, a-b);
    break;
    case 3:
    printf("\nResult =  %d * %d = %d\n", a , b, a*b);
    break;
    case 4:
    printf("\nResult = %d / %d = %d\n", a, b, a/b);
    break; 
  
  } */
  
  break;
  
  
  }

  
    
      

          
                    
}else{
	printf("\nYour Not Eligebl....!\n");
	}                            
                                                  
                                                            
                                                                      
                                                                                
                                                                                          
                                                                                                    
                                                                                                              
                                                                                                                        
                                                                                                                                  
                                                                                                                                                      

   
}
