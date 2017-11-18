/**
 * Programmer: Argin Aslanian
 * Purpose: This program takes in the Excel spreadsheet column title as input,
 *          and computes its corresponding column number in integer.
 */
#include <iostream>
using namespace std;

//Function declaration.
int convertExcelTitleToNumber(string letter);

int main() {

    //Get Excel column title.
    string letter;
    cout << "Excel column title: (Uppercase letters. e.g. [ AAA , ABCD, BBZZ ] ). " << endl;
    cin >> letter;

    //Display result.
    cout << "Column " << letter << " is column number " << convertExcelTitleToNumber(letter) << "." << endl;

    return 0;
}

int convertExcelTitleToNumber(string letter) {
    //Initialize a return value.
    int retVal = 0;

    //Get letters length.
    int length = letter.length();

    //NOTE: If length is 0, following loop will not happen and
    //it would return 0 because retVal = 0.
    for (int i = 0; i < length; i++) {

        //For each letter, multiply retVal by 26...
        retVal *= 26;
        //And add the value of that letter.
        retVal += letter[i] - 64;
        //(Subtracting 64 from uppercase letter will give the correct A->1, B->2, C->3 format)

    }

    return retVal;
}
