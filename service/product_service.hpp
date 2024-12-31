
#include "../repository/product_repository.hpp"
vector<Product> getAllProducts(){
    return productRepository;
}
Product addProduct(Product p){
    productRepository.push_back(p);
    cout<<"Product "<<p.pName<<"has been added successfully."<<endl;
    return p;
    /** your code here */
}
Product getProductById(int id){
    for(Product p: productRepository){
        if(p.id==id){
            return p;
        }
    }
    return {};
}
bool deleteProductById(int id){
    for(int i=0; i<productRepository.size(); i++){
        if(productRepository[i].id==id){
            productRepository.erase(productRepository.begin()+i);
            cout<<"\n[+] Product with ID "<<id<<" deleted successfully."<<endl;
            return true;
        }
    }
    return false;
    /** your code here */
}
















