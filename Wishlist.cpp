#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string product;
    int price;

    ofstream file("wishlist.txt");

    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter product name: ";
        cin >> product;

        cout << "Enter price: ";
        cin >> price;

        file << product << " " << price << endl;
    }

    file.close();

    cout << "\nWishlist Data:\n";

    ifstream readFile("wishlist.txt");

    while(readFile >> product >> price)
    {
        cout << product << " - " << price << endl;
    }

    readFile.close();

    return 0;
}
