#include <iostream> //to use cin and cout
#include <fstream>  //to get input from a file
#include <string>   //uses strings
using namespace std;

ifstream in_file;

int main() {

    in_file.open("p8input.txt", ios::in);
    if(in_file.fail()) {
        cout << "Could not open input file.  Program terminating.\n\n";
        return 9;
    }
    
    //Your code goes here
    //remember that you can read from the file by treating
    //  in_file like cin. For example,
    //string name;
    //in_file >> name;
    int last = -1;
    string mostsalesname;
    int mostsales = 0;

    string highestincomename;
    double highestincome = 0;

    while (last == -1) {

        string name;
        in_file >> name;

        int numofsales;
        in_file >> numofsales;

        if (numofsales >= mostsales) {
            mostsales = numofsales;
            mostsalesname = name;
        }

        int x = numofsales;
        double totalincome = 0;
        
        while (x > 0) {
            double nextsale;
            in_file >> nextsale;
            totalincome += nextsale;
            x--;
        }

        if (totalincome >= highestincome) {
            highestincome = totalincome;
            highestincomename = name;
        }

        cout << "Salesperson name: " << name << endl;
        cout << "Number of sales: " << numofsales << endl;
        cout << "Total income: " << totalincome << endl;
        cout << endl;

        in_file >> last;
        //cout << last << endl;

    }

    cout << "Most sales: " << mostsalesname << endl;
    cout << "Highest income: " << highestincomename << endl;
}
