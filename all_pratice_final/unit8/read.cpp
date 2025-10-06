#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("/home/aadarsan/cpp/all_pratice_final/unit8/read_write.txt");

    if (!file.is_open()) {
        cerr << "❌ Could not open file!" << endl;
        return 1;
    }

    char ch[501]; // +1 for null terminator
    file.read(ch, 500);
    cout <<"FILE CONTANT "<<ch<<endl;


    string line;
    

    cout << "✅ File contents:\n" << ch << endl;

    while (getline(file, line))
    {

        cout<<line<<endl;
    }
    



    file.close();
    return 0;
}
