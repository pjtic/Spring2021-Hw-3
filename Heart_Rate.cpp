#include <iostream>
#include <sstream>
#include <string>
#include "HeartRate.h"

HeartRates::HeartRates(const std::string &Full,const std::string &DateOfBirth){

		NameFormat(this->First,this->Last,Full);
		this->DOB=DOBindex(DateOfBirth);
		

}


std::string HeartRates::DOBindex(std::string givenDOB){

	for(int k=0;k<givenDOB.length();k++){
		if(givenDOB[k]==' '|| givenDOB[k]=='.'|| givenDOB[k]== ',' ){
			givenDOB[k] = '/';
		}	
	}

	return givenDOB;
}


void HeartRates::NameFormat(std::string &NameFirst,std::string &NameLast,std::string Full){

		int j=0;
		for(j=0;j<Full.length();j++){
			if(Full[j]==' '||Full[j]=='.'|| Full[j]== ',' )
			break;
		}

		NameFirst = Full.substr(0,j);
		NameLast = Full.substr(j+1);
}

std::string HeartRates::setFirstName(){

		return First;
}
std::string HeartRates::setLastName(){

		return Last;
}
std::string HeartRates::setDateOfBirth(){

		return DOB;
}

int HeartRates::getAge(){

		int cnt=0;
		int i;
		int Today,Year;
		std::string Birth=this->DOB;
		std::string Date;

		std::cout<<"What is the date today?"<<std::endl;
		getline(std::cin,Date);

		for(i=0;i<Date.length();i++){
			if (Date[i]==' '||Date[i]==','|| Date[i]=='.'){
			
				cnt++;
			}	

			if(cnt==2){	

			break;		
			}	
      		}			
				
		std::stringstream year(Date.substr(i+1));
		
		cnt =0;

		year>>Today;

		


		for (i=0;i<Birth.length();i++){

			if(Birth[i]=='/'){

				cnt++;

			}
			if(cnt==2){
				break;
				
			}


		}


		std::stringstream YearSet(Birth.substr(i+1));
		YearSet>>Year;		
		return Today-Year;
}

int HeartRates::getMaximumHeartRate(int ge){

		return (220-ge);

}

std::string HeartRates::getTargetHeartRate(int HRmax){

	        int low;
		int high;
		std::stringstream LowR,HighR;				
		low=0.50*(HRmax);
		high=0.85*(HRmax);
		LowR<<low;
		HighR<<high;
		
		std::string HRlow = LowR.str();			
		std::string HRhigh = HighR.str();

		
		return "Range is: " +HRlow+ "----" +HRhigh;


}
