#include <iostream>
#include <iomanip>

using namespace std;

//functions
void printMatrix(int matrix[][7], int N_ROWS, int N_COLUMNS);

void fillMatrix(int matrix[][7], int n_rows, int n_collums);

int main() {

  int students = 0;
  int collums = 5;

  cout << "How many students are there? " << endl;
  cin >> students;
  
  int grades[][7]{};
  
  fillMatrix(grades, students, collums);
  printMatrix(grades, students, collums);
  
  
  return 0;
  }


/* This funcion fills the matrix*/

void fillMatrix(int matrix[][7], int n_rows, int n_collums)
{
  int row, col, grade, ave, weighted_ave;
  int student_num = 1;

  for (row = 0; row < n_rows; row++){
          for(col = 0; col < 1; col++){
            matrix[row][col] = student_num;
            student_num++;
         }
              
       }
  
    for (row = 0; row < n_rows; row++){
      cout << "Please input the grades for student " << row +1 << ": " << endl;
        for(col = 1; col < 5; col++){
          cin >> grade;
           matrix[row][col] = grade;
          }
       }

    for (row = 0; row < n_rows; row++){
        for(col = 5; col == 5; col++){
          /// calculate average and then output itave = 
          matrix[row][col] = grade;
        }
            
       }
}



// function to print the matrix in a matrix with 3 columns
void printMatrix(int matrix[][7], int N_ROWS, int N_COLUMNS)
{
    int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }
}
