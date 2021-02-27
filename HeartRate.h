#include <string>

class HeartRates{


		private:
	
	
			std::string First;
			
			std::string Last;
		
			std::string DOB;


		public:

			
			HeartRates(const std::string &FullName,const std::string &DateOfBirth);
			


			std::string setDateOfBirth();
																					

			std::string setFirstName();
																							

				
			std::string setLastName();


			std::string DOBindex(std::string givenDOB);

			void NameFormat(std::string &First,std::string &Last,std::string Full);

			int getAge();
																			



																												std::string getTargetHeartRate(int HRmax);																	
	
																												int getMaximumHeartRate(int ge);
																														
};
