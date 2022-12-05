#include "pch.h"
#include "CLmapClients.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT * FROM client";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO Table_P6 (nom, prenom) VALUES('" + this->last_name + "','" + this->first_name + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	if (this->id_client->Equals("")) {
		return "DELETE FROM [Prosit6_DB].[dbo].[Table_P6] \
				DELETE FROM [Prosit6_DB].[dbo].[Adresses]";
	}
	else return "DELETE FROM [Prosit6_DB].[dbo].[Table_P6] WHERE id = " + this->id_client + " \
				 DELETE FROM [Prosit6_DB].[dbo].[Adresses] WHERE id = " + this->id_client + ";";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
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
void NS_Comp_Mappage::CLmapTB::setLastName(System::String^ last_name)
{
	this->last_name = last_name;
}
void NS_Comp_Mappage::CLmapTB::setFirstName(System::String^ first_name)
{
	this->first_name = first_name;
}
void NS_Comp_Mappage::CLmapTB::setDateOfBirth(System::String^ date_of_birth)
{
	this->date_of_birth = date_of_birth;
}
void NS_Comp_Mappage::CLmapTB::setEmail(System::String^ email)
{
	this->email = email;
}
void NS_Comp_Mappage::CLmapTB::setPhone(System::String^ phone)
{
	this->phone = phone;
}
void NS_Comp_Mappage::CLmapTB::setIsEnabled(System::String^ is_enabled)
{
	this->is_enabled = is_enabled;
}
System::String^ NS_Comp_Mappage::CLmapTB::getFirstName(void) { return this->first_name; }
System::String^ NS_Comp_Mappage::CLmapTB::getLastName(void) { return this->last_name; }
System::String^ NS_Comp_Mappage::CLmapTB::getId(void) { return this->id_client; }
System::String^ NS_Comp_Mappage::CLmapTB::getDateOfBirth(void) { return this->date_of_birth; }
System::String^ NS_Comp_Mappage::CLmapTB::getEmail(void) { return this->email; }
System::String^ NS_Comp_Mappage::CLmapTB::getPhone(void) { return this->phone; }
System::String^ NS_Comp_Mappage::CLmapTB::getIsEnabled(void) { return this->is_enabled; }
