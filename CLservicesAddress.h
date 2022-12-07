#pragma once
#include "CLmapAddress.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesAddress
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapAddress^ oMappAddress;
	public:
		CLservicesAddress(void);
		void addAddress(System::String^ dataTableName, System::String^ number, System::String^ street_name, System::String^ city, System::String^ zipcode, System::String^ country, System::String^ complement);
	};
}