#include "pch.h"
#include "CLservicesClient.h"

NS_Comp_Svc::CLservicesClient::CLservicesClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesClient::selectionnerToutLesClients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
/*
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ ville, System::String^ cp)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCp(cp);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::retirerUnePersonne(System::String^ id)
{
	System::String^ sql;

	/*System::UInt16^ Id = (System::UInt16)0;
	Id->Parse(id);
	this->oMappTB->set(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::modifierUnePersonne(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ ville, System::String^ cp)
{
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCp(cp);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}*/