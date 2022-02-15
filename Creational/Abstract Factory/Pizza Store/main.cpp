#include "PizzaStores.h"

int main()
{
     PizzaStore *nyStore = new NYPizzaStore();
     PizzaStore *chicagoStore = new ChicagoPizzaStore();

       Pizza *pizza = nyStore->orderPizza("cheese");
       cout << "Ethan ordered a " << pizza->getName() << "\n"
            << endl;

     Pizza *pizza2 = chicagoStore->orderPizza("cheese");
     cout << "Joel ordered a " << pizza2->getName() << "\n"
          << endl;
};