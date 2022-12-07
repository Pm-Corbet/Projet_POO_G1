#pragma once
#include "CLmapStaff.h"
#include "CLmapAddress.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesStaff
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapStaff^ oMappStaff;
		NS_Comp_Mappage::CLmapAddress^ oMappAddress;
	public:
		CLservicesStaff(void);
		System::Data::DataSet^ selectionnerToutLesStaff(System::String^);
		void retirerStaff(System::String^ dataTableName, System::String^ phone, System::String^ email);
		void ajouterStaff(System::String^ dataTableName, System::String^ first_name, System::String^ last_name, System::String^ phone, System::String^ email, System::String^ hiring_date, System::String^ number, System::String^ street_name, System::String^ zipcode, System::String^ city, System::String^ country, System::String^ complement);
	};
}