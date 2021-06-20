#include <string>

class Invoice
	{
		public:
			Invoice(std::string partNumber, std::string partDescription, int numberOfItemPurchased, int pricePerItem, double VAT, double discountRate)
				: name{partNumber}, price{pricePerItem}
					{	
					vat = VAT;
					rate = discountRate;
					
					}
			
			void setPartNumber(std::string partNumber)
				{
					name = partNumber;
				}
			std::string getPartNumber() const
 				{
					return name;
				}
			
			void setPartDescription(std::string partDescription)
				{
					description = partDescription;
				}
			
			std::string getPartDescription()
				{
					return description; 
				}
			void setNumberOfItemsPurchased(int numberOfItemsPurchased)
				{
					number = numberOfItemsPurchased; 
				}
			int getNumberOfItemsPurchased()
				{
					return number;
				}
			void setPricePerItem(int pricePerItem)
				{
					price = pricePerItem;
				}
			int getPricePerItem()
				{
					return price;
				}
		
		
		private:
			std::string name;
			std::string description;
		    int number;
		    int price;
		    double vat, rate;
	}; 
