#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapClient
	{
	private:
		System::String^ sSql;
		System::String^ id_client;
		System::String^ last_name;
		System::String^ first_name;
		System::String^ date_of_birth;
		System::String^ email;
		System::String^ phone;
		System::String^ is_enabled;
		System::String^ number;
		System::String^ street_name;
		System::String^ zipcode;
		System::String^ city;
		System::String^ country;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ Find(void);
		void setLastName(System::String^);
		void setFirstName(System::String^);
		void setDateOfBirth(System::String^);
		void setEmail(System::String^);
		void setPhone(System::String^);
		void setIsEnabled(System::String^);
		void setNumber(System::String^);
		void setStreetName(System::String^);
		void setZipcode(System::String^);
		void setCity(System::String^);
		void setCountry(System::String^);
		System::String^ getLastName(void);
		System::String^ getFirstName(void);
		System::String^ getDateOfBirth(void);
		System::String^ getEmail(void);
		System::String^ getPhone(void);
		System::String^ getIsEnabled(void);
		System::String^ getIdClient(void);
	};
}