#include "pch.h"
#include "CLservicesOrder.h"

NS_Comp_Svc::CLservicesOrder::CLservicesOrder(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappOrder = gcnew NS_Comp_Mappage::CLmapOrder;
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesOrder::selectionnerToutLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappOrder->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesOrder::rechercherCommande(System::String^ dataTableName, System::String^ reference, System::String^ phone, System::String^ email, System::String^ delivery_datetime, System::String^ emission_datetime, System::String^ payment_number, System::String^ total_amount, System::String^ name, System::String^ is_enabled)
{
	System::String^ sql;

	this->oMappOrder->setReference(reference);
	this->oMappOrder->setPhone(phone);
	this->oMappOrder->setEmail(email);
	this->oMappOrder->setDeliveryDateTime(delivery_datetime);
	this->oMappOrder->setEmissionDateTime(emission_datetime);
	this->oMappOrder->setPaymentNumber(payment_number);
	this->oMappOrder->setTotalAmount(total_amount);
	this->oMappOrder->setName(name);
	this->oMappOrder->setIsEnabled(is_enabled);
	
	sql = this->oMappOrder->Find();

	return this->oCad->getRows(sql, dataTableName);
}