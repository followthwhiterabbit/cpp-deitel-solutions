// duplicate elimination with array
 #include <iostream>
 #include <array>

 using namespace std; 


 int main()
{
    const int array_size{20}; // array size for the worst case

    array<int, array_size> arr{}; 

    bool skip{false}; 




    for(auto i{0}; i < arr.size(); i++)
        {
            int number; 
    
            do 
            {
            
            cout << "Number " << i + 1 << ": "; 

            cin >> number;
                  

            }while(number < 10 || number > 100);   
            

            for(auto j{0}; j < i; j++)          
                if (number == arr[j])
                {
                skip = true; 
                break; 
                }
           

            if (!skip)
                {
                    arr[i] = number; 
                }

        }

     

cout << "unique values are: " << endl; 

for (const int& item : arr)
    if ( item )
        cout << item << " "; 





cout << endl; 


return 0; 

} 


