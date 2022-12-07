#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapStats
	{
	private:
		System::String^ sSql;

	public:
		System::String^ top10(void);
		System::String^ avgPanier(void);
		System::String^ alerteStock(void);
		System::String^ prixAchat(void);
		System::String^ simulationPrix(System::String^ tva, System::String^ marge, System::String^ remise, System::String^ demarque);
		System::String^ totalAmountClient(void);
		System::String^ resultMonth(System::String^ month, System::String^ year);
	};
}