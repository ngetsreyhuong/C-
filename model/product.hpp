#include<iostream>
#include<string>
#include<ctime>

using namespace std;

struct Product{
    int id;
    string pName;
    double price;

    
    //
    //* your code
    void getProductInfo(){
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << pName << endl;
        cout << "Product Price: $" << price << endl;
    }
    
    
};