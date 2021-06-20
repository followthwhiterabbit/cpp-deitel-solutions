// function template maximum for two arguments

template <typename T>

T maximum(T value1, T value2)
	{
		T maximumValue = value1; 
		
		if (value2 > maximumValue)
			maximumValue = value2; 
			
		return maximumValue; 
		
		
	}
