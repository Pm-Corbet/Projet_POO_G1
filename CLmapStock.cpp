#include "pch.h"
#include "CLmapStock.h"

System::String^ NS_Comp_Mappage::CLmapStock::Select(void)
{
	return "SELECT * FROM item INNER JOIN type_item ON item.id_type_item = type_item.id_type_item INNER JOIN price ON type_item.id_type_item = price.id_type_item";
}
System::String^ NS_Comp_Mappage::CLmapStock::Insert(void)
{
	return "SELECT * FROM";
}
System::String^ NS_Comp_Mappage::CLmapStock::Delete(void)
{
	return "SELECT * FROM";
}
System::String^ NS_Comp_Mappage::CLmapStock::Update(void)
{
	System::String^ sql = " ";

	return sql;
}
void NS_Comp_Mappage::CLmapStock::setItemIsEnabled(System::String^ item_is_enabled)
{
	this->item_is_enabled = item_is_enabled;
}

System::String^ NS_Comp_Mappage::CLmapStock::getTypeItemIsEnabled(void) { return this->type_item_is_enabled; }
System::String^ NS_Comp_Mappage::CLmapStock::getName(void) { return this->name; }
System::String^ NS_Comp_Mappage::CLmapStock::getItemIsEnabled(void) { return this->item_is_enabled; }
System::String^ NS_Comp_Mappage::CLmapStock::getHTPrice(void) { return this->HT_price; }
System::String^ NS_Comp_Mappage::CLmapStock::getTVARate(void) { return this->TVA_rate; }
System::String^ NS_Comp_Mappage::CLmapStock::getPriceIsEnabled(void) { return this->price_is_enabled; }
