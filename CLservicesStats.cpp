#include "pch.h"
#include "CLservicesStats.h"

NS_Comp_Svc::CLservicesStats::CLservicesStats(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappStats = gcnew NS_Comp_Mappage::CLmapStats;
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesStats::calculerTop10(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->top10();
	
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservicesStats::calculerPanierMoyen(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->avgPanier();

	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesStats::calculerAlerteStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->alerteStock();

	return this->oCad->getRows(sql, dataTableName);
}

