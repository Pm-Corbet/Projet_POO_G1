#pragma once
#include "CLmapStock.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesStock
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapStock^ oMappStock;
	public:
		CLservicesStock(void);
		System::Data::DataSet^ selectionnerToutLesStocks(System::String^);
		void retirerStock(System::String^, System::String^);
		void ajouterStock(System::String^ dataTableName, System::String^ name, System::String^ HT_price, System::String^ TVA_rate, System::String^ quantity);
	};
}