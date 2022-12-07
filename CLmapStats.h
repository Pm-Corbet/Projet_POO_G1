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
	};
}