#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;

public:
    // void initcounter(void) { counter = 0; };
    void addItem(void);
    void setPrice(void);
    void displayPrice(void);
};
void Shop::addItem()
{
    int n;
    cout << "Enter the number of items you want to add : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        setPrice();
    }
}
void Shop ::setPrice()
{
    cout << "Enter the Id of the item " << counter + 1 << " : ";
    cin >> itemId[counter];
    cout << "Enter the Price of your item : ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is : " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop virender;
    // virender.initcounter();
    virender.addItem();
    virender.displayPrice();

    return 0;
}
