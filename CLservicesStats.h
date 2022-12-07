#pragma once
#include "CLmapStats.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesStats
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapStats^ oMappStats;
	public:
		CLservicesStats(void);
		System::Data::DataSet^ calculerTop10(System::String^);
		System::Data::DataSet^ calculerPanierMoyen(System::String^);
		System::Data::DataSet^ calculerAlerteStock(System::String^);
		System::Data::DataSet^ calculerPrixAchat(System::String^);
		System::Data::DataSet^ simulerPrix(System::String^ dataTableName, System::String^ tva, System::String^ marge, System::String^ remise, System::String^ demarque);
		System::Data::DataSet^ calculerTotalAmountClient(System::String^);
	};
}