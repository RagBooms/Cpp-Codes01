//E-commerce Platform management
#include<iostream>
#include<map>
using namespace std;

map<string, map<string, double>> items;

void products(){
    items["Book"]["1984"] = 150;
    items["Book"]["Ikigai"] = 250;
    items["Soap"]["Cinthol"] = 40;
    items["Soap"]["Lux"] = 50;
    items["Soap"]["Rux"] = 50;
    items["Bags"]["Skybag"]=500;
}

void purchase(const string& category, const string& type){
    if(items.find(category) != items.end() && items[category].find(type) != items[category].end()){
        cout<<"You have purchased "<< type <<" in "<< category << " for Rs. "<< items[category][type] << endl;
    }
    else
    cout<<"Invalid Selection! Item not available.....";
}

int main(){
    products();
    cout<<"Welcome to our shop!\n";
    bool continueShopping = true;
    while(continueShopping){
        
        cout<<"Available Products:\n";
        for(const auto& category : items){
            cout<< category.first << ":\n";
            for(const auto& type: category.second){
                cout<<"- "<<type.first<<"Price: "<<type.second<<endl;
            }
        }
        
        string category, type;
        cout<<"Enter the category and model you want to purchase: ";
        cin>>category>>type;
        purchase(category,type);
        
            char choice;
        cout<<"Do you want to continue shopping? (y/n): ";
        cin>>choice;
        continueShopping = (choice=='y'||choice=='Y');
    }
    cout<<"Thank you for shopping with us!"<<endl;
    return 0;
}