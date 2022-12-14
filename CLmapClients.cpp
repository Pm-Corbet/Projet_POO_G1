#include "pch.h"
#include "CLmapClients.h"

System::String^ NS_Comp_Mappage::CLmapClient::Select(void)
{
	return "SELECT * FROM client INNER JOIN link_address on client.id_client = link_address.id_client INNER JOIN address on link_address.id_address = address.id_address INNER JOIN zipcode on address.id_zipcode = zipcode.id_zipcode INNER JOIN city on address.id_city = city.id_city INNER JOIN country on address.id_country = country.id_country INNER JOIN street_name on address.id_street_name = street_name.id_street_name WHERE is_enabled = 1";
}
System::String^ NS_Comp_Mappage::CLmapClient::Insert(void)
{
	return "INSERT INTO client(last_name, first_name, date_of_birth, email, phone, is_enabled) values ('" + this->last_name + "','" + this->first_name + "','" + this->date_of_birth + "','" + this->email + "','" + this->phone + "','1');";
}

System::String^ NS_Comp_Mappage::CLmapClient::Delete(void)
{
	return "UPDATE client SET is_enabled = 0 WHERE phone = '" + this->phone + "' AND email = '" + this->email + "';";
}
System::String^ NS_Comp_Mappage::CLmapClient::Update(void)
{
	System::String^ sql = " ";

	if (this->id_client->Equals("")) return sql;
	if (this->last_name != "") sql += "UPDATE POO.client SET last_name = '" + this->last_name + "' WHERE POO.client.id_client = " + this->id_client + ";";
	if (this->first_name != "") sql += "UPDATE POO.client SET first_name = '" + this->first_name + "' WHERE POO.client.id_client = " + this->id_client + ";";
	if (this->date_of_birth != "") sql += "UPDATE POO.client SET date_of_birth = '" + this->date_of_birth + "' POO.client.id_client = " + this->id_client + ";";
	if (this->email != "") sql += "UPDATE POO.client SET email = '" + this->email + "' POO.client.id_client = " + this->id_client + ";";
	if (this->phone != "") sql += "UPDATE POO.client SET phone = '" + this->phone + "' POO.client.id_client = " + this->id_client + ";";
	if (this->is_enabled != "") sql += "UPDATE POO.client SET is_enabled = '" + this->is_enabled + "' POO.client.id_client = " + this->id_client + ";";

	return sql;
}
System::String^ NS_Comp_Mappage::CLmapClient::Find()
{
	System::String^ sql = " ";
	sql += "SELECT * FROM client INNER JOIN link_address on client.id_client = link_address.id_client INNER JOIN address on link_address.id_address = address.id_address INNER JOIN zipcode on address.id_zipcode = zipcode.id_zipcode INNER JOIN city on address.id_city = city.id_city INNER JOIN country on address.id_country = country.id_country INNER JOIN street_name on address.id_street_name = street_name.id_street_name" ;
	sql += " WHERE (email = '" + this->email + "' OR phone = '" + this->phone;
	sql += "' OR first_name = '" + this->first_name + "' OR last_name = '" + this->last_name;
	sql += "' OR city = '" + this->city + "' OR zipcode = '" + this->zipcode + "' OR country = '" + this->country + "' OR street_name = '" + this->street_name + "') AND is_enabled = 1;";
	return sql;
}
void NS_Comp_Mappage::CLmapClient::setLastName(System::String^ last_name)
{
	this->last_name = last_name;
}
void NS_Comp_Mappage::CLmapClient::setFirstName(System::String^ first_name)
{
	this->first_name = first_name;
}
void NS_Comp_Mappage::CLmapClient::setDateOfBirth(System::String^ date_of_birth)
{
	this->date_of_birth = date_of_birth;
}
void NS_Comp_Mappage::CLmapClient::setEmail(System::String^ email)
{
	this->email = email;
}
void NS_Comp_Mappage::CLmapClient::setPhone(System::String^ phone)
{
	this->phone = phone;
}
void NS_Comp_Mappage::CLmapClient::setIsEnabled(System::String^ is_enabled)
{
	this->is_enabled = is_enabled;
}
void NS_Comp_Mappage::CLmapClient::setCity(System::String^ city)
{
	this->city = city;
}
void NS_Comp_Mappage::CLmapClient::setCountry(System::String^ country)
{
	this->country = country;
}
void NS_Comp_Mappage::CLmapClient::setZipcode(System::String^ zipcode)
{
	this->zipcode = zipcode;
}
void NS_Comp_Mappage::CLmapClient::setNumber(System::String^ number)
{
	this->number = number;
}

void NS_Comp_Mappage::CLmapClient::setStreetName(System::String^ street_name)
{
	this->street_name = street_name;
}

System::String^ NS_Comp_Mappage::CLmapClient::getFirstName(void) { return this->first_name; }
System::String^ NS_Comp_Mappage::CLmapClient::getLastName(void) { return this->last_name; }
System::String^ NS_Comp_Mappage::CLmapClient::getIdClient(void) { return this->id_client; }
System::String^ NS_Comp_Mappage::CLmapClient::getDateOfBirth(void) { return this->date_of_birth; }
System::String^ NS_Comp_Mappage::CLmapClient::getEmail(void) { return this->email; }
System::String^ NS_Comp_Mappage::CLmapClient::getPhone(void) { return this->phone; }
System::String^ NS_Comp_Mappage::CLmapClient::getIsEnabled(void) { return this->is_enabled; }
