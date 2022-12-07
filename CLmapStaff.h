#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapStaff
	{
	private:
		System::String^ sSql;
		System::String^ id_staff;
		System::String^ last_name;
		System::String^ first_name;
		System::String^ hiring_date;
		System::String^ email;
		System::String^ phone;
		System::String^ is_enabled;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setLastName(System::String^);
		void setFirstName(System::String^);
		void setHiringDate(System::String^);
		void setEmail(System::String^);
		void setPhone(System::String^);
		void setIsEnabled(System::String^);
		System::String^ getLastName(void);
		System::String^ getFirstName(void);
		System::String^ getHiringDate(void);
		System::String^ getEmail(void);
		System::String^ getPhone(void);
		System::String^ getIsEnabled(void);
		System::String^ getIdStaff(void);
	};
}