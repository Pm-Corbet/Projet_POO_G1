#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapAddress
	{
	private:
		System::String^ sSql;
		System::String^ zipcode;
		System::String^ street_name;
		System::String^ city;
		System::String^ country;
		System::String^ number;
		System::String^ complement;
	public:
		System::String^ insertZipcode(System::String^ zipcode);
		System::String^ insertStreetName(System::String^ street_name);
		System::String^ insertCity(System::String^ city);
		System::String^ insertCountry(System::String^ country);
		System::String^ insertAddress(System::String^ number, System::String^ complement, System::String^ street_name, System::String^ city, System::String^ zipcode, System::String^ country);
		System::String^ linkAddressToClient(System::String^ type, System::String^ first_name, System::String^ last_name, System::String^ phone, System::String^ email, System::String^ date_of_birth, System::String^ number, System::String^ complement, System::String^ street_name, System::String^ city, System::String^ zipcode, System::String^ country);
		System::String^ Update(void);
		void setNumber(System::String^);
		void setStreetName(System::String^);
		void setZipcode(System::String^);
		void setCity(System::String^);
		void setCountry(System::String^);
		void setComplement(System::String^);
		System::String^ getNumber(void);
		System::String^ getStreetName(void);
		System::String^ getZipcode(void);
		System::String^ getCity(void);
		System::String^ getCountry(void);
		System::String^ getComplement(void);
	};
}