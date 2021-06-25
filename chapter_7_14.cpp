// Duplicate elimination with vector
// Reimplement Exercise 7.13 using a vector. Begin with an empty vector 
// and use its push_back function to add each unique value to the vector 

#include <iostream> 
#include <vector> 

using namespace std;


int main()
    {
        vector<int> v{}; 

        cout << "Enter 20 numbers between [10 - 100]: \n" << endl; 

        for (size_t i{0}; i < 20; ++i)
            {
                int number; 

                do
                {
                    cout << "Number " << i + 1 << ": "; 

                    cin >> number; 

                }while(number < 10 || number > 100); // it's gonna be true if one 
                                                     // of these is true 

                bool skip{false}; // if we read the value from the user 
                                  // we will make the skip value false 

                for (size_t j{0}; j < v.size(); j++)
                    {
                        if (v[j] == number)
                            {
                                skip = true; 
                                break; // we break the inner for if skip is true 
                            }


                    }
                    

                if(!skip)
                    v.push_back(number); 


            }


    cout << "the elements of the vector are : \n"; 

    for (const int element : v)
        cout << element << ' '; 


    cout << endl; 


return 0; 


}












