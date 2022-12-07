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
