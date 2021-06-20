#include <iostream>

using namespace std;

int main ()
	{
		cout << "#########" << endl;
		
						for(int k = 1;k <= 4; k++)
							{
								if(k == 1)
									{
										cout << "#"; 
										for(int l = 7; l >= 1; l--)
											cout << "*"; 
										cout << "#"; 
										cout << endl;
									}
									
								if(k == 2)
									{	
										cout << "#"; 
										cout << " "; 
										for(int l = 5; l >=1; l--)
											cout << "*";
										cout << " ";  
										cout << "#"; 	
										cout << endl;
									}
								if(k == 3)
									{	
										cout << "#"; 
										cout << "  ";
										for(int l = 3; l >=1; l--)
											cout << "*";
										cout << "  ";  
										cout << "#";  
										cout << endl;
										
									}
								if(k == 4)
									{	
										cout << "#"; 
										cout << "   ";
										for(int l = 1; l >=1; l--)
											cout << "*";
										cout << "   ";  
										cout << "#"; 
										cout << endl;
									
									}
								
								
							}
						
						for(int k = 2;k <= 4; k++)
							{

								if(k == 2)
									{	
										cout << "#";  
										cout << "  "; 
										for(int l = 3; l >=1; l--)
											cout << "*";
										cout << "  ";
										cout << "#";  	
										cout << endl;
									}
								if(k == 3)
									{	 
										cout << "#"; 
										cout << " ";
										for(int l = 5; l >=1; l--)
											cout << "*";
										cout << " ";  
										cout << "#"; 
										cout << endl;
										
									}
								if(k == 4)
									{	
										cout << "#"; 
										for(int l = 7; l >=1; l--)
											cout << "*";
										cout << "";  
										cout << "#"; 
										cout << endl;
									
									}
						
						
						
					}
				
				cout << "#########"; 
				
				
				
			
		
		
	
}
