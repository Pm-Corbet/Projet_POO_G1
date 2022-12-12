#include "pch.h"
#include "CLmapStock.h"

System::String^ NS_Comp_Mappage::CLmapStock::Select(void)
{
	return "SELECT item.id_item, name, HT_price, TVA_rate FROM item inner join infos_item on item.id_infos_item = infos_item.id_infos_item INNER JOIN cost on item.id_item = cost.id_item INNER JOIN price on cost.id_price = price.id_price where item.is_enabled = 1";
}
System::String^ NS_Comp_Mappage::CLmapStock::Insert(void)
{
	return "INSERT INTO item(is_enabled, id_order, id_infos_item) VALUES (1, NULL, (SELECT id_infos_item FROM infos_item WHERE name = '" + this->name + "'));";
}
System::String^ NS_Comp_Mappage::CLmapStock::Delete(void)
{
	return "UPDATE item SET is_enabled = 0 WHERE id_item = " + this->id_item + ";";
}
System::String^ NS_Comp_Mappage::CLmapStock::InsertPrice(void)
{
	return "INSERT INTO price(HT_price, TVA_rate, is_enabled) VALUES("+ this->HT_price + "," + this->TVA_rate + ", 1); ";
}
System::String^ NS_Comp_Mappage::CLmapStock::InsertInfosItem(void)
{
	return "INSERT INTO infos_item (name) SELECT '" + this->name + "' WHERE NOT EXISTS ( SELECT name from infos_item WHERE name = '" + this->name + "')";
}
System::String^ NS_Comp_Mappage::CLmapStock::link_cost(void)
{
	return "INSERT INTO cost (id_item, id_price) VALUES ((SELECT MAX(id_item) FROM item), (SELECT MAX(id_price) FROM price));";
}
System::String^ NS_Comp_Mappage::CLmapStock::Update(void)
{
	System::String^ sql = " ";

	return sql;
}
void NS_Comp_Mappage::CLmapStock::setName(System::String^ name)
{
	this->name = name;
}

void NS_Comp_Mappage::CLmapStock::setHT_price(System::String^ HT_price)
{
	this->HT_price = HT_price;
}
void NS_Comp_Mappage::CLmapStock::setTVA_rate(System::String^ TVA_rate)
{
	this->TVA_rate = TVA_rate;
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
