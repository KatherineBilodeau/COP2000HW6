// Katherine Bilodeau HW6 COP2000 
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

//function prototypes
//void showAll (string theAccounts [5][7]);
//void sortInput (string theAccounts [5][7]);
//bool validateUser (string theAccounts [5][7], string username, string user_password, int &saveRow);
//bool readFile (string theAccounts [5][7]);


//using namespace std;

int main ()
{
   // string AccountData[5][7] = {" "};
   // bool userGood;
   // bool fileGood;
   
    
    //open file, if cant, open then exit, read file into data structure readFile();
    // if read cout << "File read successfully." << endl;
    //Everything below this should be in a dowhile loop according to homework video 
    
    //readFile (string theAccounts [5][7])
    
    //string username;
   // string user_password;
    
    //Print banner (welcome)
    //cout << "Welcome to Techi Gadgets System" << endl;
    //cout << "Please enter the following information" << endl;
    //cout << "Please enter your username. < ";
    //cin >> username >> endl;
    //cout << "Please enter your password. < ";
    //cin >> password >> endl;
    
    //validateUser (string theAccounts [5][7], string username, string user_password, int &saveRow);
    //sortInput (string theAccounts [5][7]);
    //showAll (string theAccounts [5][7]);
    
    
    
    
    
    
    // cin.get or getchar to have the key wait for the 0 to exit, and make sure to do it after the username/password 
    return 0;
}

//void showAll (string theAccounts [5][7])
//{
    // homework video suggest double for loop if statement
    // if they are a general user display specific credentials
    // if they are an adminsitrator display ALL credentials (iterate over all)
    // when creating the function, pass a parameter to the function saying print everything, or print one line. Parameter is boolean.
            // call display data with true, display all
            // call display data with false, display just user line
            // see homework bool validateUser (&) 
//}
//void sortInput (string theAccounts [5][7])
//{
    //Only call this when an adminsitrator is logged in. 
    // Use any sorting method, homework recommends bubble sort (why?)
    // sorting vectors- see end of chapter eight slides, chapter 7 to create vectors
//}
//bool validateUser (string theAccounts [5][7], string username, string user_password, int &saveRow)
//{   // have the function start by returning false 
    // code  for loop here that returns false until username and password match
    // check data structure for user credentials
    /// if credentials aren't found print error
    // if they aren't found, but password is wrong, alert user. (return false unless both are true)
    // exit loop and false becomes true 
    // the row the data is found in is saved to saveRow
  
    //return true; //when user input is correct
//}
//bool readFile (string theAccounts [5][7])
//{
    //bool fileRead = false;
    //ifstream inputFile;
   // inputFile.open ("AccountData.txt");
   // do some input validation (if statement with for loops?)
   // if this returns false cout << "The file was not able to be read.";
    //return fileRead; //when all of the data is validate
//}