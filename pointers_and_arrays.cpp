#include <iostream>
#include <string>
using namespace std;

int main(void){
    int size;

    cout << "How many integers?: ";
    cin >> size;

    int* array = new int[size];
    for(int i = 0; i < size; i++){
        array[i] = i * 2;
    }

    int* temp_array = array;

    for(int i = 0; i < size; i++){
        cout << "memory address " + to_string(i) + ": " << temp_array << endl;
        cout << "value " + to_string(i) + ": " << *temp_array << endl;
        temp_array++;
    }

    for(int i = 0; i < size; i++){
        *temp_array = array[i] + 5;
        cout << *temp_array << endl;
    }

    //shifting to the right
    int temp_var = array[size - 1];
    for(int i = size - 1; i > 0; i--){
        array[i] = array[i - 1];
    }
    array[0] = temp_var;
    for(int i = 0; i < size; i++){
    cout << "shifted values: " << array[i] << endl;
    }

    delete[] array;
    
    return 0;
}
