

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

auto LIMIT = numeric_limits<streamsize>::max();

int failed(string expected)
{
    cin.clear();
    cin.ignore(LIMIT, -1);

    cout << "Please enter a valid " << expected << "!\n";
    return -1;
}

int main()
{

    float originalPrice = 0, markupPercentage = 0, taxPercentage = 0, monthlyRate = 0, electricityBill = 0, waterBill = 0, itemQuantity = 0, employeeCount = 0, salary = 0;

    cout << fixed << setprecision(2);

    cout << "Item Original Price: ";
    cin >> originalPrice;

    if (cin.fail())
        return failed("item price (number)");

    cout << "Mark-up Percentage: ";
    cin >> markupPercentage;

    if (cin.fail())
        return failed("mark-up percentage (number)");

    cout << "Sales Tax Percentage: ";
    cin >> taxPercentage;

    if (cin.fail())
        return failed("sales tax percentage (number)");

    cout << "\nList of Expenses\n";

    cout << "Store Monthly Rate: ";
    cin >> monthlyRate;

    if (cin.fail())
        return failed("store monthly rate (number)");

    cout << "Electricity Bill: ";
    cin >> electricityBill;

    if (cin.fail())
        return failed("electricity bill (number)");

    cout << "Water Bill: ";
    cin >> waterBill;

    if (cin.fail())
        return failed("water bill (number)");

    cout << "Item Quantity: ";
    cin >> itemQuantity;

    if (cin.fail())
        return failed("item quantity (number)");

    cout << "Number of Employees: ";
    cin >> employeeCount;

    if (cin.fail())
        return failed("number of employees (number)");

    cout << "Salary: ";
    cin >> salary;

    if (cin.fail())
        return failed("salary (number)");

    float expenses = monthlyRate + electricityBill + waterBill + (originalPrice * itemQuantity) + (employeeCount * salary),
          price = originalPrice + (originalPrice * (markupPercentage / 100)),
          salesTax = price * (taxPercentage / 100),
          netProfit = (price * itemQuantity) - expenses;

    // Display the output
    // Insert fixed and precision to the output stream to format floating point values
    cout << fixed << setprecision(2) << "\n";

    cout << "The selling price of the item is: " << price + salesTax << "\n";
    cout << "The monthly expenses: " << expenses << "\n";
    cout << "The total quantity of items needed to be sold to have break-even: " << expenses / price << " pieces.\n";
    cout << "The total net profit: " << netProfit << "\n";

    return 0;
}