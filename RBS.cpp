#include <iostream>
#include <string>
using namespace std;

struct About {
    string name;
    string adrs;
};

int main() {
    About s[10];

    int i = 1, num, a, b, n, y, price, gst = 0, total = 0, quant = 0;
    string ch;

    cout << "\n                        ____________ *Menu Card*  _________________\n\n";

    cout << "\n                          1) Cold-drinks(200ml)  - 25rs\n\n"
         << "                2) Pizza        - 200rs        9) Burger       - 100rs\n\n"
         << "                3) Sandwich    - 60rs         10) Chicken_65   - 60rs \n\n"
         << "                4) Pasta        - 40rs         11) Noodles      - 60rs\n\n"
         << "                5) Misal_pav    - 50rs         12) Pav_Bhaji    - 85rs\n\n"
         << "                6) Chicken_Rice  - 80rs        13) Soup         - 45rs\n\n"
         << "                7) Samosa       - 30rs         14) Dosa         - 60rs\n\n"
         << "                8) Salad        - 50rs         15) Paneer_Masala -120rs\n ";

    cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

    cout << "\n CUSTOMER INFORMATION :\n ";
    cout << "\n Customer Name: ";
    cin >> s[1].name;

    cout << "\n Customer Address: ";
    cin >> s[1].adrs;
    cout << "\n ******************************************************************************* \n\n";

    cout << "\n Enter the name of items: ";
    cin >> ch;

    cout << "\n Enter the number of item: ";
    cin >> n;

    cout << "\n Enter the Quantity of items: ";
    cin >> quant;

    switch (n) {
        case 1:
            n = 25;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 2:
            n = 200;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 3:
            n = 60;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 4:
            n = 40;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 5:
            n = 50;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 6:
            n = 80;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 7:
            n = 30;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 8:
            n = 50;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 9:
            n = 100;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 10:
            n = 60;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 11:
            n = 60;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 12:
            n = 85;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 13:
            n = 45;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 14:
            n = 60;
            gst = (n / 100) * 18;
            total = n + gst;
            break;

        case 15:
            n = 120;
            gst = (n / 100) * 18;
            total = n + gst;
            break;
    }
    cout << "\n\n |***************************** Lovely Restaurants *******************************|\n";

    cout << "\n customer name: " << s[1].name << endl;

    cout << "\n customer address: " << s[1].adrs << endl;

    cout << "\n  Item       Quantity    Price     Gst     Total\n";
    cout << "\n  " << ch << "         " << quant << "          " << n << "      " << gst << "        " << total * quant << " \n";

    cout << "\n\n |********************************************************************************|\n";

    cout << "\nThank you! do visit again\n";

    return 0;
}

