/* 
    Steps
    Step 1: Understand the problem statement
    Step 2: Write the algorithm
    Step 3: Decide the Programming language
    Step 4: Write the program
    Step 5: Test the Program
*/

/*Accept N numbers from user and
Perform the Addition operation*/
// Input
//Value of N = 5
// Values : 10,20,30,40,50

//output
//Addition is : 150

//Algorithm
/*
START
    Accept the number of elements from user
    Allocate the memory to store that numbers
    Accept the numbers from user
    Perform addition of all numbers
    Display the addition
END
*/
#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  // for malloc and free

/////////////////////////////////////////
//
//  Application Name : Addition of N numbers
//  Input : N numbers
//  Output: Addition
//  Author: Dipak Kailas Shinde
//  Date: 18 September 2022
//
//////////////////////////////////////////

int main()
{
    int *Arr = NULL;    // Pointer to hold the Address of array
    int iSize = 0;      // Variable to hold size of array
    register int i = 0; // Loop Counter
    int iSum = 0;       // To hold the addition
    printf("Please enter how many elements you want?\n");
    scanf("%d",&iSize);
    
    //Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Memory Allocation is successfull\n");
    printf("Please enter the elements\n");
//        1       2        3
    for(i = 0; i < iSize; i++)
   {
    scanf("%d",&Arr[i]);   //4
   }
   
   // Perform Addition
   //     1        2       3
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i]; //4
    }
    printf("Addition is : %d\n",iSum);

    free(Arr);
    printf("Deallocate the memory\n");
    return 0;
}
