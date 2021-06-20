// computer-assisted-instruction 
#include <iostream>
#include <ctime>
using namespace std;

int produceQuestion()
	{
		int randnum1, randnum2, res; 
		srand(time(0)); // seeding random number generator
		randnum1 = rand() % 9 + 1; 
		randnum2 = rand() % 9 + 1; 
		
		cout << "How much is " << randnum1 << " times " << randnum2 << " : "; 
		
		res = randnum1 * randnum2; 
		
		return res; 
		
	}
	
void message()
	{
		int random_num; 
		srand(time(0)); 
		random_num = rand() % 4 + 1; 

		switch(random_num)
			{
				case 1:
					cout << "Very good!"; 
					break; 
				case 2:
					cout << "Excellent!"; 
					break;  
				case 3:
					cout << "Nice work!"; 
					break;  
				case 4:
					cout << "Keep up the good work!"; 
					break;  
				
			}

	
	}	
	
	
void lossMessage()
	{
		
		int rand_num; 
		srand(time(0)); 
		rand_num = rand() % 4 + 1; 
		
			switch(rand_num)
			{
				case 1:
					cout << "No. Please try again."; 
					break; 
				case 2:
					cout << "Wrong. Try once more."; 
					break;  
				case 3:
					cout << "Don't give up!"; 
					break;  
				case 4:
					cout << "No. Keep trying."; 
					break;  
				
			}
		
		
		
		
		
	}



int main()
	{
		
		
		
		
		cout << "Type the correct result then press Enter(to quit press -1):  "; 
		int guessedresult, result, TrueAns, FalseAns;  
		
		TrueAns = 0; 
		FalseAns = 0; 
		
		do
		{
		
		result = produceQuestion(); 
		
		label:
			
		cin >> guessedresult; 
		
		if (result == guessedresult)
			{
			cout << endl; 
			message(); 
			TrueAns++; 
			
			continue; 
			}
		else
			{
			cout << endl; 
			lossMessage(); 
			FalseAns++; 
			goto label; 		
			}

		}while(result != -1 && (TrueAns + FalseAns < 10)); 
		
		cout << "true : " << TrueAns << " false : " << FalseAns << endl;  
		cout << "student performance: " << (TrueAns) * 10; 
		
		
		
		
	}
