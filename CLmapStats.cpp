#include "pch.h"
#include "CLmapStats.h"

System::String^ NS_Comp_Mappage::CLmapStats::top10(void)
{
	return "SELECT infos_item.id_infos_item, alias.Nombre_ventes, name FROM (SELECT TOP 10 item.id_infos_item, COUNT(item.id_infos_item) as Nombre_ventes from item INNER JOIN infos_item on item.id_infos_item = infos_item.id_infos_item WHERE is_enabled = 0 GROUP BY item.id_infos_item ORDER BY Nombre_ventes DESC) as alias INNER JOIN infos_item on alias.id_infos_item = infos_item.id_infos_item";
}
System::String^ NS_Comp_Mappage::CLmapStats::avgPanier(void)
{
	return "SELECT AVG(total_amount) as Panier_moyen FROM orders";
}
System::String^ NS_Comp_Mappage::CLmapStats::alerteStock(void)
{
	return "SELECT alias.id_infos_item, name, Nombre FROM (SELECT item.id_infos_item, COUNT(item.id_infos_item) as Nombre FROM item INNER JOIN infos_item on item.id_infos_item = infos_item.id_infos_item GROUP BY item.id_infos_item) as alias INNER JOIN infos_item on alias.id_infos_item = infos_item.id_infos_item WHERE Nombre < 5";
}
System::String^ NS_Comp_Mappage::CLmapStats::prixAchat(void)
{
	return "select sum(HT_price) as Prix_achat_stock from item inner join cost on cost.id_item = item.id_item inner join price on cost.id_price = price.id_price WHERE item.is_enabled = 1";
}
System::String^ NS_Comp_Mappage::CLmapStats::simulationPrix(System::String^ tva, System::String^ marge, System::String^ remise, System::String^ demarque)
{
	return "select CAST(SUM(ROUND(HT_price+HT_price*" + tva + " / 100 + HT_price * " + marge + " / 100 - HT_price * " + remise + " / 100 + HT_price * " + demarque + " / 100, 2)) as decimal(10,2)) as Simulation from item inner join cost on cost.id_item = item.id_item inner join price on cost.id_price = price.id_price WHERE item.is_enabled = 1;";
}
System::String^ NS_Comp_Mappage::CLmapStats::totalAmountClient()
{
	return "SELECT client.id_client, first_name, last_name, SUM(total_amount) as Montant_total_du_client from client inner join orders on client.id_client = orders.id_client GROUP BY client.id_client, first_name, last_name";
}
System::String^ NS_Comp_Mappage::CLmapStats::resultMonth(System::String^ month, System::String^ year)
{
	return "SELECT SUM(total_amount) FROM orders WHERE MONTH(emission_datetime) = " + month + " and YEAR(emission_datetime) = " + year + ";";
}
