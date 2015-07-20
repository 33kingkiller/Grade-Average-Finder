/*
/This is a test program designed using functional decomposition with the purpose of calculating the average of a set of grades.
/
/This program was written by 33kingkiller (aka NerdByFate).
/
/This program was last updated 7-19-2015.
*/

#include <iostream>
#include <fstream>

#include <cassert>

using namespace std;

void input();
void calculate();
void output();

int returnValue;
int grades[50];
int gradeAmount;
int average;

ifstream inFile;
ofstream outFile;

int main() {
    //Main

    //Precondition:
    //N/A; No assert statement needed.
    //Postcondition:
    //Grade average is printed on the screen and in a ouput log.

    returnValue = 0;
    input();
    calculate();
    output();
    return returnValue;
}

void input() {
    //Input

    //Precondition:
    //N/A; No assert statement required.
    //Postcondition:
    //All files are opened. The grade amount and the grades have been stored in variables.

    inFile.open("grades.dat");
    if(!inFile) {
        cout << "Error 1: Stream Failed. Perhaps the input file doesn't exist?";
        returnValue = 1;
        return;
    } //if
    outFile.open("average.dat");
    for(int i = 0; i <50; i++) {
        inFile >> grades[i];
        if(!inFile) {
            cout << "Error 1: Stream Failed. " << grades[i] << " in \"grades.dat\" contains invalid data.";
            returnValue = 1;
            return;
        } //if
    } //for
    inFile >> gradeAmount;
    if(!inFile) {
        cout << "Error 1: Stream failed. The grade amount contains invalid data.";
        returnValue = 1;
        return;
    } //if
}

void calculate() {
    //Calculate

    //Precondition:
    //All files are opened. The grade amount and the grades have been stored in variables. Assert statement(s) required.
    //Postcondition:
    //Grade average has been calculated based on the grade amount.

    assert(gradeAmount > 0);

    switch(gradeAmount) {
    case 1:
        average = grades[0];
        break;
    case 2:
        average = (grades[0] + grades[1]) / 2;
        break;
    case 3:
        average = (grades[0] + grades[1] + grades[2]) / 3;
        break;
    case 4:
        average = (grades[0] + grades[1] + grades[2] + grades[3]) / 4;
        break;
    case 5:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4]) / 5;
        break;
    case 6:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5]) / 6;
        break;
    case 7:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6]) / 7;
        break;
    case 8:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7]) / 8;
        break;
    case 9:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8]) / 9;
        break;
    case 10:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9]) / 10;
        break;
    case 11:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10]) / 11;
        break;
    case 12:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11]) / 12;
        break;
    case 13:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12]) / 13;
        break;
    case 14:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13]) / 14;
        break;
    case 15:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14]) / 15;
        break;
    case 16:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15]) / 16;
        break;
    case 17:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16]) / 17;
        break;
    case 18:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17]) / 18;
        break;
    case 19:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18]) / 19;
        break;
    case 20:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19]) / 20;
        break;
    case 21:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20]) / 21;
        break;
    case 22:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21]) / 22;
        break;
    case 23:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22]) / 23;
        break;
    case 24:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23]) / 24;
        break;
    case 25:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24]) / 25;
        break;
    case 26:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25]) / 26;
        break;
    case 27:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26]) / 27;
        break;
    case 28:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27]) / 28;
        break;
    case 29:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28]) / 29;
        break;
    case 30:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29]) / 30;
        break;
    case 31:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30]) / 31;
        break;
    case 32:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31]) / 32;
        break;
    case 33:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32]) / 33;
        break;
    case 34:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33]) / 34;
        break;
    case 35:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34]) / 35;
        break;
    case 36:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35]) / 36;
        break;
    case 37:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36]) / 37;
        break;
    case 38:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37]) / 38;
        break;
    case 39:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38]) / 39;
        break;
    case 40:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39]) / 40;
        break;
    case 41:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40]) / 41;
        break;
    case 42:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41]) / 42;
        break;
    case 43:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42]) / 43;
        break;
    case 44:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43]) / 44;
        break;
    case 45:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44]) / 45;
        break;
    case 46:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45]) / 46;
        break;
    case 47:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45] + grades[46]) / 47;
        break;
    case 48:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45] + grades[46] + grades[47]) / 48;
        break;
    case 49:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45] + grades[46] + grades[47] + grades[48]) / 49;
        break;
    case 50:
        average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45] + grades[46] + grades[47] + grades[48] + grades[49]) / 50;
        break;
    default:
        average = -1;
        cout << "Error 2: The grade amount is either too large or too small.";
        returnValue = 2;
        return;
    } //switch
}

void output() {
    //Output

    //Precondition:
    //Grade average has been calculated based on the grade amount. Assert statement(s) required.
    //Postcondition:
    //Grade average is printed on the screen and in a ouput log.

    assert(average > 0);

    cout << "The average of those grades is " << average << endl << endl;
    outFile << "The average of those grades is " << average;
    cout << "Press any key to continue." << endl;
    cin.get();
    inFile.close();
    outFile.close();
}
