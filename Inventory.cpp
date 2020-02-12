#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cout;
// This is the constructor that intializes the name, price, and count  
Inventory::Inventory(string name, float price, int count) 
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}
// This member function will decrement the stock by one. It will not allow you to sell an item if its less than zero
void Inventory::sell() // 
{
	if (m_in_stock > 0)
	{
		m_in_stock--;
	}
	else
	{
		cout << "Sorry, that item is out of stock" << "\n";
	}  
}
// This overloads the price on the inenvtory item by setting the precision of decimals to 2
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}