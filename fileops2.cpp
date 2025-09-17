#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string filename, openfile, resp1 = "create", resp2 = "open", addlines, dellines;
    int ops;
    cout << "Do you want to open an existing file or a create a new file?" << endl
    <<"create/open"<<endl;
    cin >> openfile;
    if (openfile == resp1)
    {
        cout << "Enter the name of the file to be created:" << endl;
        cin >> filename;
        ofstream file(filename);
        if (!file.is_open())
        {
            cout << "The file " << filename << " could not be created" << endl;
            return 1;
        }
    }
    else if (openfile == resp2)
    {
        cout << "Enter the name of the file to be opened:" << endl;
        cin >> filename;
        ifstream file(filename);
        if (!file.is_open())
        {
            cout << "The file " << filename << " could not be opened" << endl;
            return 1;
        }
    }
    cout << "What operation do you want to do:" << endl;
    cout << "1]Add lines" << endl
         << "2]Display file contents"
         << endl
         << "3]End process" << endl;
    cin >> ops;
    if (ops == 1)
    {
        cout << "Enter the content you want to enter" << endl;
        cin.ignore();
        getline(cin, addlines);
        ofstream outfile(filename, ios::app);
        if (!outfile.is_open())
        {
            cout << "The file could not be opened for writing" << endl;
            return 1;
        }
        outfile << addlines << endl;
        outfile.close();
    }
    else if (ops == 2)
    {
        ifstream infile(filename);
        if (!infile.is_open())
        {
            cout << "The file could not be opened for reading" << endl;
            return 1;
        }
        string line;
        while (getline(infile, line))
        {
            cout << line << endl;
        }
        infile.close();
    }
    else if (ops == 3)
    {
        exit;
    }
    else
        cout << "There is no process called " << ops << endl;
}
