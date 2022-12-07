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
System::Data::DataSet^ NS_Comp_Svc::CLservicesStats::calculerPrixAchat(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->prixAchat();

	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesStats::simulerPrix(System::String^ dataTableName, System::String^ tva, System::String^ marge, System::String^ remise, System::String^ demarque)
{
	System::String^ sql;

	sql = this->oMappStats->simulationPrix(tva, marge, remise, demarque);

	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesStats::calculerTotalAmountClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->totalAmountClient();

	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesStats::calculerChiffreAffaireMois(System::String^ dataTableName, System::String^ month, System::String^ year)
{
	System::String^ sql;

	sql = this->oMappStats->resultMonth(month, year);

	return this->oCad->getRows(sql, dataTableName);
}


