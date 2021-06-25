// (Two-Dimensional array Initialization)
// label the elements of 3-by-5 two dimensional array sales to indicate the order
// in which they're set to zero by the following program segment:

#include <iostream>
#include <array> 


using namespace std; 



int main()
    {
        
        const auto rows = 3; 
        const auto columns = 5; 


        array<array<int, columns>, rows> sales{}; 

        cout << sales.size() << endl; 



        for(size_t row{0}; row < sales.size(); row++)
            for(size_t column{0}; column < sales[row].size(); column++)
                cin >> sales[row][column]; 





        for (auto const& row : sales)
        {

        
            for(auto const& element : row)
                {
                    cout << element << " "; 
                }

            cout << endl; 

        }




    }