#pragma once
#include "CLmapStaff.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesStaff
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapStaff^ oMappStaff;
	public:
		CLservicesStaff(void);
		System::Data::DataSet^ selectionnerToutLesStaff(System::String^);
		void retirerStaff(System::String^ dataTableName, System::String^ phone, System::String^ email);
	};
}