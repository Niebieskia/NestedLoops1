// Start from scratch
//use nested loops to develop programs to draw out a 2D grid to the screen
#include <iostream>
using namespace std;

int main() {
  //get two integers, m rows, and n columns.
  int row, col; 
  //m rows n columns
  //| -- | -- | 
  //|    |    |
  //| -- | -- |
  cin >> row; //input for row
  cin >> col; // input for column
if (row == 0 || col == 0) {
  return 0;
}
  for (int m=0; m < row; m++) {
    // print a dashed line // endl
    // print an undashed line // endl
    for (int n=0; n < col; n++) {
      cout << "|--";
    }
    cout << "|" << endl;
    for (int n=0; n < col; n++) {
      cout << "|  ";
    }
    cout << "|" << endl;
  }
  // print a extra dashed line
  for (int n=0; n < col; n++) {
    cout << "|--";
  }
  cout << "|" << endl;




  return 0;
}