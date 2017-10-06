//
//  main.cpp
//  PRG-3-8-How-Many-Widgets
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
//  Write a program that calculates how many widgets are stacked on a pallet, based on
//  the total weight of the pallet. The program should ask the user how much the pallet
//  weighs by itself and with the widgets stacked on it. It should then calculate and display
//  the number of widgets stacked on the pallet.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare constant
    const float FLT_WEIGHT_WIDGET_FIXED = 12.5f;
    
    // Declare variables
    float fltWeightWidgetTotal,
          fltWeightPalletAndWidgets,
          fltWeightPallet,
          fltTotalWidgets;
    
    cout << "Please enter the weight of the pallet alone:" << endl;
    cin >> fltWeightPallet;
    while(!cin || fltWeightPallet < 0.0f || fltWeightPallet > 1000.0f)
    {
        cout << "Please enter a weight between 0 and 1,000:\n";
        cin.clear();
        cin.ignore();
        cin >> fltWeightPallet;
    }
    
    cout << "Please enter the total weight of the pallet and widgets:" << endl;
    cin >> fltWeightPalletAndWidgets;
    while(!cin || fltWeightPalletAndWidgets < 0.0f || fltWeightPalletAndWidgets > 10000.0f)
    {
        cout << "Please enter a weight between 0 and 10,000:\n";
        cin.clear();
        cin.ignore();
        cin >> fltWeightPalletAndWidgets;
    }
    
    // Calculate widget weight alone
    fltWeightWidgetTotal = fltWeightPalletAndWidgets - fltWeightPallet;
    
    // Calculate number of widgets on the pallet
    fltTotalWidgets = fltWeightWidgetTotal / FLT_WEIGHT_WIDGET_FIXED;
    
    // Configure decimal for single point of precision
    cout << setprecision(1) << fixed << showpoint;
    
    // Output calculated number of widgets to console
    cout << "The total number of widgets on the pallet is:\n" << fltTotalWidgets << endl;
    
    return 0;
}


