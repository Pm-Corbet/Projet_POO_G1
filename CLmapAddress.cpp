#include "pch.h"
#include "CLmapAddress.h"

System::String^ NS_Comp_Mappage::CLmapAddress::insertStreetName(System::String^ street_name)
{
	return "INSERT INTO street_name(street_name) values ('" + street_name + "');";
}
System::String^ NS_Comp_Mappage::CLmapAddress::insertCity(System::String^ city)
{
	return "INSERT INTO city(city) values ('" + city + "');";
}
System::String^ NS_Comp_Mappage::CLmapAddress::insertCountry(System::String^ country)
{
	return "INSERT INTO country(country) values ('" + country + "');";
}
System::String^ NS_Comp_Mappage::CLmapAddress::insertZipcode(System::String^ zipcode)
{
	return "INSERT INTO zipcode(zipcode) values ('" + zipcode + "');";
}
System::String^ NS_Comp_Mappage::CLmapAddress::insertAddress(System::String^ number, System::String^ complement, System::String^ street_name, System::String^ city, System::String^ zipcode, System::String^ country)
{
	System::String^ sql = "INSERT INTO address(number, complement, id_street_name, id_city, id_zipcode, id_country) values('" + number + "', '" + complement + "', (SELECT id_street_name FROM street_name WHERE street_name = '" + street_name + "'), (SELECT id_city FROM city WHERE city = '" + city + "'), (SELECT id_zipcode FROM zipcode WHERE zipcode = '" + zipcode + "'), (SELECT id_country FROM country WHERE country = '" + country + "'));";
	return sql;
}
System::String^ NS_Comp_Mappage::CLmapAddress::linkAddressToClient(System::String^ type, System::String^ first_name, System::String^ last_name, System::String^ phone, System::String^ email, System::String^ date_of_birth, System::String^ number, System::String^ complement, System::String^ street_name, System::String^ city, System::String^ zipcode, System::String^ country)
{
	System::String^ sql = "INSERT INTO link_address(type, id_client, id_address) values('" + type + "', (SELECT id_client FROM client WHERE first_name = '" + first_name + "' AND last_name = '" + last_name + "' AND phone = '" + phone + "' AND email = '" + email + "' AND date_of_birth = '" + date_of_birth + "'), (SELECT id_address FROM address WHERE number = '" + number + "' AND complement = '" + complement + "' AND id_street_name = (SELECT id_street_name FROM street_name WHERE street_name = '" + street_name + "') AND id_city = (SELECT id_city FROM city WHERE city = '" + city + "') AND id_zipcode = (SELECT id_zipcode FROM zipcode WHERE zipcode = '" + zipcode + "') AND id_country = (SELECT id_country FROM country WHERE country = '" + country + "'))); ";
	return sql;
}
System::String^ NS_Comp_Mappage::CLmapAddress::Update(void)
{
	System::String^ sql = " ";

	return sql;
}
void NS_Comp_Mappage::CLmapAddress::setNumber(System::String^ number)
{
	this->number = number;
}
void NS_Comp_Mappage::CLmapAddress::setCity(System::String^ city)
{
	this->city = city;
}
void NS_Comp_Mappage::CLmapAddress::setZipcode(System::String^ zipcode)
{
	this->zipcode = zipcode;
}
void NS_Comp_Mappage::CLmapAddress::setCountry(System::String^ country)
{
	this->country = country;
}
void NS_Comp_Mappage::CLmapAddress::setStreetName(System::String^ street_name)
{
	this->street_name = street_name;
}

void NS_Comp_Mappage::CLmapAddress::setComplement(System::String^ complement)
{
	this->complement = complement;
}

System::String^ NS_Comp_Mappage::CLmapAddress::getNumber(void) { return this->number; }
System::String^ NS_Comp_Mappage::CLmapAddress::getCity(void) { return this->city; }
System::String^ NS_Comp_Mappage::CLmapAddress::getZipcode(void) { return this->zipcode; }
System::String^ NS_Comp_Mappage::CLmapAddress::getCountry(void) { return this->country; }
System::String^ NS_Comp_Mappage::CLmapAddress::getComplement(void) { return this->complement; }
System::String^ NS_Comp_Mappage::CLmapAddress::getStreetName(void) { return this->street_name; }

