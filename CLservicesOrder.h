#pragma once
#include "CLmapOrder.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesOrder
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapOrder^ oMappOrder;
	public:
		CLservicesOrder(void);
		System::Data::DataSet^ selectionnerToutLesCommandes(System::String^);
		System::Data::DataSet^ rechercherCommande(System::String^ dataTableName, System::String^ reference, System::String^ phone, System::String^ email, System::String^ delivery_datetime, System::String^ emission_datetime, System::String^ payment_number, System::String^ total_amount, System::String^ name, System::String^ is_enabled);
		void supprimerCommande(System::String^ dataTableName, System::String^ reference);
	};
}