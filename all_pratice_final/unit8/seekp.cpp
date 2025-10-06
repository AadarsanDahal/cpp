#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a file first
    ofstream fout("test.txt");
    fout << "ABCDEFGHIJ";   // 10 characters
    fout.close();

    // Reading using seekg with ios::cur
    ifstream fin("test.txt");
    char ch;

    fin.get(ch);   // read first character 'A'
    cout << "First character: " << ch << endl;

    // Move 3 characters ahead from current position
    fin.seekg(3, ios::cur);   
    fin.get(ch);   // should read 'E'
    cout << "Character after moving 3 ahead: " << ch << endl;

    fin.close();

    // Overwriting using seekp with ios::cur
    fstream fio("test.txt", ios::in | ios::out);
    fio.seekp(5, ios::cur);  // move 5 bytes ahead from current put pointer
    fio.put('X');             // overwrite character
    fio.close();

    return 0;
}
