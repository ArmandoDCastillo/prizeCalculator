// 1. Read in student names from text file into the studentName string within
//    the studentWorker struct.
// 2. Create loop to assign calls taken, email tickets taken, etc.

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// Create student structure here.
struct studentWorker
{
  string studentName;
  int MCScallsTaken;
  int emailsResolved;
  int NOCcallsTaken;
  int attendance;
  int bomgar;
  int totalEntries;
};

int main()
{
  int numberofStudents;

  cout << "How many student workers are there?" << endl;
  cin >> numberofStudents;
  cout << endl;
  cout << "There are " << numberofStudents << " student workers. " << endl;

  studentWorker students[numberofStudents];

// Read in text file into structure name.
ifstream fin;
fin.open ("studentWorkers.txt");

for (int i = 0; i < numberofStudents; i++)
{
  getline(fin, students[i].studentName);
  cout << students[i].studentName << endl;
}

// Loop to fill contents of each studentWorker array.

for (int s = 0; s < numberofStudents; s++)
{
  cout << "Data for " << students[s].studentName << "." << endl;

  for (int x = 0; x < 1; x++)
  {

    cout << "How many MCS calls did " << students[s].studentName << " take?"
         << endl;
    cin >> students[s].MCScallsTaken;
    cout << endl;

    cout << "How many emails did " << students[s].studentName << " resolve?" <<
    endl;
    cin >> students[s].emailsResolved;
    cout << endl;

    cout << "How many NOC calls did " << students[s].studentName << " take?"
         << endl;
    cin >> students[s].NOCcallsTaken;
    cout << endl;

  }
}







cout << "hello" << endl;




}
