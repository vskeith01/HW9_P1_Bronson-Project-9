#include <iostream>
#include <iomanip>

using namespace std;

////////////////////////functions////////////
void printMatrix(int matrix[][5], int N_ROWS, int N_COLUMNS);
void fillMatrix5(int matrix[][5], int n_rows);
void copyArray(int list1[], int list2[], int src, int tar, int numOfElements);
void calcGrades(const int scores[][5],int n_rows);
void fillMatrix7(int matrix[][7], int n_rows);


int main() {

  int students = 0;
  int collums = 5;

  cout << "How many students are there? " << endl;
  cin >> students;
  
  int scores[][5]{};    // matrix with the scores each student got on each test
  
  fillMatrix(scores, students);
  printMatrix(scores, students, collums);

  int grades[][7]{}; // matrix with the scores and subsequent grades
  
  
  return 0;
  }



/* This funcion fills the matrix*/

void fillMatrix(int matrix[][5], int n_rows)
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
          }  // relpace with if else statemtn?
       }
return;
}

/* This function adds the calculated grades to the students score matrix*/

void calcGrades(const int scores[][5],int n_rows){

int collum = 0;
int grades[][7]{};
  
  if (collum < 5){
    for (int col = 0; col < 5; col++){
      for (int row = 0; row < n_rows; row++){
        grades[row][col] = scores[row][col];
      }
      collum++;
    }
  }
  
  
}



// function to print the matrix in a matrix with 3 columns
void printMatrix5(int matrix[][5], int N_ROWS, int N_COLUMNS)
{
    int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }

  return;
}


void printMatrix7(int matrix[][7], int N_ROWS, int N_COLUMNS)
{
    int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }

  return;
}
