#include "pch.h"
#include "CLservicesStaff.h"

NS_Comp_Svc::CLservicesStaff::CLservicesStaff(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappStaff = gcnew NS_Comp_Mappage::CLmapStaff;
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesStaff::selectionnerToutLesStaff(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStaff->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservicesStaff::retirerStaff(System::String^ dataTableName, System::String^ phone, System::String^ email)
{
	System::String^ sql;

	this->oMappStaff->setPhone(phone);
	this->oMappStaff->setEmail(email);

	sql = this->oMappStaff->Delete();
	this->oCad->actionRows(sql);
}
