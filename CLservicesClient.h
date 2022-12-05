#pragma once
#include "CLmapClients.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesClient
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservicesClient(void);
		System::Data::DataSet^ selectionnerToutLesClients(System::String^);
		/*
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^);
		void retirerUnePersonne(System::String^);
		void modifierUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);*/
	};
}