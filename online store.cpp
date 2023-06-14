#include<iostream>
#include <stdlib.h>
#include<string>
using namespace std;
class Product
{
    string name;
    int price;
    int quantity;
public:
    void Setter(string name, int price, int quantity)
    {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
    string Getter_Name()
    {
        return name;
    }
    int Getter_price()
    {
        return price;
    }
    int Getter_quantity()
    {
        return quantity;
    }
};
class Electronic : public Product
{
    string brand;
public:
    void Setter_brand(string brand)
    {
        this->brand = brand;
    }

    string Getter_brand()
    {
        return brand;
    }
};
class Clothing : public Product
{
    string size;
public:
    void Setter_size(string size)
    {
        this->size = size;
    }

    string Getter_size()
    {
        return size;
    }
};
class Books : public Product
{
    string author;
public:
    void Setter_author(string author)
    {
        this->author = author;
    }

    string Getter_author()
    {
        return author;
    }
};
class Customer
{
    string email;
    string name;
    string address;
public:
    void Setter(string name, string email, string address)
    {
        this->name = name;
        this->email = email;
        this->address = address;
    }
    string Getter_Name()
    {
        return name;
    }
    string Getter_email()
    {
        return email;
    }
    string Getter_address()
    {
        return address;
    }
};
class RegularCustomer : public Customer
{

};
class PremiumCustomer : public Customer
{
    int loyaltyPoints;
public:
    void SetLoyaltyPoints(int points)
    {
        loyaltyPoints = points;
    }
    int GetLoyaltyPoints()
    {
        return loyaltyPoints;
    }
};
class ShoppingCart
{
private:
    Customer* customer;
    Product* products[10];
    int numProducts;

public:
    ShoppingCart()
    {
        customer = nullptr;
        numProducts = 0;
        for (int i = 0; i < 10; i++)
        {
            products[i] = nullptr;
        }
    }
    void SetCustomer(Customer* customer)
    {
        this->customer = customer;
    }
    void AddProduct(Product* product)
    {
        if (numProducts < 10)
        {
            products[numProducts] = product;
            numProducts++;
        }
        else
        {
            cout << "Shopping cart is full." << endl;
        }
    }
    void RemoveProduct(Product* product)
    {
        bool found = false;
        for (int i = 0; i < numProducts; i++)
        {
            if (products[i] == product)
            {
                for (int j = i; j < numProducts - 1; j++)
                {
                    products[j] = products[j + 1];
                }
                products[numProducts - 1] = nullptr;
                numProducts--;
                found = true;
                cout << "Product removed from the shopping cart." << endl;
                break;
            }
        }
        if (!found)
        {
            cout << "Product not found in the shopping cart." << endl;
        }
    }
    double CalculateTotalPrice()
    {
        double totalPrice = 0.0;
        for (int i = 0; i < numProducts; i++)
        {
            if (products[i]->Getter_price() != 0 && products[i]->Getter_quantity() != 0)
            {
                totalPrice += products[i]->Getter_price() * products[i]->Getter_quantity();
            }
        }
        return totalPrice;
    }
    void GenerateOrderSummary()
    {
        for (int i = 0; i < numProducts; i++)
        {
            cout << "Product: " << products[i]->Getter_Name() << endl;
            cout << "Price: $" << products[i]->Getter_price() << endl;
            cout << "Quantity: " << products[i]->Getter_quantity() << endl;
        }
    }
};
int main()
{
    cout << "         WELCOME TO OUR ONLINE SHOPPING STORE" << endl;
    cout << endl;
    ShoppingCart cart;
    RegularCustomer customer1;
    string name, email, address;
    cout << "Please enter customer name: ";
    getline(cin, name);
    cout << "Enter customer email: ";
    getline(cin, email);
    cout << "Enter customer address: ";
    getline(cin, address);
    customer1.Setter(name, email, address);
    system("CLS");
    PremiumCustomer customer2;

    Electronic electronic;
    string productName, brand;
    int price, quantity;
    cout << endl;
    cout << "If you want to buy any Electronic product then write its specificaions" << endl;
    cout << "else leave it by a dash(-) no other special character" << endl;
    cout << endl;
    cout << "Enter electronic product name: ";
    getline(cin, productName);
    if (productName == "-")
    {
        price = 0;
        quantity = 0;
    }
    else
    {
        cout << "Enter electronic product price: ";
        cin >> price;
        cout << "Enter electronic product quantity: ";
        cin >> quantity;
        cin.ignore();
        electronic.Setter(productName, price, quantity);
        cout << "Enter electronic product brand: ";
        getline(cin, brand);
        electronic.Setter_brand(brand);
        cart.AddProduct(&electronic);
    }
    system("CLS");

    Clothing clothing;
    string size;
    cout << endl;
    cout << "If you want to buy any Clothing product then write its specificaions" << endl;
    cout << "else leave it by a dash(-) no other special character" << endl;
    cout << endl;
    cout << "Enter clothing product name: ";
    getline(cin, productName);
    if (productName == "-")
    {
        price = 0;
        quantity = 0;
    }
    else
    {
        cout << "Enter clothing product price: ";
        cin >> price;
        cout << "Enter clothing product quantity: ";
        cin >> quantity;
        cin.ignore();
        clothing.Setter(productName, price, quantity);
        cout << "Enter clothing product size: ";
        getline(cin, size);
        clothing.Setter_size(size);
        cart.AddProduct(&clothing);
    }
    system("CLS");

    Books book;
    string author;
    cout << endl;
    cout << "If you want to buy any Clothing product then write its specificaions" << endl;
    cout << "else leave it by a dash(-) no other special character" << endl;
    cout << endl;
    cout << "Enter book name: ";
    getline(cin, productName);
    if (productName == "-")
    {
        price = 0;
        quantity = 0;
    }
    else
    {
        cout << "Enter book price: ";
        cin >> price;
        cout << "Enter book quantity: ";
        cin >> quantity;
        cin.ignore();
        book.Setter(productName, price, quantity);
        cout << "Enter book author: ";
        getline(cin, author);
        book.Setter_author(author);
        cart.AddProduct(&book);
    }
    system("CLS");
    int customerType;
    cout << "Enter customer type (1 for Regular, 2 for Premium): ";
    cin >> customerType;
    cin.ignore();
    if (customerType == 1)
    {
        cart.SetCustomer(&customer1);
    }
    else if (customerType == 2)
    {
        cart.SetCustomer(&customer2);
    }
    else
    {
        cout << "Invalid customer type." << endl;
        return 0;
    }
    system("CLS");
    cout << "Customer Name: " << customer1.Getter_Name() << endl;
    cout << "Customer Email: " << customer1.Getter_email() << endl;
    cout << "Customer Address: " <<customer1.Getter_address() << endl;
    cout << endl;
    cart.GenerateOrderSummary();
    if (customerType == 1)
    {
        double totalPrice = cart.CalculateTotalPrice();
        cout << "Total Price: $" << totalPrice << endl;
    }
    else if (customerType == 2)
    {
        double totalPrice = cart.CalculateTotalPrice();
        cout << "Total Price: $" << totalPrice << endl;
        cout << "After Having 20% discount as you are a Premium Customer" << endl;
        double disc = totalPrice * 0.2;
        cout << "Total Price after discount : $" << totalPrice - disc << endl;
    }
    else
    {
        cout << "      Invalid number Entered    " << endl;
        double totalPrice = cart.CalculateTotalPrice();
        cout << "Total Price: $" << totalPrice << endl;
    }

    return 0;
}