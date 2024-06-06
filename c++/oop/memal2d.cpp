/*memal2d is a dynamic memory allocation program in this program we learn about DMA through new and delete */
//new keyword uses heap memeory which is below heap and above global variables and program code//
//new keyword allocates memeory and delete removes allocated memeory//
#include<iostream>
using namespace std;

int main() {
    int *ptr; // pointers are used to allocate memory in DMA in C++
    ptr = new int; // int represents bytes of storage (suppose we took 2-byte address 15 and 16 and made a storage)
    //new used in DMA
    
    cout << "Enter value:" << endl;
    cin >> *ptr; // *ptr deals with value while ptr gives memory address (say we took value 100 and store in 15-16)
    
    cout << "The value is: " << *ptr << endl;
    
    delete ptr;
    
    return 0;
}


