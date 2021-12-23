
//=============================== EASY INPUT VERIFICATION ==============================
/*
   this program aims to make an easy input sanitization function for each data type in c
   i am sure that a better version of this may exist out there but this is my go at it.
   feel free to make any edits, i am noob.  
*/
//======================================================================================


//---------------------------------- TO DO --------------------------------
//DONE: add int function
//TODO: add float function
//TODO: add double function
//TODO: add char function
//TODO: add some sort of boolean function?

//TODO: find a way to make the invalid input prompt to appear only once when there's a space


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//------------------------- FUNCTION INITIALIZATION -----------------------
int inputVerInt(char prompt[100]);
double inputVerDouble(char prompt[100]);

//----------------------------------- MAIN --------------------------------
int main()
{
	//testing the function

	/* int
	int test = inputVerInt("Please type an integer value:\n");
	printf("the verified input is: %d\n", test);
	*/

	/* double*/
	double test1 = inputVerDouble("Please type a double value: \n");
	printf("the verified input is: %lf\n", test1);

	return 0;
}


//--------------------------------- FUNCTIONS -----------------------------

//INT VERIFICATION
int inputVerInt(char prompt[100])
{
	
	int exit = 0; //loop controller
	char scan[100]; //dirty input
	int scanFinal; //cleaned input
	int ver = 1; //verification variable
	
	//main loop
	do
	{
		printf("%s", prompt);//prompt print
		fgets(scan, 100, stdin); //dirty user input
		
		//sanitization
		if(atoi(scan) != 0 || strcmp(scan, "0\n") == 0 || strcmp(scan, "0.0\n") == 0) //user input accepted(is an int)
		{
			scanFinal = atoi(scan); //transforms the string into an int
			exit = 1; //ends loop
			
		}else //user input rejected
		{
			printf("Invalid input! Please try again!\n");
		}
		
	}while(exit != 1); 
	
	return scanFinal; //returns the verified input
}

//DOUBLE VERIFICATION
double inputVerDouble(char prompt[100])
{
        
        int exit = 0; //loop controller
        char scan[100]; //dirty input
        double scanFinal; //cleaned input
        int ver = 1; //verification variable
        
        //main loop
        do
        {
        printf("%s", prompt);//prompt print
        fgets(scan, 100, stdin); //dirty user input

        //sanitization
        if(atof(scan) != 0) //user input accepted(is an int)
		{
			scanFinal = atof(scan); //transforms the string into an int
			exit = 1; //ends loop
                 
        }else if(strcmp(scan, "0\n") == 0 || strcmp(scan, "0.000000\n") == 0 || strcmp(scan, "0.0\n") == 0)
        {
            scanFinal = atof(scan); //transforms the string into an int
			exit = 1; //ends loop

        }else //user input rejected
        {
            printf("Invalid input! Please try again!\n");
        }
                
        }while(exit != 1); 
        
        return scanFinal; //returns the verified input
}