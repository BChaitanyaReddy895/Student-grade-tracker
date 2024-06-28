#include <stdio.h>
int main() 	
{
	printf("Hello! welcome to Student Grade Tracker designed by B Chaitanya Reddy\n");
	int n,i,j;
	char student_name[n][50];  
    int marks[n][5];  
    int total[n];
	printf("Enter number of students in your class: ");
    scanf("%d",&n);

    if (n<=0) 
	{
    	printf("Please enter a positive number for the number of students!\n");
        return 1;
    }

    	  

    for (i=0;i<n;i++) 
	{
    	total[i]=0;
     	printf("Enter name of student %d:",i + 1);
        scanf("%s", student_name[i]);
        printf("Enter marks in 5 different subjects, each out of 100:\n");
        for (j=0;j<5;j++)
		{
            scanf("%d",&marks[i][j]);
            if(marks[i][j]>100||marks[i][j]<0)
            {
            	printf("enter the marks of a student in range of(0,100)\n");
            	return 1;
			}
            total[i]+=marks[i][j];
        }
    }	
    for (i=0;i<n;i++)
	{
        printf("\nName of the student: %s\n", student_name[i]);
        printf("Total marks out of 500: %d\n", total[i]);
        if ((total[i] > 400) && (total[i] <= 500))
            printf("Grade: A+, Performance: Outstanding\n");
        else if ((total[i] > 300) && (total[i] <= 400))
            printf("Grade: A, Performance: Excellent\n");
        else if ((total[i] > 200) && (total[i] <= 300))
            printf("Grade: B, Performance: Very Good\n");
        else if ((total[i] > 175) && (total[i] <= 200))
            printf("Grade: C, Performance: Satisfactory\n");
        else
            printf("Grade: F, Performance: Fail\n");
    }	
	return 0;
}

	



