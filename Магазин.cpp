#include <iostream>
#include <string>
using namespace std;
int main() {
  int price1 = 20;
  string productname1 = "Хліб";

  int price2 = 45;
  string productname2 = "Яблука";
  
  int price3 = 36;
  string productname3 = "Йогурт";
  
  int price4 = 160;
  string productname4 = "Сир";

  int price5 = 200;
  string productname5 = "Мʼясо";
  
  cout << "Продукт: " << productname1 << ", Ціна " << price1 << " грн." << endl;
  cout << "Продукт: " << productname2 << ", Ціна " << price2 << " грн." << endl;
  cout << "Продукт: " << productname3 << ", Ціна " << price3 << " грн." << endl;
  cout << "Продукт: " << productname4 << ", Ціна " << price4 << " грн." << endl;
  cout << "Продукт: " << productname5 << ", Ціна " << price5 << " грн." << endl;
  return 0;
}