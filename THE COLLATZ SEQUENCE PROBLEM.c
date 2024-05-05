//EXPLANATION:
//  THERE IS BEEN MADE TWO USER DEFINED FUNCTIONS ONE TO FIND THE LENGHT FOR COLLATZ SEQUENCE OF A STARTING NUMBER AND OTHER TO FIND MAXIMUM LENGHT FOR THE STARTING NUMBERS

// IN FIRST FUNCTION VALUE FROM LOOPS IS PASSED FROM THE OTHER USER DEFINED FUNCTION TO CHECK ALL THE NUMBER AS A STARTING NUMBER LESS THAN THE LIMIT

// THEN THE LIMIT IS PASSED AS ARGUMENT FROM MAIN PLUS  TWO VARIABLES ARE PASSED BY REFRENCES BY SENDING THEIR ADRESSES AS AN ARGUMENT WHICH IS  RECIEVED BY THE parameters that is pointers in max_lenght_collatz function.

//THESE FUNCTION CALCULATE THE MAX LENGHT PLUS THE STARTING NUMBER FOR WHICH LENGHT IS MAX.


#include<stdio.h>
int collatz_sequence_lenght(int number)//recieving the argument from max_lenght_collatz function
{
// Funtion to find lenght of starting numbers less than the limit

                 int i=0;//initializing i to zero to itertate loop
           
           int lenght_finder=1;// This variable will count the lenght of collatz sequence from any starting number

    while(number!=1)//It will run till number becomes one as in collatz sequence number always becomes 1
 {
    if(number%2==0)//check for even numbers
 {
 
         number=number/2;// condition for collataz sequence if starting number is even
 }
 
 else if(number%2!=0)// check for odd numbers
 {
 
 number=(number*3)+1;//condition for collataz sequence if starting number is odd
 }
 ++lenght_finder;// calculate or count the lenght of collatz sequence

 }
  
            return lenght_finder;// returning the lenght counted
 }
 
 //Funtion to find maximum lenght from starting number less than limit
 
 int max_lenght_collatz(int n,int*starting_number,int*max_lenght)
 {
 //*starting checks for the starting number with largest collatz sequence
 //*max_lenght for the maximum lenght
 int lenght=0; // it will take lenght from funtion
 
  *max_lenght=0;//it will compare with lenght to find starting number that make largest collatz sequence
  
           int j=2;// to start the loop from 2 as number always becomes 1
           
           while(j<n)// means the starting number should be less than limit otherwise loop will terminate
 {
       
       lenght=collatz_sequence_lenght(j);// calling the function 
       
  if(*max_lenght<lenght)// comparing the lenghts
 {
 *max_lenght=lenght;
       *starting_number=j;// TEll us about the starting number with largest collatz sequence
 }
 j++;// for iteration
 }
 
 
 }
 int main()
 {
 int starting_number,lenght;
 int n;// taking the limit from the user
 printf("enter the number \n");
 scanf("%d",&n);
 max_lenght_collatz(n,&starting_number,&lenght);// passing the argument to the function
 printf("THE LARGEST COLLATZ SQUENCE IS %d WITH A STARTING NUMBER %d \n",lenght,starting_number);// print the starting number with largest collatz sequence
 
 return 0;
 }
