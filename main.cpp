#include <string>
#include "Heart_Rate.cpp"

int main(){

		int MaxHR,AgeVal;
	
		std::string DateofBirth,TargetHR,NAME;
		std::cout<<std::endl;
		std::cout<<"Heart Rate Calculator"<<std::endl;


		std::cout<<"Please use the following name format:  First Last"<<std::endl;
		std::cout<<"PLease enter First and Last name"<<std::endl;
		getline(std::cin,NAME);


		std::cout<<"Please use the following birthday format:  MM.DD.YYYY or MM,DD,YYYY or MM DD YYYY"<<std::endl;
		std::cout<<" Enter Date of Birth"<<std::endl;
		getline(std::cin,DateofBirth);

		HeartRates SENDinfo(NAME,DateofBirth);


		std::cout<<"Hello:"<<std::endl;
		std::cout<<"First Name: "<<SENDinfo.setFirstName()<<std::endl;
		std::cout<<"Last Name:  "<<SENDinfo.setLastName()<<std::endl;
		std::cout<<"Date of Birth: "<<SENDinfo.setDateOfBirth()<<std::endl;

		AgeVal = SENDinfo.getAge();
		
		MaxHR = SENDinfo.getMaximumHeartRate(AgeVal);
		std::cout<<"Max Heartrate: "<<MaxHR<<std::endl;
		
		TargetHR = SENDinfo.getTargetHeartRate(MaxHR);
		std::cout<<"Target Heart Rate: "<<TargetHR<<std::endl; 


		
		return 0;

}
