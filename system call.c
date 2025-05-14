#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main() {
    ofstream file("newfile.txt");
    if (!file) {
        cerr << "File creation failed." << endl;
        return 1;
    }

    file << "This is a system call demonstration." << endl;
    file.close();

    FILE *checkFile = fopen("newfile.txt", "r");
    if (checkFile) {
        cout << "File created successfully." << endl;
        fclose(checkFile);
    } else {
        cerr << "File does not exist." << endl;
    }

    return 0;
}
