//  Author : Mesut Apil
//  Integer Manipulation
//  < Integer Manipulations Program >

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//**************************************************************************************************
// Class is used for various functions that user can call by choosing given options. Math.h used to
//get  square root of a value.
//6 public functions that use the private userInt variable. userInt is the number user puts in
//*************************************************************************************************

class myInt {
private:
    int userInt; // Value the user enters

public:
    void setInt(int); // Takes the value user puts in and assigns it to variable userInt
    void isItMultiple (); // Checks to see if the user value is multiple of 7, 11, or 13
    void oddOrEven (); // adds the integers and checks if the sum is odd or even
    void squareRoot (); // uses the square root call in math.h library to display the square root
    void isPrime(); // checks to see if the number is prime
    void isPerfect(); // Checks to see if the number is perfect
};


//*****************************************************************
// Takes the value user puts in and assigns it to variable userInt
// Value: takes the value provided by user and assigns it to userInt
//*****************************************************************

void myInt:: setInt(int value){
    userInt = value;
}
//*****************************************************************
//  Checks to see if the user value is multiple of 7, 11, or 13
//*****************************************************************
void myInt:: isItMultiple(){
    if (userInt % 7 == 0){
        cout << "Your number is multiple of 7" << endl;
    }

    if (userInt % 11 == 0){
        cout << "Your number multiple of 11" << endl;
    }

    if (userInt % 13 == 0){
        cout << "Your number is multiple of 13" << endl;
    }

    if(userInt % 7 != 0 && userInt % 11 != 0 && userInt % 13 != 0){
        cout<< "Your number is not a multiple of 7, 11 or 13" << endl;
    }
}
//*****************************************************************
//adds the integers and checks if the sum is odd or even
//*****************************************************************
void myInt:: oddOrEven(){
    int digit = 0; // temporary holds the value after %
    int digit2 = userInt; //  holds the value  of original user input
    int sum = 0; // holds the sum of numbers entered by user
    while(digit2 > 0)
    {
        digit = digit2 % 10;
        digit2 /= 10;
        sum += digit;

    }
    if (sum % 2 == 0) // checks to see if its prime
        cout<<"The sum of your number is even"<< endl;

    else
        cout<<"The sum of your number is odd"<< endl;
}
//*****************************************************************
// uses the square root call in math.h library to display the square  root
//*****************************************************************

void myInt:: squareRoot(){
    cout << "Square root is: " << (sqrt(userInt))<< endl;
}
//*****************************************************************
 //checks to see if the number is prime
//*****************************************************************

void myInt:: isPrime(){
    int count =0; // counts the multiple of users value
    for(int i=2; i < userInt; i++){
        if (userInt % i == 0)
            count++;
}
    if (count > 1)
     cout << "Your number is not prime.\n";
    else
        cout << "Your number is not prime.\n";
}

//*****************************************************************
// Checks to see if the number is perfect
//*****************************************************************
 void myInt:: isPerfect(){
        double total = 0;

        for(int i = 1; i < userInt; i++){
            if(userInt % i == 0){
                total +=i;
            }
        }

        if(total == userInt){
            cout  << "It is a perfect number" << endl;
        }
        else
            cout << "It is not a perfect number" <<endl;
}

int main (){
    string reRun = "Y";
    string userChoice; // variable for user choice from the menu
    int value; // variable for user's number

    cout << "Welcome to my Integer Manipulations Program." << endl << endl;

    while (reRun != "n" && reRun != "N"){

    cout << "Please enter your number: ";
    cin >> value;
        myInt userNumb;
        userNumb.setInt (value); // setter call to set the value for userInt which is private

    cout << "Here is the list of choices: \n"
         << "A. Is it multiple of 7, 11, or 13 \n"
         << "B. Is the sum of its digits odd or even \n"
         << "C. What is the square root value \n"
         << "D. Is it a prime number \n"
         << "E. Is it a perfect number \n"
         << "F. All of the above\n"
         << "Z. Exit\n" << endl;

    cout << "Enter your choice: ";
    cin >> userChoice;

    for (int i = 0; i < userChoice.length(); i++)
        userChoice[i] = toupper(userChoice[i]); // converting user input to upper case

    while (userChoice != "A" && userChoice != "B" && userChoice != "C"
           && userChoice != "D" && userChoice != "E" && userChoice != "F"
           &&userChoice != "Z"){

        cout << "Invalid Choice! Please enter an appropriate choice: ";
        cin >> userChoice;

        for (int i = 0; i < userChoice.length(); i++)
            userChoice[i] = toupper(userChoice[i]);
    }

    if (userChoice == "A"){
        userNumb.isItMultiple();
    }

    else if (userChoice == "B"){
        userNumb.oddOrEven();
    }

    else if (userChoice == "C"){
        userNumb.squareRoot();
    }

    else if (userChoice == "D"){
        userNumb.isPrime();
    }
    else if (userChoice == "E"){
        userNumb.isPerfect();
    }
    else if (userChoice ==  "F"){
        userNumb.isItMultiple();
        userNumb.oddOrEven();
        userNumb.squareRoot();
        userNumb.isPrime();
        userNumb.isPerfect();
    }

    else if (userChoice ==  "Z"){

        cout << "\nThis program is Implemented by Mesut Apil\n"
             << "March - 2019" << endl;
        exit (0);
    }
        cout << "\nWould you like to run the program again?\nEnter y|Y n|N ";
        cin >> reRun;

        while (reRun != "y" && reRun != "Y" && reRun != "n" && reRun != "N"){
            cout << "Invalid Choice! Please enter y|Y n|N ";
            cin >> reRun;
        }

    if (reRun == "n" || reRun == "N")
        cout << "\n\nThis program is Implemented by Mesut Apil \n"
        << "March - 2019" << endl;
    }

    return 0;
}
