		#include <stdio.h>
 		#include <conio.h>
 		void main()
 		{
 			int a[2][3],b[2][3],c[2][3],i,j; //declaration of the 2*3 matrix, matrix a which will be added to matrix b to give matrix c.
 			
 			printf("\nENTER VALUES FOR MATRIX A:\n"); //a user is promted to enter 6 values of the 2*3 matrix a.
 			for(i=0;i<2;i++) //for loop to read the values of the first row of the matrix a.
 				for(j=0;j<3;j++) //for loop to read the values of the second row of the matrix a.
 					scanf("%d",&a[i][j]);//reading the matrix a.
      
 			printf("\nENTER VALUES FOR MATRIX B:\n"); //promting the user to enter 6 values of the 2*3 matrix b.
 			for(i=0;i<2;i++) //for loop to read the values of the first row of the matrix b.
 				for(j=0;j<3;j++) //for loop to read the values of the second row of the matrix b.
 					scanf("%d",&b[i][j]); //reading the matrix b.
      
 			for(i=0;i<2;i++) //for loop to read values of the first row of the matrix c.
 				for(j=0;j<3;j++) //for loop to read values of the second row of the matrix c.
 					c[i][j]=a[i][j]+b[i][j]; //declaring that matrix c is the addition of matrix a and matrix b.
      
 			printf("\nTHE VALUES OF MATRIX C ARE:\n"); //printing the value of matrix c (matrix a + matrix b).
      
 			for(i=0;i<2;i++) //reading and printing values of the first row of the matrix c.
 		        {
 				for(j=0;j<3;j++) //reading and printing values of the second row of the matrix c.
          
 					printf("%5d",c[i][j]); //printing the values of the matrix c.
 				printf("\n");
 			}
 			getch();
 		}
