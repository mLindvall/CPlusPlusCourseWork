//   This program tracks the inventory of three widget stores
//   that opened at the same time. Each store started with the
//   same number of widgets in inventory. By subtracting the
//   number of widgets each store has sold from its inventory,
//   the current inventory can be calculated.

#include <iostream.h>

void main(void)
{
     int begInv, sold, store1, store2, store3;

     cout << "One week ago, 3 new widget stores opened\n";
     cout << "at the same time with the same beginning\n";
     cout << "inventory. What was the beginning inventory? ";
     cin >> begInv;
     store1 = store2 = store3 = begInv;
     cout << "How many widgets has store 1 sold? ";
     cin >> sold;
     store1 = store1 - sold; // Subtract sold from store1
     cout << "How many widgets has store 2 sold? ";
     cin >> sold;
     store2 = store2 - sold; // Subtract sold form store2
     cout << "How many widgets has store 3 sold? ";
     cin >> sold;
     store3 = store3 - sold; // Subtract sold form store3
     cout << "\nThe current inventory of each store:\n\n";
     cout << "Store 1: " << store1 << endl;
     cout << "Store 2: " << store2 << endl;
     cout << "Store 3: " << store3 << endl;
}
