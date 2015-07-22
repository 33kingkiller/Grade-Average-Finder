/*
/This is a test program designed using functional decomposition with the purpose of calculating the average of a set of grades.
/
/This program was written by 33kingkiller (aka NerdByFate).
/
/This program was last updated 7-22-2015.
*/

#include <iostream>
#include <fstream>

#include <cassert>

using namespace std;

void input(int& returnVal, int& amount);
void calculate(int& returnVal, int& ave, int amount);
void output(int& returnVal, int ave);

int grades[50];

int main() {
    //Main

    //Precondition:
    //N/A; No assert statement needed.
    //Postcondition:
    //Grade average is printed on the screen and in a ouput log.

    int returnValue = 0;
    int average;
    int gradeAmount;
    input(returnValue, gradeAmount);
    calculate(returnValue, average, gradeAmount);
    output(returnValue, average);
    return returnValue;
}

void input(int& returnVal, int& amount) {
    //Input

    //Precondition:
    //N/A; No assert statement required.
    //Postcondition:
    //All files are opened. The grade amount and the grades have been stored in variables.

    ifstream inFile;

    inFile.open("grades.dat");
    if(!inFile) {
        cout << "Error 1: Stream Failed. Perhaps the input file doesn't exist? The program will fail.";
        returnVal = 1;
        return;
    } //if
    for(int i = 0; i <50; i++) {
        inFile >> grades[i];
        if(!inFile) {
            cout << "Error 1: Stream Failed. " << grades[i] << " in \"grades.dat\" contains invalid data. The program will fail.";
            returnVal = 1;
            return;
        } //if
    } //for
    inFile >> amount;
    if(!inFile) {
        cout << "Error 1: Stream failed. The grade amount contains invalid data. The program will fail.";
        returnVal = 1;
        return;
    } //if
    inFile.close();
}

void calculate(int& returnVal, int& ave, int amount) {
    //Calculate

    //Precondition:
    //All files are opened. The grade amount and the grades have been stored in variables. Assert statement(s) required.
    //Postcondition:
    //Grade average has been calculated based on the grade amount.

    if(!amount > 0 || !amount < 51) {
        cout << "Error 3: The grade amount is not greater than 0, not less than 51, or both. The following assertion(s) will fail.\n\n";
        returnVal = 3;
    }
    assert(amount > 0);
    assert(amount < 51);

    switch(amount) {
    case 1:
        ave = grades[0];
        break;
    case 2:
        ave = (grades[0] + grades[1]) / 2;
        break;
    case 3:
        ave = (grades[0] + grades[1] + grades[2]) / 3;
        break;
    case 4:
        ave = (grades[0] + grades[1] + grades[2] + grades[3]) / 4;
        break;
    case 5:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4]) / 5;
        break;
    case 6:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5]) / 6;
        break;
    case 7:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6]) / 7;
        break;
    case 8:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7]) / 8;
        break;
    case 9:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8]) / 9;
        break;
    case 10:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9]) / 10;
        break;
    case 11:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10]) / 11;
        break;
    case 12:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11]) / 12;
        break;
    case 13:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12]) / 13;
        break;
    case 14:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13]) / 14;
        break;
    case 15:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14]) / 15;
        break;
    case 16:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15]) / 16;
        break;
    case 17:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16]) / 17;
        break;
    case 18:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17]) / 18;
        break;
    case 19:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18]) / 19;
        break;
    case 20:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19]) / 20;
        break;
    case 21:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20]) / 21;
        break;
    case 22:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21]) / 22;
        break;
    case 23:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22]) / 23;
        break;
    case 24:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23]) / 24;
        break;
    case 25:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24]) / 25;
        break;
    case 26:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25]) / 26;
        break;
    case 27:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26]) / 27;
        break;
    case 28:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27]) / 28;
        break;
    case 29:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28]) / 29;
        break;
    case 30:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29]) / 30;
        break;
    case 31:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30]) / 31;
        break;
    case 32:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31]) / 32;
        break;
    case 33:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32]) / 33;
        break;
    case 34:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33]) / 34;
        break;
    case 35:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34]) / 35;
        break;
    case 36:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35]) / 36;
        break;
    case 37:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36]) / 37;
        break;
    case 38:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37]) / 38;
        break;
    case 39:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38]) / 39;
        break;
    case 40:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39]) / 40;
        break;
    case 41:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40]) / 41;
        break;
    case 42:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41]) / 42;
        break;
    case 43:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42]) / 43;
        break;
    case 44:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43]) / 44;
        break;
    case 45:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44]) / 45;
        break;
    case 46:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45]) / 46;
        break;
    case 47:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45] + grades[46]) / 47;
        break;
    case 48:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45] + grades[46] + grades[47]) / 48;
        break;
    case 49:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45] + grades[46] + grades[47] + grades[48]) / 49;
        break;
    case 50:
        ave = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5] + grades[6] + grades[7] + grades[8] + grades[9] + grades[10] + grades[11] + grades[12] + grades[13] + grades[14] + grades[15] + grades[16] + grades[17] + grades[18] + grades[19] + grades[20] + grades[21] + grades[22] + grades[23] + grades[24] + grades[25] + grades[26] + grades[27] + grades[28] + grades[29] + grades[30] + grades[31] + grades[32] + grades[33] + grades[34] + grades[35] + grades[36] + grades[37] + grades[38] + grades[39] + grades[40] + grades[41] + grades[42] + grades[43] + grades[44] + grades[45] + grades[46] + grades[47] + grades[48] + grades[49]) / 50;
        break;
    default:
        ave = -1;
        cout << "Error 2: The grade amount is either too large or too small. The program will fail.";
        returnVal = 2;
        return;
    } //switch
}

void output(int& returnVal, int ave) {
    //Output

    //Precondition:
    //Grade average has been calculated based on the grade amount. Assert statement(s) required.
    //Postcondition:
    //Grade average is printed on the screen and in a ouput log.

    if(!ave > 0) {
        cout << "Error 3: The average is not greater than 0. The following assertion will fail.\n\n";
        returnVal = 3;
    }
    assert(ave > 0);

    ofstream outFile;

    outFile.open("average.dat");

    cout << "The average of those grades is " << ave << endl << endl;
    outFile << "The average of those grades is " << ave;
    cout << "Press any key to continue." << endl;
    outFile.close();
    cin.get();
}
