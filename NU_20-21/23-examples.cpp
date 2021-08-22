#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*   This is a comment spanning
     multiple lines – compiler ignores everything until the matching    */
    
    //single line comment
     
    //project organization
    //main function
    //; statement terminator
    //{} block structured code
    
    
    //EXAMPLE 1 - printing "hello world!"
    cout << "Hello World!" << endl;
    
    
    
    //EXAMPLE 2
    //This is a comment, and the line is ignored by the compiler
    int pennies;
    pennies = 8;
    int dimes = 4;
    int quarters = 3;

    double total = pennies * 0.01 + dimes * 0.10 + quarters * 0.25;
    
    cout << "Total value = " << total << endl;
    

    
    //EXAMPLE 3 - some simple addition
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    
    cout << "enter number 1:" << endl;
    cin >> number1;
    
    cout << "enter number 2:" << endl;
    cin >> number2;
    
    sum = number1 + number2;
    
    cout << "sum is: " << sum << endl;
    
    
    
    //EXAMPLE 4  - if statement
    int x = 2;
    if (x < 3)
    {
        cout << "Hi" << endl;
        cout << "Hi" << endl;
        cout << "Hi" << endl;
    }
    

    
    //EXAMPLE 5 - if/else if/else
    double richter = 0.0;

    cout << "enter richter value: " << endl;
    cin >> richter;

    if (richter >= 8.0) {
        cout << "Most structures fall" << endl;
    }
    else if (richter >= 7.0) {
        cout << "Many buildings destroyed" << endl;
    }
    else if (richter >= 6.0) {
        cout << "Many buildings considerably damaged, some collapse" << endl;
    }
    else if (richter >= 4.5) {
        cout << "Damage to poorly constructed buildings" << endl;
    }
    else {
        cout << "No destruction of buildings" << endl;
    }
    

    
    //EXAMPLE 6 - nested branches
    const double RATE1 = 0.10;
    const double RATE2 = 0.25;
    const double RATE1_SINGLE_LIMIT = 32000;
    const double RATE1_MARRIED_LIMIT = 64000;
    
    double tax1 = 0;
    double tax2 = 0;

    double income = 0;
    cout << "Please enter your income: ";
    cin >> income;

    cout << "Please enter s for single, m for married: ";
    string marital_status;
    cin >> marital_status;
    
    if (marital_status == "s")
    {
        if (income <= RATE1_SINGLE_LIMIT)
        {
            tax1 = RATE1 * income;
        } else {

            tax1 = RATE1 * RATE1_SINGLE_LIMIT;
            tax2 = RATE2 * (income - RATE1_SINGLE_LIMIT);
        }
    }
    else //you must be married then
    {
        if (income <= RATE1_MARRIED_LIMIT)
        {
            tax1 = RATE1 * income;
        }
        else
        {
            tax1 = RATE1 * RATE1_MARRIED_LIMIT;
            tax2 = RATE2 * (income - RATE1_MARRIED_LIMIT);
        }
    }

    double total_tax = tax1 + tax2;
    cout << "your total taxes to be paid: " << total_tax << endl;
    

    
    
    //EXAMPLE 7 - while, const
    //doubling investment problem
    const double RATE = 5;
    const double INITIAL_BALANCE = 10000;
    const double TARGET = 2 * INITIAL_BALANCE; //we want our money to double

    double balance = INITIAL_BALANCE;
    //how many years does it take to double our money?
    int year = 0;

    while (balance < TARGET) {
        year++; //year = year + 1; or year += 1;
        //year--;, year = year -1; year -= 1
        balance = balance * (1 + RATE / 100); //in parens should be 1.05
    }

    cout << "The investment doubled after " << year << " years." << endl;
    

    
    //EXAMPLE 8 - for loop
    //initialization, condition and update
    //year only available inside of loop
    const double RATE3 = 5;
    const double INITIAL_BALANCE2 = 10000;
    double balance2 = INITIAL_BALANCE2;
    int nyears;

    cout << "Enter number of years: "<<endl;
    cin >> nyears;

    for (int year = 1; year <= nyears; year++) {
        balance2 = balance2 * (1 + RATE3 / 100);
        cout << year << "\t" << balance2 << endl;
    }
     

    
    //EXAMPLE 9 - for w break
    int i;
    for(i = 1; i < 10; i++) {
        if (i%3 == 0)
            break;
    }

    cout << "after loop completes, i is: " << i << endl;
    

    
    //EXAMPLE 10 - for w continue
    for (int i = 0; i < 10; i++) {
        if (i%2 == 0)
            continue;
        cout << "i is: " << i << endl;
    }
    

    
    //EXAMPLE 11 - do while!
    //    goes through the loop at least once, even if the condition is not met
    //    try ct < -5
    int ct = 0;
    do {
        cout << "hi\n"<<endl;
        ct ++;
    } while (ct < 5);
    
    
}
