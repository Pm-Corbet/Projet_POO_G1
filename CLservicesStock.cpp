#include "pch.h"
#include "CLservicesStock.h"

NS_Comp_Svc::CLservicesStock::CLservicesStock(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappStock = gcnew NS_Comp_Mappage::CLmapStock();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesStock::selectionnerToutLesStocks(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStock->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservicesStock::retirerStock(System::String^ dataTableName, System::String^ id_item)
{
	System::String^ sql;

	this->oMappStock->setIdItem(id_item);

	sql = this->oMappStock->Delete();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservicesStock::ajouterStock(System::String^ dataTableName, System::String^ name, System::String^ HT_price, System::String^ TVA_rate, System::String^ quantity)
{
	System::String^ sql;

	this->oMappStock->setName(name);
	this->oMappStock->setHT_price(HT_price);
	this->oMappStock->setTVA_rate(TVA_rate);
	
	sql = this->oMappStock->InsertInfosItem();
	this->oCad->actionRows(sql);
	
	for (size_t i = 0; i < int::Parse(quantity); i++)
	{
		sql = this->oMappStock->Insert();
		this->oCad->actionRows(sql);
	
		sql = this->oMappStock->InsertPrice();
		this->oCad->actionRows(sql);
	
		sql = this->oMappStock->link_cost();
		this->oCad->actionRows(sql);
	}
	
}

