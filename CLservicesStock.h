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
		/*
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^);
		void retirerUnePersonne(System::String^);
		void modifierUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);*/
	};
}