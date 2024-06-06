#include <iostream>
#include <cstring>

using namespace std;

// Function to calculate hash using ASCII values
int hash_ascii(char s[], int n) {
    int len = strlen(s);
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += s[i];
    }
    return sum % n;  // Ensure the result is within the range [0, n-1]
}

int main() {
    char record[][10] = {"Rama", "Hari", "Muna", "Gita", "Rita", "Joy", "Shiya"};

    cout << "Search Key\tIndex Value at hash table\n\n";
    
    // Display hash values for each string in the record array
    for (int i = 0; i < 7; i++) {
        cout << record[i] << "\t\t\t" << hash_ascii(record[i], 7);
        cout << "\n";
    }

    return 0;
}
