#pragma once
namespace NS_Comp_Mappage

{
	ref class CLmapStock
	{
	private:
		System::String^ sSql;
		System::String^ id_item;
		System::String^ item_is_enabled;
		System::String^ id_type_item;
		System::String^ name;
		System::String^ type_item_is_enabled;
		System::String^ HT_price;
		System::String^ TVA_rate;
		System::String^ price_is_enabled;
		System::String^ id_price;
	
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ InsertPrice(void);
		System::String^ link_cost(void);
		System::String^ InsertInfosItem(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setName(System::String^);
		void setHT_price(System::String^);
		void setTVA_rate(System::String^);
		void setIdItem(System::String^);
		System::String^ getTypeItemIsEnabled(void);
		System::String^ getName(void);
		System::String^ getItemIsEnabled(void);
		System::String^ getHTPrice(void);
		System::String^ getTVARate(void);
		System::String^ getPriceIsEnabled(void);
	};
}