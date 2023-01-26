#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    // Constant float variables
    const float cost_every = 1.99;
    const float cost_blue = 1.99;
    const float cost_garlic = 1.99;
    const float cost_creamcheese = 2.99;
    const float cost_coffee = 3.99;

    char choice;    // Letter variable
    int amt;        // Integer

    // Double
    double total_charges, charges_every, charges_blueberry;
    double charges_garlic, charges_cream, charges_coffee;

    // Initialize all totals
    total_charges = 0;
    charges_every = 0;
    charges_blueberry = 0;
    charges_garlic = 0;
    charges_cream = 0;
    charges_coffee = 0;

    // Do while loop
    do
    {
        // Print menu items
        cout << right << setw(15) << "Menu" << endl;
        cout << "Enter A for Everything Bagel" << endl;
        cout << "Enter B for Blueberry Bagel" << endl;
        cout << "Enter C for Garlic Bagel" << endl;
        cout << "Enter D for Cream Cheese" << endl;
        cout << "Enter E for Coffee" << endl;
        cout << "Enter F to quit" << endl;
        cout << " " << endl;

        // Receive user choice
        cout << "Please enter your choice of food: ";
        cin >> choice;

        // Validate choice if choice is not between a-f
        while ((choice < 'A' || choice > 'F') && (choice < 'a' || choice > 'f'))
        {
            cout << "Please enter a valid choice." << endl;
            cout << "Enter a choice between A and F: ";
            cin >> choice;
        }

        switch (choice)
        {
            // Either 'A' or 'a'
            case 'A':
            case 'a':
            cout << "Enter the amount: ";
            cin >> amt;
            charges_every += cost_every * amt;  // Totals all costs for 'A' or 'a'
            cout << setprecision(2) << fixed << "The cost for this bagel is: $" << charges_every << endl;
            cout << " " << endl;
            break;      // Breaks out of loop

            // Either 'B' or 'b'
            case 'B':
            case 'b':
            cout << "Enter the amount: ";
            cin >> amt;
            charges_blueberry += cost_blue * amt;       // Totals all costs for 'B' or 'b'
            cout << setprecision(2) << fixed << "The cost for this bagel is: $" << charges_blueberry << endl;
            cout << " " << endl;
            break;      // Breaks out of loop

            // Either 'C' or 'c'
            case 'C':
            case 'c':
            cout << "Enter the amount: ";
            cin >> amt;
            charges_garlic += cost_garlic * amt;    // Totals all costs for 'C' or 'c'
            cout << setprecision(2) << fixed << "The cost for this bagel is: $" << charges_garlic << endl;
            cout << " " << endl;
            break;      // Breaks out of loop

            // Either 'D' or 'd'
            case 'D':
            case 'd':
            cout << "Enter the amount: ";
            cin >> amt;
            charges_cream = cost_creamcheese * amt;     // Totals all costs for 'D' or 'd'
            cout << setprecision(2) << fixed << "The cost for cream cheese is: $" << charges_cream << endl;
            cout << " " << endl;
            break;      // Breaks out of loop

            // Either 'E' or 'e'
            case 'E':
            case 'e':
            cout << "Enter the amount: ";
            cin >> amt;
            charges_coffee += cost_coffee* amt;     // Totals all costs for 'E' or 'e'
            cout << setprecision(2) << fixed << "The cost for coffee is: $" << charges_coffee<< endl;
            cout << " " << endl;
            break;      // Breaks out of loop


        }
    } while (!((choice == 'F') || (choice =='f')));     // Breaks do-while loop if choice is equal to 'f' or 'F'


    // Calculate total charges
    total_charges = charges_every + charges_blueberry + charges_garlic + charges_cream + charges_coffee;

    // Display total
    cout << setprecision(2) << fixed << "The total charges are: $" << total_charges << endl;

    return 0;

}

