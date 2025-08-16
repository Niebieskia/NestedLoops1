//simulate allocating a shared resource to many requestors based on a priority scheme.
#include <iostream>
using namespace std;

// Quit when all requests in a given round are false.
int main()
{
    bool requests[100]; // requests
    int priority[100];  // priority
    int n;
    cout << "Enter the number of requestors (1-100): " << endl;
    cin >> n;

    // Add the remainder of your code below.  

    // Consider any initialization of the priority array before you enter your
    // primary loop.

    //initialize priority
    cout << "priority: ";
    for (int i=0; i < n; i++) {
        priority[i] = i;
    }
    cout << endl;

    while (true) {
      cout << "priority: ";

      for (int i=0; i<n; i++)
        cout << priority[i] << ' ';
      cout << endl;
      
      int count = 0; 

      for (int i=0; i < n; i++) {
        cin >> requests[i];
        
        if (requests[i] == false) {
          count++;
        }
      }
      
      if (count == n) {
        break;
      }
      
      for(int i=0; i < n; i++) { //goes through pri and find user that wants resource
        if (requests[priority[i]] == true) { //if priority = true
          cout << "Person " << priority[i] << " selected." << endl;//select user

          int temp = priority[i]; //store person

          for (int j=i; j < n-1; j++) {
            priority[j] = priority[j+1]; //update priority shift down one left
          }
          priority[n-1] = temp;

          cout << priority[i];
          break;
        }
      }

    }



    return 0;
}
