//Explanation:
//THE APPROACH TO SOLVE THIS PROBLEM IS SIMPLE I HAVE TAKEN FOUR ARRAYS STORE THE 4 ADJACENT ELEMENTS PRODUCT OF ROWS,COL,AND DIAGONALS WITH THE LOGIC MENTIONED ABOVE AND AT LAST I FIND THE MAX VALUES FROM ALL THE FOUR ARRAYS AND THEN FIND THE ONE MAXIMUM VALUES FROM THOSE 4 ARRAYS MAXIMIM VALUES


#include<stdio.h>

int main()
{
// initializing the 2d array given
	int main_grid[20][20] = {
    {8, 2, 22, 97, 38, 15, 0, 40, 0, 75, 4, 5, 7, 78, 52, 12, 50, 77, 91, 8},
    {49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 4, 56, 62, 0},
    {81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 3, 49, 13, 36, 65},
    {52, 70, 95, 23, 4, 60, 11, 42, 69, 24, 68, 56, 1, 32, 56, 71, 37, 2, 36, 91},
    {22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
    {24, 47, 32, 60, 99, 3, 45, 2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
    {32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
    {67, 26, 20, 68, 2, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21},
    {24, 55, 58, 5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
    {21, 36, 23, 9, 75, 0, 76, 44, 20, 45, 35, 14, 0, 61, 33, 97, 34, 31, 33, 95},
    {78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 3, 80, 4, 62, 16, 14, 9, 53, 56, 92},
    {16, 39, 5, 42, 96, 35, 31, 47, 55, 58, 88, 24, 0, 17, 54, 24, 36, 29, 85, 57},
    {86, 56, 0, 48, 35, 71, 89, 7, 5, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
    {19, 80, 81, 68, 5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 4, 89, 55, 40},
    {4, 52, 8, 83, 97, 35, 99, 16, 7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
    {88, 36, 68, 87, 57, 62, 20, 72, 3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
    {4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36},
    {20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 4, 36, 16},
    {20, 73, 35, 29, 78, 31, 90, 1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 5, 54},
    {1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 1, 89, 19, 67, 48}
};

	
 int  arr1[380];//array to store adjacent elements in row
int arr2[380];//array to store adjacent element in column
int arr3[25];//array to store adjacent element in diagonal 1(left to right)
int arr4[25];//array to store adjacent element in diagonal 2(right to left)
	
	
int k=-1; //initialized to -1 it will be used for storing values in these indices in one d array
 int f=-1;//initialized to -1 it will be used for storing values in these indices in one d array
 int h=-1;//initialized to -1 it will be used for storing values in these indices in one d array
int j=-1;//initialized to -1 it will be used for storing values in these indices in one d array
	  
	  
	   int max1=0;//initialized to zero for comparing with array 1 to find maximum
	   
	  int max2=0;//initialized to zero for comparing with array 2 to find maximum
	  
	 int max3=0;//initialized to zero for comparing with array 3 to find maximum
	 
	     int max4=0;//initialized to zero for comparing with array 4 to find maximum

	 //FOR ROWS
	
    for(int i=0;i<20;i++)
	{
		for(int j=0;j<17;j++)
		{
		
			++k;//preincrement because -1 becomes 0 and onwards 

                    arr1[k]=main_grid[i][j]*main_grid[i][j+1]*main_grid[i][j+2]*main_grid[i][j+3];//logic for finding adjacent number in rows
		
		if(max1<arr1[k])// It will find max in array 1 which store adjacent elements of rows
		{
		max1=arr1[k];
		}
	
	}
}

			
	//for columns		

for(int l=0;l<20;l++)
	{
	    
for(int m=0;m<17;m++)
		{
			++f;//preincrement because -1 becomes 0 and onwards 
			
                 arr2[f]=main_grid[m][l]*main_grid[m+1][l]*main_grid[m+2][l]*main_grid[m+3][l];// This logic finds product of 4 adjacent elements in column


	if(max2<arr2[f])// it calculates maximum for array 2 representing array 2
	{
max2=arr2[f];
	}

	}
}

	// FOR DIAGONAL 1(LEFT TO RIGHT)



	arr3[0]=1;//intializing 0 index to 1 so that we avoid any error 
for(int c=0;c<20;c++)
	{
	    for(int d=0;d<17;d++)
		{
		if(d==c)// AS IN DIAGONAL 1 ROW AND COL NUMBER IS SAME
		{
			++h;//preincrement because -1 becomes 0 and onwards 
			
	arr3[h]=main_grid[c][d]*main_grid[c+1][d+1]*main_grid[c+2][d+2]*main_grid[c+3][d+3];
			
			if(max3<arr3[h])// check max for diagonal 1
			{
			max3=arr3[h];
			}
			
}
}
}


                   
                   arr4[0]=1;//intializing 0 index to 1 so that we avoid any error 
                   
 for(int a=19;a>=0;a--)//starting from 19 as we fo from right to left now
{
		
	for(int b=0;b<17;b++)
	{
		
	++j;//preincrement because -1 becomes 0 and onwards 
		
		if(b==19-a)// this logic checks the possibility of diagonal value
		{
			
     arr4[j]=main_grid[a][b]*main_grid[a-1][b+1]*main_grid[a-2][b+2]*main_grid[a-3][b+3];// it checks for adjacent multiple in diagonal 2(right to left)
			if(max4<arr4[j])// finding the maximum for array 4
			{
			max4=arr4[j];
}
			
}
}

}
                      //CHECKS FOR THE MAXIMUM ADJACENT ELEMENT PRODUCT AND DIRECTION

if(max1>max2&&max1>max3&&max1>max4)
 {
 printf("WE HAVE A HORIZONTAL MAXIMUM PROdUCT %d \n ",max1);
 }
 else if(max2>max1&&max2>max3&&max2>max4)
 {
 printf("WE HAVE A  MAXIMUM PRODUCT  %d which direction is vertical \n",max2);
}
else if(max3>max1&&max3>max2&&max3>max4)
 {
 printf("WE HAVE A left to Right diagonal OR DIAGONAL 1 MAXIMUM PRODUCT \n %d",max3);
}
else
{
printf("WE HAVE A Right to left diagonal or 2 Diagonal MAXIMUM PRODUCT \n %d",max4);
}
return 0;

}
