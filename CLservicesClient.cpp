#include "pch.h"
#include "CLservicesClient.h"
#include "CLservicesAddress.h"
#include <iostream>
using namespace std;

NS_Comp_Svc::CLservicesClient::CLservicesClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesClient::selectionnerToutLesClients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesClient::rechercherClient(System::String^ dataTableName, System::String^ first_name, System::String^ last_name, System::String^ phone, System::String^ email, System::String^ date_of_birth, System::String^ number, System::String^ street_name, System::String^ zipcode, System::String^ city, System::String^ country)
{
	System::String^ sql;

	this->oMappClient->setPhone(phone);
	this->oMappClient->setEmail(email);
	this->oMappClient->setFirstName(first_name);
	this->oMappClient->setLastName(last_name);
	this->oMappClient->setDateOfBirth(date_of_birth);
	this->oMappClient->setNumber(number);
	this->oMappClient->setStreetName(street_name);
	this->oMappClient->setZipcode(zipcode);
	this->oMappClient->setCity(city);
	this->oMappClient->setCountry(country);

	sql = this->oMappClient->Find();

	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservicesClient::ajouterClient(System::String^ dataTableName, System::String^ type, System::String^ first_name, System::String^ last_name, System::String^ phone, System::String^ email, System::String^ date_of_birth, System::String^ number, System::String^ street_name, System::String^ zipcode, System::String^ city, System::String^ country, System::String^ complement)
{
	System::String^ sql;

	this->oMappClient->setPhone(phone);
	this->oMappClient->setEmail(email);
	this->oMappClient->setFirstName(first_name);
	this->oMappClient->setLastName(last_name);
	this->oMappClient->setDateOfBirth(date_of_birth);
	this->oMappClient->setNumber(number);
	this->oMappClient->setStreetName(street_name);
	this->oMappClient->setZipcode(zipcode);
	this->oMappClient->setCity(city);
	this->oMappClient->setCountry(country);
	
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
	
	sql = this->oMappClient->Insert();
	this->oCad->actionRows(sql);

	sql = this->oMappAddress->linkAddressToClient(type, first_name, last_name, phone, email, date_of_birth, number, complement, street_name, city, zipcode, country);
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservicesClient::modifierClient(System::String^ dataTableName, System::String^ phone, System::String^ email)
{
	System::String^ sql;

	this->oMappClient->setPhone(phone);
	this->oMappClient->setEmail(email);

	sql = this->oMappClient->Delete();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservicesClient::retirerClient(System::String^ dataTableName, System::String^ phone, System::String^ email)
{
	System::String^ sql;

	this->oMappClient->setPhone(phone);
	this->oMappClient->setEmail(email);

	sql = this->oMappClient->Delete();
	this->oCad->actionRows(sql);
}