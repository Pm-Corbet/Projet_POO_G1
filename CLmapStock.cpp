#include "pch.h"
#include "CLmapStock.h"

System::String^ NS_Comp_Mappage::CLmapStock::Select(void)
{
	return "SELECT id_item, name, HT_price, TVA_rate FROM item INNER JOIN type_item ON item.id_type_item = type_item.id_type_item INNER JOIN price ON type_item.id_type_item = price.id_type_item WHERE item.is_enabled = 1 and price.is_enabled = 1";
}
System::String^ NS_Comp_Mappage::CLmapStock::Insert(void)
{
	return "SELECT * FROM";
}
System::String^ NS_Comp_Mappage::CLmapStock::Delete(void)
{
	return "UPDATE item SET is_enabled = 0 WHERE id_item = " + this->id_item + ";";
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
void NS_Comp_Mappage::CLmapStock::setIdItem(System::String^ id_item)
{
	this->id_item = id_item;
}

System::String^ NS_Comp_Mappage::CLmapStock::getTypeItemIsEnabled(void) { return this->type_item_is_enabled; }
System::String^ NS_Comp_Mappage::CLmapStock::getName(void) { return this->name; }
System::String^ NS_Comp_Mappage::CLmapStock::getItemIsEnabled(void) { return this->item_is_enabled; }
System::String^ NS_Comp_Mappage::CLmapStock::getHTPrice(void) { return this->HT_price; }
System::String^ NS_Comp_Mappage::CLmapStock::getTVARate(void) { return this->TVA_rate; }
System::String^ NS_Comp_Mappage::CLmapStock::getPriceIsEnabled(void) { return this->price_is_enabled; }
