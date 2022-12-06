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