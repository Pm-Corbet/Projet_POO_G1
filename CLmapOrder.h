#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapOrder
	{
	private:
		System::String^ sSql;
		System::String^ id_order;
		System::String^ reference;
		System::String^ delivery_datetime;
		System::String^ emission_datetime;
		System::String^ payment_number;
		System::String^ total_amount;
		System::String^ order_is_enabled;
		System::String^ id_client;
		System::String^ phone;
		System::String^ email;
		System::String^ name;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ Find(void);
		void setReference(System::String^);
		void setDeliveryDateTime(System::String^);
		void setEmissionDateTime(System::String^);
		void setPaymentNumber(System::String^);
		void setTotalAmount(System::String^);
		void setOrderIsEnabled(System::String^);
		void setPhone(System::String^);
		void setEmail(System::String^);
		void setName(System::String^);
		void setIsEnabled(System::String^);
		System::String^ getReference(void);
		System::String^ getDeliveryDateTime(void);
		System::String^ getEmissionDateTime(void);
		System::String^ getPaymentNumber(void);
		System::String^ getTotalAmount(void);
		System::String^ getOrderIsEnabled(void);
	};
}