/*
Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the
college.
(a) Write a function to print names of all students who joined
in a particular year.
(b) Write a function to print the data of a student whose roll
number is received by the function.
*/

# include <stdio.h>
struct stud
{
int r_n ;
char name[ 20 ] ;
char dep[ 15 ] ;
char course[ 10 ] ;
int y_o_j ;
} ;
struct stud s[ 450 ] ; 
void set_student_data( ) ;
void display( ) ;
void name_acc_year ( int ) ;
int data_acc_rollno ( int ) ;
int main( )
{
int i, r ;
int y ;
printf ( "\nEnter the data for each Student:\n\n " ) ;
/* Initialize the values for the students structure */
set_student_data( ) ;
/* Display all the elements of the student structure */
display( ) ;
/* Search data on year of Joining */
printf ( "\nEnter the Year of Joining of the Student " ) ;
scanf ( "%d", &y ) ;
name_acc_year ( y ) ; /* year of joining passed to function */
/* Search data based on roll number */
printf ( "\nEnter the Roll Number of the Student" ) ;
scanf ( "%d", &r ) ;
data_acc_rollno ( r ) ; /* roll number passed to function */
return 0 ;
}
void set_student_data( ) /* Enter student data */
{
int i ;
for ( i = 0 ; i < 450 ; i++ )
{
fflush ( stdin ) ; /* Flush the input buffer */
printf ( "\nEnter the Roll NUmber of the student\n" ) ;
scanf ( "%d", &s[ i ].r_n ) ;
fflush ( stdin ) ;
printf ( "Enter the name of the student\n" ) ;
scanf ( "%s", s[ i ].name ) ;
fflush ( stdin ) ;
printf ( "Enter the name of the Department\n" ) ;
scanf ( "%s", s[ i ].dep ) ;
fflush ( stdin ) ;
printf ( "Enter the name of the Course\n" ) ;
scanf ( "%s", s[ i ].course ) ;
fflush ( stdin ) ;
printf ( "Enter the Year of Joining of the student\n" ) ;
scanf ( "%d", &s[ i ].y_o_j ) ;
}
}
/* function to display data */
void display( )
{
int i ;
for ( i = 0 ; i < 450 ; i++ )
{
printf ( "\n\tRoll Number of student %d = %d \n", i+1 ,
s[ i ].r_n ) ;
printf ( "\n\tName of student %d = %s \n", i+1, s[ i ].name ) ;
printf ( "\n\tName of the Department = %s \n", s[ i ].dep ) ;
printf ( "\n\tName of the Course = %s \n", s[ i ].course ) ;
printf ( "\n\tYear of Joining of student %d = %d \n\n", i+1 ,
s[ i ].y_o_j ) ;
}
}
/* function to get name based on year of joining */
void name_acc_year ( int y )
{
int i, j = 0 ;
for ( i = 0 ; i < 450 ; i++ )
{
if ( y == s[ i ].y_o_j )
{
printf ( "%s joined in the year %d\n", s[ i ].name,
s[ i ].y_o_j ) ;
j = 1 ;
}
}
if ( j == 0 )
printf ( "\nNo student joined in the year %d", y ) ;
}
/* function to get student data based on roll number */
int data_acc_rollno ( int r )
{
int i, j = 0 ;
for ( i = 0 ; i < 450 ; i++ )
{
if ( s[ i ].r_n == r )
{
printf ( "\n\tRoll Number of student = %d \n", s[ i ].r_n ) ;
printf ( "\n\tName of student = %s \n", s[ i ].name ) ;
printf ( "\n\tName of the Department = %s \n", s[ i ].dep ) ;
printf ( "\n\tName of the Course = %s \n", s[ i ].course ) ;
printf ( "\n\tYear of Joining of student = %d \n\n",
s[ i ].y_o_j ) ;
j = 1 ;
}
}
if ( j == 0 )
printf ( "\nNo such Roll Number present." ) ;
}
