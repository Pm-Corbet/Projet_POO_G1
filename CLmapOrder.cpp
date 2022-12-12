#include "pch.h"
#include "CLmapOrder.h"

System::String^ NS_Comp_Mappage::CLmapOrder::SelectALL(void)
{
	return "SELECT orders.id_order, reference, delivery_datetime, emission_datetime, payment_number, total_amount, id_client FROM orders INNER JOIN item on orders.id_order = item.id_order INNER JOIN infos_item on infos_item.id_infos_item = item.id_infos_item";
}
System::String^ NS_Comp_Mappage::CLmapOrder::Select(void)
{
	return "SELECT reference, delivery_datetime, emission_datetime, payment_number, total_amount, orders.is_enabled as Active FROM orders WHERE orders.is_enabled = 1";
}
System::String^ NS_Comp_Mappage::CLmapOrder::Insert(void)
{
	return " ";
}
System::String^ NS_Comp_Mappage::CLmapOrder::Delete(void)
{
	return "UPDATE orders SET is_enabled = 0 WHERE reference = '" + this->reference + "'";
}
System::String^ NS_Comp_Mappage::CLmapOrder::Update(void)
{
	System::String^ sql = " ";

	if (this->id_order->Equals("")) return sql;
	if (this->reference != "") sql += "UPDATE POO.client SET reference = '" + this->reference + "' WHERE id_order = " + this->id_order + ";";
	if (this->delivery_datetime != "") sql += "UPDATE POO.client SET delivery_datetime = '" + this->delivery_datetime + "' WHERE id_order = " + this->id_order + ";";
	if (this->emission_datetime != "") sql += "UPDATE POO.client SET emission_datetime = '" + this->emission_datetime + "' id_order = " + this->id_order + ";";
	if (this->total_amount != "") sql += "UPDATE POO.client SET total_amount = '" + this->total_amount + "' id_order = " + this->id_order + ";";
	if (this->payment_number != "") sql += "UPDATE POO.client SET payment_number = '" + this->payment_number + "' id_order " + this->id_order + ";";
	if (this->order_is_enabled != "") sql += "UPDATE POO.client SET order_is_enabled = '" + this->order_is_enabled + "' id_order = " + this->id_order + ";";

	return sql;
}
System::String^ NS_Comp_Mappage::CLmapOrder::Find(void)
{
	System::String^ sql = " ";
	
	sql += "SELECT reference, delivery_datetime, emission_date, payment_number, total_amount, orders.is_enabled as Active, item.id_item, type_item.name, price.HT_price, TVA_rate FROM orders INNER JOIN composed_of on orders.id_order = composed_of.id_order INNER JOIN item on composed_of.id_item = item.id_item INNER JOIN type_item on type_item.id_type_item = item.id_type_item INNER JOIN price on type_item.id_type_item = price.id_type_item WHERE ";
	sql += " (reference = '" + this->reference + "'";
	sql += " OR delivery_datetime = '" + this->delivery_datetime + "'";
	sql += " OR emission_date = '" + this->emission_datetime + "'";
	sql += " OR payment_number = " + this->payment_number;
	sql += " OR total_amount = " + this->total_amount;
	sql += " OR orders.is_enabled = " + this->order_is_enabled;
	sql += " OR type_item.name = '" + this->name + "')";
	sql += " AND price.is_enabled = 1;";
	
	
	return sql;
}
void NS_Comp_Mappage::CLmapOrder::setReference(System::String^ reference)
{
	this->reference = reference;
}
void NS_Comp_Mappage::CLmapOrder::setDeliveryDateTime(System::String^ delivery_datetime)
{
	this->delivery_datetime = delivery_datetime;
}
void NS_Comp_Mappage::CLmapOrder::setEmissionDateTime(System::String^ emissionDateTime)
{
	this->emission_datetime = emissionDateTime;
}
void NS_Comp_Mappage::CLmapOrder::setTotalAmount(System::String^ total_amount)
{
	this->total_amount = total_amount;
}
void NS_Comp_Mappage::CLmapOrder::setPaymentNumber(System::String^ payment_number)
{
	this->payment_number = payment_number;
}
void NS_Comp_Mappage::CLmapOrder::setOrderIsEnabled(System::String^ order_is_enabled)
{
	this->order_is_enabled = order_is_enabled;
}
void NS_Comp_Mappage::CLmapOrder::setPhone(System::String^ email)
{
	this->email = email;
}
void NS_Comp_Mappage::CLmapOrder::setEmail(System::String^ phone)
{
	this->phone = phone;
}
void NS_Comp_Mappage::CLmapOrder::setName(System::String^ name)
{
	this->name = name;
}
void NS_Comp_Mappage::CLmapOrder::setIsEnabled(System::String^ order_is_enabled)
{
	this->order_is_enabled = order_is_enabled;
}
System::String^ NS_Comp_Mappage::CLmapOrder::getReference(void) { return this->reference; }
System::String^ NS_Comp_Mappage::CLmapOrder::getDeliveryDateTime(void) { return this->delivery_datetime; }
System::String^ NS_Comp_Mappage::CLmapOrder::getEmissionDateTime(void) { return this->emission_datetime; }
System::String^ NS_Comp_Mappage::CLmapOrder::getTotalAmount(void) { return this->total_amount; }
System::String^ NS_Comp_Mappage::CLmapOrder::getPaymentNumber(void) { return this->payment_number; }
System::String^ NS_Comp_Mappage::CLmapOrder::getOrderIsEnabled(void) { return this->order_is_enabled; }