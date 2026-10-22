#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    string line;

    fin.open("file1.txt");
    fout.open("file2.txt");

    while (getline(fin, line))
    {
        fout << line << endl;
    }

    fin.close();
    fout.close();

    return 0;
}