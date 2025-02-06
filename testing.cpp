#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int prod_output;
int prodOne;
int prodTwo;
int additive = 1;
int sum_output;

int main(void)
    { 
        for (int i = 1; i < 1000; i++)
        { 
            for (int j = 1; j < 1000; j++)
            {
                prodOne = (j+additive)*(j+additive);
                prodTwo = j * j;
                prod_output = prodOne - prodTwo;
                sum_output = ((j + j+additive)*additive);
                if (prod_output != sum_output)
                {
                    cout << "anomaly detected" << endl << "product: " << prod_output << endl << "sum: " << sum_output;
                    exit(0);
                }
            }
            additive+= 1;
            if (i >= 999)
            {
                cout << "testing complete";
            }
        }
    return 0;
    }