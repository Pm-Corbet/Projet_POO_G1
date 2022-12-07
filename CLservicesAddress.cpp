#include "pch.h"
#include "CLservicesAddress.h"

NS_Comp_Svc::CLservicesAddress::CLservicesAddress(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappAddress = gcnew NS_Comp_Mappage::CLmapAddress();
}
void NS_Comp_Svc::CLservicesAddress::addAddress(System::String^ dataTableName, System::String^ number, System::String^ street_name, System::String^ city, System::String^ zipcode, System::String^ country, System::String^ complement)
{
	System::String^ sql;

	this->oMappAddress->setNumber(number);
	this->oMappAddress->setStreetName(street_name);
	this->oMappAddress->setZipcode(zipcode);
	this->oMappAddress->setCity(city);
	this->oMappAddress->setCountry(country);

	sql = this->oMappAddress->insertCity(city);
	sql = this->oMappAddress->insertStreetName(street_name);
	sql = this->oMappAddress->insertCountry(country);
	sql = this->oMappAddress->insertZipcode(zipcode);
	sql = this->oMappAddress->insertAddress(number, complement, street_name, city, zipcode, country);	
}