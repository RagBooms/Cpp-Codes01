#include <iostream>
#include <map>
using namespace std;

map<string, map<string, double>> items;

void products() {
  items["Book"]["1984"] = 150;
  items["Book"]["Ikigai"] = 250;
  items["Soap"]["Cinthol"] = 50;
  items["Soap"]["Lux"] = 40;
  items["Bag"]["Skybags"] = 500;
  items["Bag"]["American Tourister"] = 650;
}

void purchase(string category, string type) {
  if (items.find(category) != items.end() && items[category].find(type) != items[category].end()) {
    cout << "You have purchased " << type << " in " << category << " for Rs. " << items[category][type] << endl;
  } else {
    cout << "Invalid Selection!! Item not available..." << endl;
  }
}

int main() {
  products();
  cout << "Welcome to our shop!\n";
  bool continueShopping = true;

  while (continueShopping) {
    cout << "Available Products:\n";
    for (const auto& category : items) {
      cout << category.first << ":\n";
      for (const auto& item : category.second) {
        cout << "- " << item.first << " Price: " << item.second << endl;
      }
    }

    // Consider implementing a search or menu-driven selection here

    string category, type;
    cout << "Enter the category and type you want to purchase: ";
    cin >> category >> type;
    purchase(category, type);

    char choice;
    cout << "Do you want to continue shopping? (y/n): ";
    cin >> choice;
    continueShopping = (choice == 'y' || choice == 'Y');
  }
  cout << "Thanks for shopping with us!" << endl;
}