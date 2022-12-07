#include "pch.h"
#include "CLmapStaff.h"

System::String^ NS_Comp_Mappage::CLmapStaff::Select(void)
{
	return "SELECT * FROM staff INNER JOIN address on staff.id_address = address.id_address INNER JOIN zipcode on address.id_zipcode = zipcode.id_zipcode INNER JOIN city on address.id_city = city.id_city INNER JOIN country on address.id_country = country.id_country INNER JOIN street_name on address.id_street_name = street_name.id_street_name WHERE is_enabled = 1";
}
System::String^ NS_Comp_Mappage::CLmapStaff::Insert(void)
{
	return "INSERT INTO staff(last_name, first_name, hiring_date, email, phone, is_enabled, id_address, id_staff_supervised) values ('" + this->last_name + "','" + this->first_name + "','" + this->hiring_date + "','" + this->email + "','" + this->phone + "','1', (SELECT id_address FROM address WHERE number = '" + this->number + "' AND complement = '" + this->complement + "' AND id_street_name = (SELECT id_street_name FROM street_name WHERE street_name = '" + this->street_name + "') AND id_city = (SELECT id_city FROM city WHERE city = '" + this->city + "') AND id_zipcode = (SELECT id_zipcode FROM zipcode WHERE zipcode = '" + this->zip_code + "') AND id_country = (SELECT id_country FROM country WHERE country = '" + this->country + "')), 1);";
}
System::String^ NS_Comp_Mappage::CLmapStaff::Delete(void)
{
	return "UPDATE staff SET is_enabled = 0 WHERE phone = '" + this->phone + "' AND email = '" + this->email + "';";
}
System::String^ NS_Comp_Mappage::CLmapStaff::Update(void)
{
	System::String^ sql = " ";

	if (this->id_staff->Equals("")) return sql;
	if (this->last_name != "") sql += "UPDATE POO.client SET last_name = '" + this->last_name + "' WHERE id_staff = " + this->id_staff + ";";
	if (this->first_name != "") sql += "UPDATE POO.client SET first_name = '" + this->first_name + "' WHERE id_staff = " + this->id_staff + ";";
	if (this->hiring_date != "") sql += "UPDATE POO.client SET date_of_birth = '" + this->hiring_date + "' id_staff = " + this->id_staff + ";";
	if (this->email != "") sql += "UPDATE POO.client SET email = '" + this->email + "' id_staff = " + this->id_staff + ";";
	if (this->phone != "") sql += "UPDATE POO.client SET phone = '" + this->phone + "' id_staff " + this->id_staff + ";";
	if (this->is_enabled != "") sql += "UPDATE POO.client SET is_enabled = '" + this->is_enabled + "' id_staff = " + this->id_staff + ";";

	return sql;
}
void NS_Comp_Mappage::CLmapStaff::setLastName(System::String^ last_name)
{
	this->last_name = last_name;
}
void NS_Comp_Mappage::CLmapStaff::setFirstName(System::String^ first_name)
{
	this->first_name = first_name;
}
void NS_Comp_Mappage::CLmapStaff::setHiringDate(System::String^ date_of_birth)
{
	this->hiring_date = date_of_birth;
}
void NS_Comp_Mappage::CLmapStaff::setEmail(System::String^ email)
{
	this->email = email;
}
void NS_Comp_Mappage::CLmapStaff::setPhone(System::String^ phone)
{
	this->phone = phone;
}
void NS_Comp_Mappage::CLmapStaff::setIsEnabled(System::String^ is_enabled)
{
	this->is_enabled = is_enabled;
}
void NS_Comp_Mappage::CLmapStaff::setNumber(System::String^ number)
{
	this->number = number;
}
void NS_Comp_Mappage::CLmapStaff::setStreetName(System::String^ street_name)
{
	this->street_name = street_name;
}
void NS_Comp_Mappage::CLmapStaff::setCity(System::String^ city)
{
	this->city = city;
}
void NS_Comp_Mappage::CLmapStaff::setZipcode(System::String^ zip_code)
{
	this->zip_code = zip_code;
}
void NS_Comp_Mappage::CLmapStaff::setCountry(System::String^ country)
{
	this->country = country;
}
void NS_Comp_Mappage::CLmapStaff::setComplement(System::String^ complement)
{
	this->complement = complement;
}
System::String^ NS_Comp_Mappage::CLmapStaff::getFirstName(void) { return this->first_name; }
System::String^ NS_Comp_Mappage::CLmapStaff::getLastName(void) { return this->last_name; }
System::String^ NS_Comp_Mappage::CLmapStaff::getIdStaff(void) { return this->id_staff; }
System::String^ NS_Comp_Mappage::CLmapStaff::getHiringDate(void) { return this->hiring_date; }
System::String^ NS_Comp_Mappage::CLmapStaff::getEmail(void) { return this->email; }
System::String^ NS_Comp_Mappage::CLmapStaff::getPhone(void) { return this->phone; }
System::String^ NS_Comp_Mappage::CLmapStaff::getIsEnabled(void) { return this->is_enabled; }
