//* cpp qs 2 *//
/* [Enter cost of 3 items from user (using float data type) , {Items = a pen,a pencil , an eraser } 
You have to output the total cost of the items back to the user as the bill. 
Add on : You Can also try adding 18% GST tax to the items in the bill. ]*/
#include <iostream>
using namespace std;
int main() {
    float pen, pencil, eraser;
    cout << "Enter the cost of a pen: ";
    cin >> pen;
    cout << "Enter the cost of a pencil: ";
    cin >> pencil;
    cout << "Enter the cost of an eraser: ";
    cin >> eraser;

    float totalCost = pen + pencil + eraser;
    float gst = totalCost * 0.18; // 18% GST
    float totalBill = totalCost + gst;

    cout << "Total cost of items: " << totalCost << endl;
    cout << "GST (18%): " << gst << endl;
    cout << "Total bill (including GST): " << totalBill << endl;

    return 0;
}
