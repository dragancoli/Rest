#pragma once
#include <string>

class Meni_items
{
private:
	std::string name;
	std::string description;
	double price;
	int number;
public:
	Meni_items() : name(""), description(""), price(0), number(0) {}
	Meni_items(std::string n, std::string d, double p, int nm) : name(n), description(d), price(p), number(nm) {}
	void change_name(std::string n) { this->name = n; }
	void change_description(std::string d) { this->description = d; }
	void change_price(double d) { this->price = d; }
	void change_number(int n) { this->number = n; }
	std::string to_String()
	{
		std::string result = name + description + std::to_string(price) + std::to_string(number) ;
		return result;
	}
};

Meni_items str2Meni_item(std::string& line)
{
	Meni_items item;
	int count = 0;
	std::string input="";
	for (int i = 0; i < line.length(); i++)
	{
		if(line[i]!=',')
			input += line[i];
		else
		{
			count++;
			if (count == 1)
			{
				item.change_name(input);
				input = "";
			}
			else if (count == 2)
			{
				item.change_description(input);
				input = "";
			}
			else if (count == 3)
			{
				item.change_price(stod(input));
				input = "";
			}
			else if (count == 4)
			{
				item.change_number(stoi(input));
				input = "";
			}
		}
	}
	return item;
}
