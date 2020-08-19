#include <iostream>
#include <iomanip> // This is for set percision
#include <algorithm>

using namespace std;

// HELPERS
// The below returns odd or even depending on the number provided.
int checkIfNumberIsOddOrEven (int number) {
  if (number % 2) {
    cout << "odd" << endl;
  } else {
    cout << "even" << endl;
  }
  return 0;
};

// The below converts number into english rep.
int convertNumberToEnglishRepresentation (int number) {
  switch (number) {
    case 0:
      cout << "zero" << endl;
      break;
    case 1:
      cout << "one" << endl;
      break;
    case 2: 
      cout << "two" << endl;
      break;
    case 3: 
      cout << "three" << endl;
      break;
    case 4: 
      cout << "four" << endl;
      break;
    case 5: 
      cout << "five" << endl;
      break;
    default:
      break;
  }
  return 0;
};


// ANSWERS TO QUESTIONS:
int questionOne () {
  // Declares variables
  char grade;
  int maxScore = 50;
  double userScore, percentage;

  // Asks user to enter their score
  cout << "Please enter the score: ";
  cin >> userScore;

  // If userScore is greater or equal to 0 OR less than or equal to 50 run the below. IF not skip. 
  if (userScore >= 0 && userScore <= 50) {
    percentage = (userScore / maxScore) * 100;
  };

  // Calculates the grade based off percentage if score is greater than maxScore then skip and handle the display. 
  if (percentage >= 0 && percentage <= 59.99) {
    grade = 'F';
  } else if (percentage >= 60 && percentage <= 69.99) {
    grade = 'D';
  } else if (percentage >= 70 && percentage <= 79.99) {
    grade = 'C';
  } else if (percentage >= 80 && percentage <= 89.99) {
    grade = 'B';
  } else if (percentage >= 90 && percentage >= 100) {
    grade = 'A';
  } else {
    cout << "Error please reenter your score" << endl;
  };

  // Displays the correct text based off the percentage. If user is above 50 then it displays without the percentage and grade. 
  userScore > 50 ? cout << "Score is greater than " << maxScore << endl : cout << "You have passed with " << percentage << "%, and received a grade " << grade << endl;

  return 0;
};

#define LITER_OF_PETROL 0.264179
int questionTwo () {
  // Declare vars
  double petrolConsumed, milesPerGallon, milesTravelled;

  // Ask user to enter petrol consumed
  cout << "Please enter the number of litres of petrol consumed: ";
  cin >> petrolConsumed;

  // Ask users to enter miles travelled
  cout << "Please enter the number of miles travelled: ";
  cin >> milesTravelled;

  // Handles if user enters incorrect data.
  if (petrolConsumed < 0 || milesTravelled < 0) {
    cout << "Please enter a positive number!" << endl;
    exit(3);
  };

  // Assign var to the calculation
  milesPerGallon = milesTravelled / petrolConsumed / LITER_OF_PETROL;

  // Output data 
  cout << "Petrol Consumed: " << fixed << setprecision(3) << petrolConsumed << endl;
  cout << "Miles Travelled: " << fixed << setprecision(3) << milesTravelled << endl;
  cout << "Miles per gallon: " << fixed << setprecision(3) << milesPerGallon << endl;

  return 0;
};

int questionThree() {
  // Declare vars
  float startValue = 0, endValue = 0;

  // Ask user to enter data
  cout << "Please enter a start value: ";
  cin >> startValue;

  cout << "Please enter an end value: ";
  cin >> endValue;

  // for loop assign count to start value then keep running till count reaches end value 
  for (int count = startValue; count <= endValue ; count ++) {
    if (count >= 0 && count <= 5){
      // Below function converts the count to english
      convertNumberToEnglishRepresentation(count);
    } else {
      // count greater than 5 then it calls function to convert to odd or even. 
      checkIfNumberIsOddOrEven(count);
    }
  };

  return 0;
};

// NOTES: The sort function sorts arrays, for example it takes sort(array, array+lengthOfArray, <sort>). The final param is option if you want to greater you put greater<int>. If you want to sort descending you don't put anything.  
int questionFour() {
  // Declare vars
  int numbers[3];

  // Ask user to enter numbers and puts them into the numbers array
  cout << "Please enter your first number: ";
  cin >> numbers[0];

  cout << "Please enter your second number: ";
  cin >> numbers[1];

  cout << "Please enter your third number: ";
  cin >> numbers[2];

  cout << "-----------------" << endl;

  // Ascending order
  // Sorts the array in ascending order - the + 3 is the length of the array you want to sort
  sort(numbers, numbers+3);
  cout << "Ascending order:" << endl;
  // Maps through the array
  for (int index = 0; index < 3; index ++) {
    // Prints the array numbers as they've been sorted
    cout << numbers[index] << endl;
  };

  cout << "-----------------" << endl;

  // Decending order
  // Sorts the array in descending order - the + 3 is the length of the array you want to sort, the greater says sort by greatest int
  sort(numbers, numbers+3, greater<int>());
  cout << "Descending order:" << endl;
  for (int index = 0; index < 3; index++) {
      cout << numbers[index] << endl;
  };

  return 0;
};

int main () {
  cout << "Question One" << endl;
  questionOne();
  cout << "-----------------" << endl;

  cout << "Question Two" << endl;
  questionTwo();
  cout << "-----------------" << endl;

  cout << "Question Three" << endl;
  questionThree();
  cout << "-----------------" << endl;

  cout << "Question Four" << endl;
  questionFour();
  cout << "-----------------" << endl;

  return 0;
};