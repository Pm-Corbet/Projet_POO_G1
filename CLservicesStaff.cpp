#include "pch.h"
#include "CLservicesStaff.h"
#include "CLservicesAddress.h"

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
void NS_Comp_Svc::CLservicesStaff::ajouterStaff(System::String^ dataTableName, System::String^ first_name, System::String^ last_name, System::String^ phone, System::String^ email, System::String^ hiring_date, System::String^ number, System::String^ street_name, System::String^ zipcode, System::String^ city, System::String^ country, System::String^ complement)
{
	System::String^ sql;

	this->oMappStaff->setPhone(phone);
	this->oMappStaff->setEmail(email);
	this->oMappStaff->setFirstName(first_name);
	this->oMappStaff->setLastName(last_name);
	this->oMappStaff->setHiringDate(hiring_date);
	this->oMappStaff->setNumber(number);
	this->oMappStaff->setStreetName(street_name);
	this->oMappStaff->setZipcode(zipcode);
	this->oMappStaff->setCity(city);
	this->oMappStaff->setCountry(country);
	this->oMappStaff->setComplement(complement);

	sql = this->oMappAddress->insertCountry(country);
	this->oCad->actionRows(sql);

	sql = this->oMappAddress->insertStreetName(street_name);
	this->oCad->actionRows(sql);

	sql = this->oMappAddress->insertZipcode(zipcode);
	this->oCad->actionRows(sql);

	sql = this->oMappAddress->insertCity(city);
	this->oCad->actionRows(sql);

	sql = this->oMappAddress->insertAddress(number, complement, street_name, city, zipcode, country);
	this->oCad->actionRows(sql);

	sql = this->oMappStaff->Insert();
	this->oCad->actionRows(sql);
}
