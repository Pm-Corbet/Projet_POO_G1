#pragma once
#include "CLmapClients.h"
#include "CLmapAddress.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesClient
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapClient^ oMappClient;
		NS_Comp_Mappage::CLmapAddress^ oMappAddress;
	public:
		CLservicesClient(void);
		System::Data::DataSet^ selectionnerToutLesClients(System::String^);
		System::Data::DataSet^ rechercherClient(System::String^ dataTableName, System::String^ first_name, System::String^ last_name, System::String^ phone, System::String^ email, System::String^ date_of_birth, System::String^ number, System::String^ street_name, System::String^ zipcode, System::String^ city, System::String^ country);
		void ajouterClient(System::String^ dataTableName, System::String^ type, System::String^ first_name, System::String^ last_name, System::String^ phone, System::String^ email, System::String^ date_of_birth, System::String^ number, System::String^ street_name, System::String^ zipcode, System::String^ city, System::String^ country, System::String^ complement);
		void retirerClient(System::String^ dataTableName, System::String^ phone, System::String^ email);
		void modifierClient(System::String^ dataTableName, System::String^ phone, System::String^ email);
	};
}