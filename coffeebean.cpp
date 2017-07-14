#include <iostream>
#include <string>

using namespace std;

struct CoffeeBean
{
    string name;
    string country;
    int strength;
};

int main()
{
    CoffeeBean myBean = {"Strata", "Columbia", 5};
    CoffeeBean hisBean;
    hisBean.name = "Flora";
    hisBean.country = "Mexico";
    hisBean.strength = 2;

    cout << "His bean is from " << hisBean.country << " and is a " << hisBean.strength << "." << endl;
}
