#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    cout << str << endl;

    
    bool ispalindrome = true;
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            ispalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (ispalindrome) {
        cout << "It's a palindrome" << endl;
    } else {
        cout << "It's not a palindrome" << endl;
    }

    int freq[256] = {0};
    for (char ch : str) {
        freq[ch]++;
    }

    cout << "Frequency of each character:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << " -> " << freq[i] << endl;
        }
    }
     for (char &ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            ch = '*';
        }
     }
cout<<str<<endl;
    return 0;
}