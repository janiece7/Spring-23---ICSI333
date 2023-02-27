/*
ICSI 333. System Fundamentals
Spring 2023
Kazi Atai kibria
Janiece Mary Padilla 
001342714
*/





#include <stdio.h>
int main()
{

    signed long int inputInteger;
//Task 1
// Converting real numbers into binary representation 
// The whole and fractional parts need different algorithms

// Ask for user Input
printf("Input a real number:");
scanf("%ld", &inputInteger);

/*function declaration*/

void wholenumBin(float inputInteger){

    if (inputInteger > 0 ){
            /*local variable declaration*/
            if(inputInteger % 1 > 0){
                /* Number is a a decimal*/
                printf("%f is a decimal",inputInteger);
            }else{

                /*Number is a whole number */
                 printf("%f is a whole number",inputInteger);
            }
    } // End of first if else statement 

} // End of functiom





// Part 1 converting real number to binary ex

// If number is a whole number then
//convert the base to decimal 

 return 0;
}
