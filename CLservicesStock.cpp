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

