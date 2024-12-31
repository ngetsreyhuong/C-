
#include <iostream>
#include <vector>
#include "service/logic.hpp"
#include "model/user.hpp"
#include "service/product_service.hpp"

using namespace std;

int main(){
    int a = 2, b= 4;
    swapFromLogic(a,b);
    
    cout<<"\n****** Print values of A and B ******"<<endl;
    cout<<"A:"<<a<<endl;
    cout<<"B: "<<b<<endl;

    User user;
    user.setId(9);
    user.setName("Huong");
    user.setEmail("kaihuong92@gmail.com");
    user.setPassword("123456789H");
    user.getUserInfo();

    //call func pro service
    Product p1 = {1, "Cola", 0.50};
    Product p2 ={2, "Pepsi", 0.75};
    addProduct(p1);
    addProduct(p2);
    vector<Product>products = getAllProducts();
    cout<<"All Product: \n";
    for(Product p: productRepository){
        p.getProductInfo();
        cout<<"===========================\n";
    }
    cout<<"Insert Product id to delete: ";
    int id; cin>>id;
    deleteProductById(id);
        cout<<"All product after deleted: "<<endl;


    //Product productRepository;
    

    
}
