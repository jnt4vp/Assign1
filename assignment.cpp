// Jack Turner
// Assignment 1
// September 1, 2024

#include <iostream>
#include <array>
#include <fstream>

using namespace std;

int int_exist(int array1[], int size, int intcheck){
    for(int i = 0;i<size;i++){
        if(array1[i] == intcheck){
            cout << "Located at index " << i << "\n";
            return 0;
        }
    }
    cout << "Not Found\n";
}

int int_change(int array1[], int size, int newint, int position){
    int original = array1[position];
    array1[position] = newint;
    cout << "The original integer was " << original << ". It has been changed to " << array1[position] << ".\n";
}

void new_int(int array1[], int size, int newint){
    int array2[size];
    for(int i=0;i<size;i++){
        array2[i] = array1[i];
    };
    delete[] array1;
    array1 = new int[size+1];
    for(int i=0;i<size;i++){
        array1[i] = array2[i];
    };
    array1[3] = newint;
}

void int_zero(int array1[], int size, int position){
    array1[position] = 0;
    cout << "Changed to 0\n";
}

int main(){
    int size = 100;
    int input1;
    int *num;
    bool playing = true;
    num = new int[100];
    ifstream inputFile("A1input.txt");
    for(int i=0;i<100;i++){
        if (!(inputFile >> num[i])){
            cout << "Failed\n";
        }
    }
    inputFile.close();
    while(playing == true){
        cout << "What would you like to do?\n";
        cout << "Option 1. Check If Integer Exists\n";
        cout << "Option 2. Modify Integer\n";
        cout << "Option 3. Add Integer\n";
        cout << "Option 4. Remove Integer\n";
        cout << "Option 5. Quit\n";
        cin >> input1;
        switch(input1){
            case 1:
                int input2;
                cout << "Enter integer\n";
                cin >> input2;
                int_exist(num, size, input2);
                break;
            case 2:
                int input3;
                int input4;
                cout << "Enter position\n";
                cin >> input3;
                cout << "Enter new number\n";
                cin >> input4;
                int_change(num, size, input4, input3);
                break;
            case 3:
                int input5;
                cout << "Enter new number\n";
                cin >> input5;
                new_int(num, size, input5);
                num++;
                break;
            case 4:
                int input6;
                cout << "Enter position\n";
                cin >> input6;
                int_zero(num, size, input5);
                break;
            case 5:
                playing = false;
                break;
        }
    }
    return 0;
}