#include "pch.h"
#include "CLmapStats.h"

System::String^ NS_Comp_Mappage::CLmapStats::top10(void)
{
	return "SELECT TOP 10 name, count(name) as Nombre_ventes FROM composed_of INNER JOIN item on composed_of.id_item = item.id_item INNER JOIN type_item on item.id_type_item = type_item.id_type_item GROUP BY name ORDER BY Nombre_ventes DESC;";
}

System::String^ NS_Comp_Mappage::CLmapStats::avgPanier(void)
{
	return "SELECT AVG(total_amount) as Panier_moyen FROM orders";
}
System::String^ NS_Comp_Mappage::CLmapStats::alerteStock(void)
{
	return "SELECT Nombre, name, is_enabled FROM (SELECT item.id_type_item, count(item.id_type_item) as Nombre FROM item where item.is_enabled = 1 group by item.id_type_item) as alias INNER JOIN type_item on alias.id_type_item = type_item.id_type_item WHERE Nombre < 15;";
}
System::String^ NS_Comp_Mappage::CLmapStats::prixAchat(void)
{
	return "select sum(HT_price) as Prix_achat_stock from item inner join type_item on item.id_type_item = type_item.id_type_item inner join price on type_item.id_type_item = price.id_type_item WHERE price.is_enabled = 1 and item.is_enabled = 1";
}
System::String^ NS_Comp_Mappage::CLmapStats::simulationPrix(System::String^ tva, System::String^ marge, System::String^ remise, System::String^ demarque)
{
	return "select CAST(SUM(ROUND(HT_price+HT_price*" + tva + " / 100 + HT_price * " + marge + " / 100 - HT_price * " + remise + " / 100 + HT_price * " + demarque + " / 100, 2)) as decimal(10,2)) as Simulation from item inner join type_item on item.id_type_item = type_item.id_type_item inner join price on type_item.id_type_item = price.id_type_item WHERE price.is_enabled = 1 and item.is_enabled = 1;";
}
System::String^ NS_Comp_Mappage::CLmapStats::totalAmountClient()
{
	return "SELECT client.id_client, first_name, last_name, SUM(total_amount) as Montant_total_du_client from client inner join orders on client.id_client = orders.id_client GROUP BY client.id_client, first_name, last_name";
}
System::String^ NS_Comp_Mappage::CLmapStats::resultMonth(System::String^ month, System::String^ year)
{
	return "SELECT SUM(total_amount) FROM orders WHERE MONTH(emission_date) = " + month + " and YEAR(emission_date) = " + year + ";";
}
