#include "stdafx.h"
Player playerr = PLAYER::PLAYER_ID();

void Menu::Drawing::Text(const char * text, RGBAF rgbaf, VECTOR2 position, VECTOR2_2 size, bool center)
{
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_COLOUR(rgbaf.r, rgbaf.g, rgbaf.b, rgbaf.a);
	UI::SET_TEXT_FONT(rgbaf.f);
	UI::SET_TEXT_SCALE(size.w, size.h);
	UI::SET_TEXT_DROPSHADOW(1, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(1, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME((char*)text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(position.x, position.y);
}

void Menu::Drawing::Text(const char * text, RGBAF rgbaf, VECTOR2 position, float size) {
	UI::SET_TEXT_COLOUR(rgbaf.r, rgbaf.g, rgbaf.b, rgbaf.a);
	UI::SET_TEXT_FONT(rgbaf.f);
	UI::SET_TEXT_SCALE(size, size);
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME((char*)text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(position.x, position.y);
}

bool Menu::Settings::schwesselfick = true;
bool Menu::Settings::schwesselfickk = false;


void Menu::Drawing::Spriter(std::string Streamedtexture, std::string textureName, float x, float y, float width, float height, float rotation, int r, int g, int b, int a)
{
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED((char*)Streamedtexture.c_str()))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT((char*)Streamedtexture.c_str(), false);
	}
	else
	{
		GRAPHICS::DRAW_SPRITE((char*)Streamedtexture.c_str(), (char*)textureName.c_str(), x, y, width, height, rotation, r, g, b, a);
	}
}
void Menu::Drawing::Rect(RGBA rgba, VECTOR2 position, VECTOR2_2 size)
{
	GRAPHICS::DRAW_RECT(position.x, position.y, size.w, size.h, rgba.r, rgba.g, rgba.b, rgba.a);
}

static fpFileRegister file_register = (fpFileRegister)(Memory::pattern("48 89 5C 24 ? 48 89 6C 24 ? 48 89 7C 24 ? 41 54 41 56 41 57 48 83 EC 50 48 8B EA 4C 8B FA 48 8B D9 4D 85 C9").count(1).get(0).get<decltype(file_register)>());

bool FileExists(const std::string& fileName)
{
	struct stat buffer;
	return (stat(fileName.c_str(), &buffer) == 0);
}
//void YTD()
//{
//	std::string path = "VortexFolder/";
//	std::string name = "Vortextextures.ytd";
//	const std::string fullPath = path + name;
//
//	int textureID;
//	if (FileExists(fullPath))
//		file_register(&textureID, fullPath.c_str(), true, name.c_str(), false);
//}
bool Menu::Settings::Virustroll = true;
bool Menu::Settings::Authcheck = true;
bool Menu::Settings::Authcheckder2 = true;



void Menu::Drawing::Hitler()
{
	std::string path = "VortexFolder/";
	std::string name = "Vortextextures.ytd";
	const std::string fullPath = path + name;

	int textureID; 
	if (FileExists(fullPath))
		file_register(&textureID, fullPath.c_str(), true, name.c_str(), false);
}

void Menu::Drawing::Hitler2()
{
	std::string path = "VortexFolder/";
	std::string name = "Vortextextures2.ytd";
	const std::string fullPath = path + name;

	int textureID;
	if (FileExists(fullPath))
		file_register(&textureID, fullPath.c_str(), true, name.c_str(), false);
}
void Menu::Drawing::Hitler3()
{
	std::string path = "VortexFolder/";
	std::string name = "Vortextextures3.ytd";
	const std::string fullPath = path + name;

	int textureID;
	if (FileExists(fullPath))
		file_register(&textureID, fullPath.c_str(), true, name.c_str(), false);
}

void Menu::Drawing::Hitler4()
{
	std::string path = "VortexFolder/";
	std::string name = "Vortexassets.ytd";
	const std::string fullPath = path + name;

	int textureID;
	if (FileExists(fullPath))
		file_register(&textureID, fullPath.c_str(), true, name.c_str(), false);
}

void Menu::Drawing::Hitler5()
{
	std::string path = "VortexFolder/";
	std::string name = "Vortextextures4.ytd";
	const std::string fullPath = path + name;

	int textureID;
	if (FileExists(fullPath))
		file_register(&textureID, fullPath.c_str(), true, name.c_str(), false);
}

int Menu::Settings::titleRectTexture;
int Menu::Settings::titleRectTexture2;
bool Menu::Drawing::Header1 = true;
bool Menu::Drawing::Header2 = false;
void Menu::Drawing::Title(const char * text, RGBAF rgbaf, VECTOR2 position, VECTOR2_2 size, bool center)
{
	Menu::Drawing::Hitler();
	Menu::Drawing::Hitler2();
	Menu::Drawing::Hitler3();
	Menu::Drawing::Hitler4();
	Menu::Drawing::Hitler5();

	if (Menu::Drawing::Header1 == true && Menu::Drawing::Header2 == false)
	{
		static int i = 0;
		if (i % 2 == 0)
		{

			if (Menu::Settings::titleRectTexture < 149) {
				Menu::Settings::titleRectTexture++;
			}
			else {
				Menu::Settings::titleRectTexture = 3;
			}
			
		

		}
		i++;
		if (Menu::Settings::titleRectTexture == 1) {

			Drawing::Spriter("Vortextextures", "Vortex3_0", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 2) {

			Drawing::Spriter("Vortextextures", "Vortex3_1", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 3) {

			Drawing::Spriter("Vortextextures", "Vortex3_2", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 4) {

			Drawing::Spriter("Vortextextures", "Vortex3_3", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 5) {

			Drawing::Spriter("Vortextextures", "Vortex3_4", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 6) {

			Drawing::Spriter("Vortextextures", "Vortex3_5", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 7) {

			Drawing::Spriter("Vortextextures", "Vortex3_6", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 8) {

			Drawing::Spriter("Vortextextures", "Vortex3_7", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 9) {

			Drawing::Spriter("Vortextextures", "Vortex3_8", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 10) {

			Drawing::Spriter("Vortextextures", "Vortex3_9", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 11) {

			Drawing::Spriter("Vortextextures", "Vortex3_10", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 12) {

			Drawing::Spriter("Vortextextures", "Vortex3_11", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 13) {

			Drawing::Spriter("Vortextextures", "Vortex3_12", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 14) {

			Drawing::Spriter("Vortextextures", "Vortex3_13", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 15) {

			Drawing::Spriter("Vortextextures", "Vortex3_14", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 16) {

			Drawing::Spriter("Vortextextures", "Vortex3_15", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 17) {

			Drawing::Spriter("Vortextextures", "Vortex3_16", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 18) {

			Drawing::Spriter("Vortextextures", "Vortex3_17", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 19) {

			Drawing::Spriter("Vortextextures", "Vortex3_18", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 20) {

			Drawing::Spriter("Vortextextures", "Vortex3_19", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 21) {

			Drawing::Spriter("Vortextextures", "Vortex3_20", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 22) {

			Drawing::Spriter("Vortextextures", "Vortex3_21", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 23) {

			Drawing::Spriter("Vortextextures", "Vortex3_22", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 24) {

			Drawing::Spriter("Vortextextures", "Vortex3_23", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 25) {

			Drawing::Spriter("Vortextextures", "Vortex3_24", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 26) {

			Drawing::Spriter("Vortextextures", "Vortex3_25", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 27) {

			Drawing::Spriter("Vortextextures", "Vortex3_26", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 28) {

			Drawing::Spriter("Vortextextures", "Vortex3_27", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 29) {

			Drawing::Spriter("Vortextextures", "Vortex3_28", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 30) {

			Drawing::Spriter("Vortextextures", "Vortex3_29", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 31) {

			Drawing::Spriter("Vortextextures", "Vortex3_30", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 32) {

			Drawing::Spriter("Vortextextures", "Vortex3_30", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 33) {

			Drawing::Spriter("Vortextextures", "Vortex3_31", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 34) {

			Drawing::Spriter("Vortextextures", "Vortex3_32", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 35) {

			Drawing::Spriter("Vortextextures", "Vortex3_33", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 36) {

			Drawing::Spriter("Vortextextures", "Vortex3_34", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 37) {

			Drawing::Spriter("Vortextextures", "Vortex3_35", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 38) {

			Drawing::Spriter("Vortextextures", "Vortex3_36", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 39) {

			Drawing::Spriter("Vortextextures", "Vortex3_37", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 40) {

			Drawing::Spriter("Vortextextures", "Vortex3_38", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 41) {

			Drawing::Spriter("Vortextextures", "Vortex3_39", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 42) {

			Drawing::Spriter("Vortextextures", "Vortex3_40", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 43) {

			Drawing::Spriter("Vortextextures", "Vortex3_41", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 44) {

			Drawing::Spriter("Vortextextures", "Vortex3_42", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 45) {

			Drawing::Spriter("Vortextextures", "Vortex3_43", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 46) {

			Drawing::Spriter("Vortextextures", "Vortex3_44", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 47) {

			Drawing::Spriter("Vortextextures", "Vortex3_45", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 48) {

			Drawing::Spriter("Vortextextures", "Vortex3_46", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 49) {

			Drawing::Spriter("Vortextextures", "Vortex3_47", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 50) {

			Drawing::Spriter("Vortextextures", "Vortex3_48", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 51) {

			Drawing::Spriter("Vortextextures", "Vortex3_49", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 52) {

			Drawing::Spriter("Vortextextures2", "Vortex3_50", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 53) {

			Drawing::Spriter("Vortextextures2", "Vortex3_51", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 54) {

			Drawing::Spriter("Vortextextures2", "Vortex3_52", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 55) {

			Drawing::Spriter("Vortextextures2", "Vortex3_53", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 56) {

			Drawing::Spriter("Vortextextures2", "Vortex3_54", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 57) {

			Drawing::Spriter("Vortextextures2", "Vortex3_55", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 58) {

			Drawing::Spriter("Vortextextures2", "Vortex3_56", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 59) {

			Drawing::Spriter("Vortextextures2", "Vortex3_57", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 60) {

			Drawing::Spriter("Vortextextures2", "Vortex3_58", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 61) {

			Drawing::Spriter("Vortextextures2", "Vortex3_59", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 62) {

			Drawing::Spriter("Vortextextures2", "Vortex3_60", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 63) {

			Drawing::Spriter("Vortextextures2", "Vortex3_61", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 64) {

			Drawing::Spriter("Vortextextures2", "Vortex3_62", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 65) {

			Drawing::Spriter("Vortextextures2", "Vortex3_63", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 66) {

			Drawing::Spriter("Vortextextures2", "Vortex3_64", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 67) {

			Drawing::Spriter("Vortextextures2", "Vortex3_65", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 68) {

			Drawing::Spriter("Vortextextures2", "Vortex3_66", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 69) {

			Drawing::Spriter("Vortextextures2", "Vortex3_67", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 70) {

			Drawing::Spriter("Vortextextures2", "Vortex3_68", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 71) {

			Drawing::Spriter("Vortextextures2", "Vortex3_69", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 72) {

			Drawing::Spriter("Vortextextures2", "Vortex3_70", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 73) {

			Drawing::Spriter("Vortextextures2", "Vortex3_71", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 74) {

			Drawing::Spriter("Vortextextures2", "Vortex3_72", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 75) {

			Drawing::Spriter("Vortextextures2", "Vortex3_73", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 76) {

			Drawing::Spriter("Vortextextures2", "Vortex3_74", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 77) {

			Drawing::Spriter("Vortextextures2", "Vortex3_75", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 78) {

			Drawing::Spriter("Vortextextures2", "Vortex3_76", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 79) {

			Drawing::Spriter("Vortextextures2", "Vortex3_77", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 80) {

			Drawing::Spriter("Vortextextures2", "Vortex3_78", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 81) {

			Drawing::Spriter("Vortextextures2", "Vortex3_79", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 82) {

			Drawing::Spriter("Vortextextures2", "Vortex3_80", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 83) {

			Drawing::Spriter("Vortextextures2", "Vortex3_81", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 84) {

			Drawing::Spriter("Vortextextures2", "Vortex3_82", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 85) {

			Drawing::Spriter("Vortextextures2", "Vortex3_83", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 86) {

			Drawing::Spriter("Vortextextures2", "Vortex3_84", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 87) {

			Drawing::Spriter("Vortextextures2", "Vortex3_85", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 88) {

			Drawing::Spriter("Vortextextures2", "Vortex3_86", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 89) {

			Drawing::Spriter("Vortextextures2", "Vortex3_87", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 90) {

			Drawing::Spriter("Vortextextures2", "Vortex3_88", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 91) {

			Drawing::Spriter("Vortextextures2", "Vortex3_89", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 92) {

			Drawing::Spriter("Vortextextures2", "Vortex3_90", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 92) {

			Drawing::Spriter("Vortextextures2", "Vortex3_91", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 93) {

			Drawing::Spriter("Vortextextures2", "Vortex3_92", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 94) {

			Drawing::Spriter("Vortextextures2", "Vortex3_93", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 95) {

			Drawing::Spriter("Vortextextures2", "Vortex3_94", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 96) {

			Drawing::Spriter("Vortextextures2", "Vortex3_95", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 97) {

			Drawing::Spriter("Vortextextures2", "Vortex3_96", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 98) {

			Drawing::Spriter("Vortextextures2", "Vortex3_97", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 99) {

			Drawing::Spriter("Vortextextures2", "Vortex3_98", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 100) {

			Drawing::Spriter("Vortextextures2", "Vortex3_99", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 101) {

			Drawing::Spriter("Vortextextures3", "Vortex3_100", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 102) {

			Drawing::Spriter("Vortextextures3", "Vortex3_101", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 103) {

			Drawing::Spriter("Vortextextures3", "Vortex3_102", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 104) {

			Drawing::Spriter("Vortextextures3", "Vortex3_103", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 105) {

			Drawing::Spriter("Vortextextures3", "Vortex3_104", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 106) {

			Drawing::Spriter("Vortextextures3", "Vortex3_105", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 107) {

			Drawing::Spriter("Vortextextures3", "Vortex3_106", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 108) {

			Drawing::Spriter("Vortextextures3", "Vortex3_107", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 109) {

			Drawing::Spriter("Vortextextures3", "Vortex3_108", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 110) {

			Drawing::Spriter("Vortextextures3", "Vortex3_109", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 111) {

			Drawing::Spriter("Vortextextures3", "Vortex3_110", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 112) {

			Drawing::Spriter("Vortextextures3", "Vortex3_111", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 113) {

			Drawing::Spriter("Vortextextures3", "Vortex3_112", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 114) {

			Drawing::Spriter("Vortextextures3", "Vortex3_113", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 115) {

			Drawing::Spriter("Vortextextures3", "Vortex3_114", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 116) {

			Drawing::Spriter("Vortextextures3", "Vortex3_115", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 117) {

			Drawing::Spriter("Vortextextures3", "Vortex3_116", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 118) {

			Drawing::Spriter("Vortextextures3", "Vortex3_117", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 119) {

			Drawing::Spriter("Vortextextures3", "Vortex3_118", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 120) {

			Drawing::Spriter("Vortextextures3", "Vortex3_119", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 121) {

			Drawing::Spriter("Vortextextures3", "Vortex3_120", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 122) {

			Drawing::Spriter("Vortextextures3", "Vortex3_121", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 123) {

			Drawing::Spriter("Vortextextures3", "Vortex3_122", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 124) {

			Drawing::Spriter("Vortextextures3", "Vortex3_123", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 125) {

			Drawing::Spriter("Vortextextures3", "Vortex3_124", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 126) {

			Drawing::Spriter("Vortextextures3", "Vortex3_125", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 127) {

			Drawing::Spriter("Vortextextures3", "Vortex3_126", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 128) {

			Drawing::Spriter("Vortextextures3", "Vortex3_127", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 129) {

			Drawing::Spriter("Vortextextures3", "Vortex3_128", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 130) {

			Drawing::Spriter("Vortextextures3", "Vortex3_129", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 131) {

			Drawing::Spriter("Vortextextures3", "Vortex3_130", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 132) {

			Drawing::Spriter("Vortextextures3", "Vortex3_131", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 133) {

			Drawing::Spriter("Vortextextures3", "Vortex3_131", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 134) {

			Drawing::Spriter("Vortextextures3", "Vortex3_132", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 135) {

			Drawing::Spriter("Vortextextures3", "Vortex3_133", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 136) {

			Drawing::Spriter("Vortextextures3", "Vortex3_134", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 137) {

			Drawing::Spriter("Vortextextures3", "Vortex3_135", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 138) {

			Drawing::Spriter("Vortextextures3", "Vortex3_136", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 139) {

			Drawing::Spriter("Vortextextures3", "Vortex3_137", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 140) {

			Drawing::Spriter("Vortextextures3", "Vortex3_138", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 141) {

			Drawing::Spriter("Vortextextures3", "Vortex3_139", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 142) {

			Drawing::Spriter("Vortextextures3", "Vortex3_140", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 143) {

			Drawing::Spriter("Vortextextures3", "Vortex3_141", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture == 144) {

			Drawing::Spriter("Vortextextures3", "Vortex3_142", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture == 145) {

			Drawing::Spriter("Vortextextures3", "Vortex3_143", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 146) {

			Drawing::Spriter("Vortextextures3", "Vortex3_144", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 147) {

			Drawing::Spriter("Vortextextures3", "Vortex3_145", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 148) {

			Drawing::Spriter("Vortextextures3", "Vortex3_146", Settings::menuX, 0.0800f, 0.204f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 149) {

			Drawing::Spriter("Vortextextures3", "Vortex3_147", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture == 150) {

			Drawing::Spriter("Vortextextures3", "Vortex3_148", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
	}
	

	if (Menu::Drawing::Header2 == true && Menu::Drawing::Header1 == false)
	{
		static int i2 = 0;
		if (i2 % 2 == 0)
		{
			
				if (Menu::Settings::titleRectTexture2 < 59) {
					Menu::Settings::titleRectTexture2++;
				}
				else {
					Menu::Settings::titleRectTexture2 = 1;
				}
				
			
		}
		i2++;
		if (Menu::Settings::titleRectTexture2 == 1) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00000", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 2) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00001", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 3) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00002", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 4) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00003", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 5) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00004", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture2 == 6) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00005", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture2 == 7) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00006", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 8) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00007", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 9) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00008", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 10) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00009", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 11) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00010", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 12) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00011", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 13) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00012", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 14) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00013", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 15) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00014", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 16) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00015", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture2 == 17) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00016", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture2 == 18) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00017", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 19) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00018", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 20) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00019", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 21) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00020", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 22) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00021", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 23) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00022", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 24) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00023", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 25) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00024", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 26) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00025", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 27) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00026", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture2 == 28) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00027", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture2 == 29) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00028", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 30) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00029", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 31) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00030", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 32) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00031", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 33) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00032", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 34) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00033", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 35) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00034", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 36) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00035", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 37) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00036", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 38) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00037", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 39) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00038", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
		if (Menu::Settings::titleRectTexture2 == 40) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00039", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
		}
		if (Menu::Settings::titleRectTexture2 == 41) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00040", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 42) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00041", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 43) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00042", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 44) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00043", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 45) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00044", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 46) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00045", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 47) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00046", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 48) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00047", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 49) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00048", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 50) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00049", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 51) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00050", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 52) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00051", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 53) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00052", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 54) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00053", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 55) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00054", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 56) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00055", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 57) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00056", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 58) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00057", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 59) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00058", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}

		if (Menu::Settings::titleRectTexture2 == 60) {

			Drawing::Spriter("Vortextextures4", "Comp 1_00059", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
		}
	}
	
		
	

	
	

	

	/*if (Menu::Settings::titleRectTexture == 151) {

		Drawing::Spriter("Vortextextures3", "Vortex3_149", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);
	}*/

	





	/*if (Menu::Settings::titleRectTexture == 6) {

		Drawing::Spriter("saphirtextures", "test6", Settings::menuX, 0.0800f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);

	}*/

	/*float DrawGlareX = 0.435001f;;
	float DrawGlareY = 0.4954f;
	float DrawGlareScaleX = 1.1880f;
	float DrawGlareScaleY = 1.0215f;*/

	//Menu::Drawing::Spriter("commonmenu", "gradient_bgd", Settings::menuX, 0.095f, 0.85f, 0.85f, 0, 255, 255, 255, 255);

	//Drawing::Spriter("Vortextextures", "back", Settings::menuX, 0.1900f, 0.24f, 0.090f, 0, Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b, Menu::Settings::titleRect.a);


	float fick = 0.356000f;
	float fxx = 0.4954f;
	float fxxx = 1.0480f;
	float fxxxx = 1.0215f;

	if (Menu::Settings::GlareOnOff == true) {
		DrawGlare(Settings::menuX + fick, fxx, fxxx, fxxxx, 255, 255, 255, 255);
	}

	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_COLOUR(rgbaf.r, rgbaf.g, rgbaf.b, rgbaf.a);
	UI::SET_TEXT_FONT(rgbaf.f);
	UI::SET_TEXT_SCALE(size.w, size.h);
	UI::SET_TEXT_DROPSHADOW(1, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(1, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME((char*)text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(position.x, position.y);
}


int Menu::Settings::offradard = 0;
int Menu::Settings::bullet = 0;
int Menu::Settings::notoirff = 0;
bool Menu::Settings::DrawTextOutline = false;
bool Menu::Settings::displayEnd = true;
bool Menu::Settings::GlareOnOff = false;
float Menu::Settings::menuX = 0.17f;
float Menu::Settings::menuY = 0.17f;
bool Menu::Settings::selectPressed = false;
bool Menu::Settings::leftPressed = false;
float Menu::Settings::bulletp;
float Menu::Settings::camerra;

float Menu::Settings::bulletppp;
int Menu::Settings::Minufick = 0;
int Menu::Settings::secfick = 0;
int Menu::Settings::Hourfick = 0;

int Menu::Settings::alpha = 255;
int Menu::Settings::LVL = 8000;
bool Menu::Settings::rightPressed = false;
int Menu::Settings::maxVisOptions = 16;
int Menu::Settings::currentOption = 0;
int Menu::Settings::optionCount = 0;
int Menu::Settings::setspoofrankpl = 0;
int Menu::Settings::alpha2 = 2;
SubMenus Menu::Settings::currentMenu;
int Menu::Settings::menuLevel = 0;
int Menu::Settings::optionsArray[1000];
SubMenus Menu::Settings::menusArray[1000];
int Menu::Settings::gayStealth = 10000000;


int Menu::Settings::run = 2;
float Menu::Settings::GlareXPos = 0.285f;
bool Menu::Settings::DrawGradientRect = false;


RGBAF Menu::Settings::PremiumTitle{ 255, 255, 0, 255, 1 }; 
RGBAF Menu::Settings::titleText{ 255, 255, 255, 255, 7 };
RGBAF Menu::Settings::titleText3{ 239, 255, 255, 255, 6 };
RGBAF Menu::Settings::titleText2{ 255, 255, 255, 255, 1 };
RGBA Menu::Settings::titleRect{ 255, 255, 255, 255 };
RGBAF Menu::Settings::integre{ 255, 255, 255, 255, 6 };
RGBAF Menu::Settings::integre2{ 255, 255, 255, 130, 2 };
RGBAF Menu::Settings::SelectedText{ 255, 255, 255, 255, 0 };
RGBAF Menu::Settings::count{ 255, 255, 255, 255, 6 };
RGBAF Menu::Settings::arrow{ 0, 0, 0, 255 };
RGBAF Menu::Settings::arrowww{ 0, 0, 0, 255 };
RGBAF Menu::Settings::arrow2{ 0, 180, 255, 255, 3 };
RGBAF Menu::Settings::breakText{ 255, 255, 255, 255, 1 };
RGBA Menu::Settings::titleEnd{ 0, 0, 0, 200 };
RGBA Menu::Settings::text{ 255, 255, 255, 255 };
RGBA Menu::Settings::title_sprite{ 255,255,255,255 };
RGBA Menu::Settings::title_sprite2{ 255,255,255,255 };
RGBA Menu::Settings::titleline{ 255,200,200,255 };
RGBA Menu::Settings::scrollerr{ 255,200,200,0 };
RGBAF Menu::Settings::title_end{ 255,255,255,255,4 };
RGBAF Menu::Settings::optionText{ 255, 255, 255, 255, 0 };
RGBAF Menu::Settings::optionTextt{ 255, 255, 255, 180, 0 };
RGBA Menu::Settings::optionRect{ 0, 0, 0, 160 };
RGBA Menu::Settings::scroller{ 255, 255, 255, 200 };
RGBA Menu::Settings::line{ 255,255,255,255 };
RGBA line2{ 0, 247, 255,255 };
RGBA Menu::Settings::Endrect{ 0,0,0,255 };

RGBA Menu::Settings::linego{ 255,255,255,255 };
RGBA Menu::Settings::primary{ 255, 255, 0, 100 };
RGBA Menu::Settings::secondary{ 255,255,255,255 };
RGBA Menu::Settings::Endrectlol{ 0, 0, 0, 200 };
RGBA Menu::Settings::Endrectloll{ 255, 255, 255, 255 };
//RGBA Menu::Settings::HUD_COLOUR_PAUSE_BGR{ 0, 0, 0, 255 };
//RGBA Menu::Settings::HUD_COLOUR_WAYPOINTR{ 0, 0, 0, 255 };
//RGBA Menu::Settings::HUD_COLOUR_MICHAELR{ 0, 0, 0, 255 };
//RGBA Menu::Settings::HUD_COLOUR_FRANKLINR{ 0, 0, 0, 255 };
//RGBA Menu::Settings::HUD_COLOUR_TREVORR{ 0, 0, 0, 255 };
//RGBA Menu::Settings::HUD_COLOUR_FREEMODER{ 0, 0, 0, 255 };




/*float xxxxx = 0.1415f;
void scrollbar() {
	using namespace Menu;
	int curopt = Settings::currentOption;
	int optcnt = Settings::optionCount;
	int maxopt = Settings::maxVisOptions;
	if (Settings::menuLevel > 0) {
		if (optcnt > maxopt) {
			GRAPHICS::DRAW_RECT(Settings::menuX - 0.130, 0.437f, 0.012f, (maxopt * 0.035f + 0.039f), 14, 14, 14, 196);
			GRAPHICS::DRAW_RECT(Settings::menuX - 0.130f, ((((curopt * (maxopt * 0.035f)) / optcnt))) + 0.155f, 0.010f, 0.035f, 0, 247, 255, 235);
		}
	}
}*/






namespace Globe
{
	int gGlareHandle; // int
	float gGlareDir;

	// Function(s)
	float conv360(float base, float min, float max) {
		// This is the function the script used. I just adapted it for C++.
		float fVar0;
		if (min == max) return min;
		fVar0 = max - min;

		if (base < min) base += fVar0;
		return base;
	}
	void drawGlare(float pX, float pY, float sX = 1, float sY = 1, int r = 255, int g = 255, int b = 255) {

		gGlareHandle = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MENU_GLARE");

		Vector3 rot = CAM::_GET_GAMEPLAY_CAM_ROT(2);

		float dir = conv360(rot.z, 0, 360);

		if ((gGlareDir == 0 || gGlareDir - dir > 0.5) || gGlareDir - dir < -0.5) {

			gGlareDir = dir;

			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(gGlareHandle, "SET_DATA_SLOT");

			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(gGlareDir);

			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}

		GRAPHICS::DRAW_SCALEFORM_MOVIE(gGlareHandle, pX, pY, sX, sY, r, g, b, 255, 0);

	}
};



void Menu::PremiumTitle(const char * title)
{
	Drawing::Title("Version: 2.0.5", Settings::titleText, { Settings::menuX, 0.100f }, { 0.40f, 0.40f }, true);
}
void Menu::DRAW_TEXTURE(std::string Streamedtexture, std::string textureName, float x, float y, float width, float height, float rotation, int r, int g, int b, int a)
{
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED((char*)Streamedtexture.c_str()))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT((char*)Streamedtexture.c_str(), false);
	}
	else
	{
		GRAPHICS::DRAW_SPRITE((char*)Streamedtexture.c_str(), (char*)textureName.c_str(), x, y, width, height, rotation, r, g, b, a);
	}
}


//void Features::headerlist()
//{
	//Drawing::Spriter("saphirtextures", "header", Settings::menuX, 0.0800f, 0.21f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
//}

float gGlareDir;
float conv360(float base, float min, float max)
{
	float fVar0;
	if (min == max) return min;
	fVar0 = max - min;
	base -= SYSTEM::ROUND(base - min / fVar0) * fVar0;
	if (base < min) base += fVar0;
	return base;
}
//float DrawGlareX = 1.120f;
//float DrawGlareY = 0.507f;
//float DrawGlareScaleX = 1.0480f;
//float DrawGlareScaleY = 0.958f;

void Menu::DrawGlare(float pX, float pY, float scaleX, float scaleY, int red, int green, int blue, int alpha)
{
	int gGlareHandle = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MENU_GLARE");
	Vector3 rot = CAM::GET_GAMEPLAY_CAM_ROT(2);
	float dir = conv360(rot.z, 0, 360);
	if ((gGlareDir == 0 || gGlareDir - dir > 0.5) || gGlareDir - dir < -0.5)
	{
		gGlareDir = dir;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(gGlareHandle, "SET_DATA_SLOT");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(gGlareDir);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE(gGlareHandle, pX, pY, scaleX, scaleY, red, green, blue, alpha, 0);
}


void Menu::render_globe(const float x, const float y, const float sx, const float sy, const int r, const int g,

	const int b)

{

	float g_glare_dir = 0;

	auto g_glare_handle = GRAPHICS::REQUEST_SCALEFORM_MOVIE(static_cast<char*>("MP_MENU_GLARE"));

	const auto rot = CAM::_GET_GAMEPLAY_CAM_ROT(2);

	const auto dir = conv360(rot.z, 0, 360);

	if ((g_glare_dir == 0 || g_glare_dir - dir > 0.5) || g_glare_dir - dir < -0.5)

	{

		g_glare_dir = dir;

		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(g_glare_handle, static_cast<char*>("SET_DATA_SLOT"));

		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(g_glare_dir);

		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	}

	GRAPHICS::DRAW_SCALEFORM_MOVIE(g_glare_handle, x, y, sx, sy, r, g, b, 20, 0);

	GRAPHICS::_SCREEN_DRAW_POSITION_END();

	//GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&g_glare_handle);

}

//float fick = 0.335001f;
//float fxx = 0.4954f;
//float fxxx = 1.0480f;
//float fxxxx = 1.0215f;

int prevOption = 0;
float prevf;
float ScrollerSpeed = 0.01f; // here like 0.01f, it's slower //can i change the colour lilke transparent? of scroller? ye yes lol 
const auto animscroll = [](int* prev, const int cur) {
	if (prevf == NULL)
		prevf = *prev * 0.035f + 0.1415f;
	const auto curf = cur * 0.035f + 0.1415f;
	if (Menu::Settings::currentOption <= Menu::Settings::maxVisOptions && Menu::Settings::optionCount <= Menu::Settings::maxVisOptions) {
		if (*prev != cur)
		{
			if (prevf < curf)
			{
				if (prevf + ScrollerSpeed > curf)
					prevf = prevf + (curf - prevf);
				else
					prevf = prevf + ScrollerSpeed;
				GRAPHICS::DRAW_SPRITE("Vortexassets", "Vortexscroll", Menu::Settings::menuX, prevf, 0.24f, 0.035f, 0, 255, 255, 255, 255);
				if (prevf >= curf)
				{
					prevf = curf;
					*prev = cur;
				}
			}
			if (prevf > curf)
			{
				if (prevf - ScrollerSpeed < curf)
					prevf = prevf - (prevf - curf);
				prevf = prevf - ScrollerSpeed;
				GRAPHICS::DRAW_SPRITE("Vortexassets", "Vortexscroll", Menu::Settings::menuX, prevf, 0.24f, 0.035f, 0, 255, 255, 255, 255);
				if (prevf <= curf)
				{
					prevf = curf;
					*prev = cur;
				}
			}
		}
		else
		{
			*prev = cur;
			GRAPHICS::DRAW_SPRITE("Vortexassets", "Vortexscroll", Menu::Settings::menuX, cur * 0.035f + 0.1415f, 0.24f, 0.035f, 0, 255, 255, 255, 255);
			
		}
	}
	else if ((Menu::Settings::optionCount > (Menu::Settings::currentOption - Menu::Settings::maxVisOptions)) && Menu::Settings::optionCount <= Menu::Settings::currentOption) {
		//GRAPHICS::DRAW_RECT(Menu::Settings::menuX, ((Menu::Settings::optionCount - (Menu::Settings::currentOption - Menu::Settings::maxVisOptions)) * 0.035f + 0.1415f), 0.24f, 0.035f, Menu::Settings::scroller.r, Menu::Settings::scroller.g, Menu::Settings::scroller.b, Menu::Settings::scroller.a);
		GRAPHICS::DRAW_SPRITE("Vortexassets", "Vortexscroll", Menu::Settings::menuX, ((Menu::Settings::optionCount - (Menu::Settings::currentOption - Menu::Settings::maxVisOptions)) * 0.035f + 0.1415f), 0.24f, 0.035f, 0, 255, 255, 255, 255);
	}
}; // lol ok :)) i will try more with that ip but you saw... it's really bugged idk why ye you have changed everything? lol

float titlebox = 0.17f;
void Menu::Title(const char * title)
{

    Drawing::Title("", Settings::titleText, { Settings::menuX, 0.060f }, { 0.85f, 0.85f }, true);
	//Drawing::Spriter("saphirtextures", Features::current_header, Settings::menuX, 0.0800f, 0.21f, 0.090f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	
	//render_globe(Menu::Settings::menuX + fick, fxx, fxxx, fxxxx, 255, 255, 255); //globe


	UI::HIDE_HELP_TEXT_THIS_FRAME();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_NEXT_CAMERA, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_CHARACTER_WHEEL, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MELEE_ATTACK_LIGHT, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MELEE_ATTACK_HEAVY, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MULTIPLAYER_INFO, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_PHONE, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MELEE_ATTACK_ALTERNATE, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_VEH_CIN_CAM, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MAP_POI, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_PHONE, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_VEH_RADIO_WHEEL, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_VEH_HEADLIGHT, true);
}
void Menu::Subtitle(const char * title)
{
	Drawing::Spriter("CommonMenu", "interaction_bgd", Settings::menuX, (Settings::optionCount + 1) * 0.035f + 0.1065f, 0.24f, 0.035f, 180, Settings::titleEnd.r, Settings::titleEnd.g, Settings::titleEnd.b, Settings::titleEnd.a);
	Drawing::Text(title, Settings::optionText, { Settings::menuX - 0.115f, 0.128f }, { 0.32f, 0.32f }, false);

}
bool Menu::Option(const char * option)
{
	Settings::optionCount++;
	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
	if (Settings::currentOption <= 16 && Settings::optionCount <= 16)
	{
		Drawing::Text(option, onThis ? Settings::SelectedText : Settings::optionText, { Settings::menuX - 0.111f, (Settings::optionCount)*0.035f + 0.128f }, { 0.20f, 0.32f }, false);
		Drawing::Rect(Settings::optionRect, { Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f }, { 0.24f, 0.035f });
		onThis ? Drawing::Rect(Settings::scrollerr, { Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f }, { 0.24f, 0.035f }) : NULL;
		onThis ? Drawing::Spriter("Vortexassets", "Vortexscroll", Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f, 0.24f, 0.035f, 0, 255, 255, 255, 255) : NULL;
	}
	else if (Settings::optionCount > (Settings::currentOption - 16) && Settings::optionCount <= Settings::currentOption)
	{
		Drawing::Text(option, onThis ? Settings::SelectedText : Settings::optionText, { Settings::menuX - 0.111f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.128f }, { 0.20f, 0.32f }, false);
		Drawing::Rect(Settings::optionRect, { Settings::menuX,  (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f }, { 0.24f, 0.035f });
		onThis ? Drawing::Rect(Settings::scrollerr, { Settings::menuX,  (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f }, { 0.24f, 0.035f }) : NULL;
		onThis ? Drawing::Spriter("Evoke", "Evokescroll", Settings::menuX, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f, 0.24f, 0.035f, 0, 255, 255, 255, 255) : NULL;
		
	}
	if (onThis)
		animscroll(&prevOption, Settings::currentOption);
	if (Settings::currentOption == Settings::optionCount)
	{
		if (Settings::selectPressed)
		{
			return true;
		}
	}
	return false;
}

bool Menu::Optionn(const char * option)
{
	Settings::optionCount++;
	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
	if (Settings::currentOption <= 16 && Settings::optionCount <= 16)
	{
		Drawing::Text(option, onThis ? Settings::SelectedText : Settings::optionText, { Settings::menuX - 0.111f, (Settings::optionCount)*0.035f + 0.128f }, { 0.20f, 0.32f }, false);
		Drawing::Rect(Settings::optionRect, { Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f }, { 0.24f, 0.035f });
		onThis ? Drawing::Rect(Settings::scrollerr, { Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f }, { 0.24f, 0.035f }) : NULL;
		onThis ? Drawing::Spriter("Vortexassets", "Vortexscroll", Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f, 0.24f, 0.035f, 0, 255, 255, 255, 255) : NULL;
	}
	else if (Settings::optionCount > (Settings::currentOption - 16) && Settings::optionCount <= Settings::currentOption)
	{
		Drawing::Text(option, onThis ? Settings::SelectedText : Settings::optionText, { Settings::menuX - 0.111f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.128f }, { 0.20f, 0.32f }, false);
		Drawing::Rect(Settings::optionRect, { Settings::menuX,  (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f }, { 0.24f, 0.035f });
		onThis ? Drawing::Rect(Settings::scrollerr, { Settings::menuX,  (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f }, { 0.24f, 0.035f }) : NULL;
		onThis ? Drawing::Spriter("Evoke", "Evokescroll", Settings::menuX, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f, 0.24f, 0.035f, 0, 255, 255, 255, 255) : NULL;

	}
	if (onThis)
		animscroll(&prevOption, Settings::currentOption);
	if (Settings::currentOption == Settings::optionCount)
	{
		if (Settings::selectPressed)
		{
			return true;
		}
	}
	return false;
}





//bool Menu::Settings::MenuPlayer(const char * option, SubMenus newSub, int player)
//{
//	Option(option);
//	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
//	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions) {
//		//Drawing::Text(">>", Settings::optionText, { Settings::menuX + 0.0105f, Settings::optionCount * 0.035f + 0.160f }, { 0.4f, 0.4f }, true);
//		if (onThis) {
//			Features::LoadPlayerInfo(PLAYER::GET_PLAYER_NAME(player), player);
//		}
//	}
//	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption) {
//		//Drawing::Text(">>", Settings::optionText, { Settings::menuX + 0.090f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.160f }, { 0.4f, 0.4f }, true);
//		if (onThis) {
//			Features::LoadPlayerInfo(PLAYER::GET_PLAYER_NAME(player), player);
//		}
//	}
//
//	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
//		MenuLevelHandler::MoveMenu(newSub);
//		return true;
//	}
//	return false;
//}
//
//
//bool Menu::Settings::MenuPlayer(const char * option, SubMenus newSub, int player, std::function<void()> function)
//{
//	MenuPlayer(option, newSub, player);
//
//	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
//		function();
//		return true;
//	}
//	return false;
//}


bool Menu::MenuPlayer(const char * option, std::string headShot, SubMenus newSub, int player)
{
	Option(option);
	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions) {
		Drawing::Spriter(headShot, headShot, Settings::menuX + 0.090f, (Settings::optionCount * 0.035f + 0.141f), 0.015f, 0.027f, 0, 255, 255, 255, 255);
		Drawing::Text("", onThis ? Settings::arrow2 : Settings::arrow, { Settings::menuX + 0.090f, Settings::optionCount * 0.035f + 0.141f }, { 0.4f, 0.4f }, true);
	}
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption) {
		Drawing::Spriter(headShot, headShot, Settings::menuX + 0.090f, ((Settings::optionCount - (Settings::currentOption - 16)) * 0.035f + 0.141f), 0.015f, 0.027f, 0, 255, 255, 255, 255);
		Drawing::Text("", onThis ? Settings::arrow2 : Settings::arrow, { Settings::menuX + 0.090f, (Settings::optionCount - (Settings::currentOption - 16))* 0.035f + 0.90f }, { 0.4f, 0.4f }, true);
		////Drawing::Spriter("Textures", b00l ? "on" : "off", Settings::menuX + 0.110f, ((Settings::optionCount - (Settings::currentOption - 16)) * 0.035f + 0.141f), 0.03f, 0.05f, 0, 255, 255, 255, 255);

	}

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		MenuLevelHandler::MoveMenu(newSub);
		return true;
	}
	return false;
}

bool Menu::MenuPlayer(const char * option, std::string headShot, SubMenus newSub, int player, std::function<void()> function)
{
	MenuPlayer(option, headShot, newSub, player);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	return false;
}

bool Menu::Break(const char * option)
{
	Settings::optionCount++;
	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
	if (Settings::currentOption <= 16 && Settings::optionCount <= 16)
	{
		Drawing::Text(option, Settings::breakText, { Settings::menuX, (Settings::optionCount)*0.035f + 0.125f }, { 0.45f, 0.45f }, true);
		Drawing::Rect(Settings::optionRect, { Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f }, { 0.24f, 0.035f });
	}
	else if (Settings::optionCount > (Settings::currentOption - 16) && Settings::optionCount <= Settings::currentOption)
	{
		Drawing::Text(option, Settings::breakText, { Settings::menuX, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.125f }, { 0.45f, 0.45f }, true);
		Drawing::Rect(Settings::optionRect, { Settings::menuX,  (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f }, { 0.24f, 0.035f });
	}
	return false;
}
bool Menu::Option(const char * option, std::function<void()> function)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	return false;
}
bool Menu::MenuOptionn(const char * option, SubMenus newSub)
{
	Optionn(option);

	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Spriter("Vortexassets", onThis ? "arrow" : "arrow", (Settings::menuX + 0.098f), ((Settings::optionCount)* 0.035f + 0.142f), 0.015f, 0.027f, 0, onThis ? 255 : 255, onThis ? 255 : 255, 255, 255);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Spriter("Vortexassets", onThis ? "arrow" : "arrow", (Settings::menuX + 0.098f), ((Settings::optionCount - (Settings::currentOption - 16))* 0.035f + 0.142f), 0.015f, 0.027f, 0, onThis ? 255 : 255, onThis ? 255 : 255, 255, 255);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		MenuLevelHandler::MoveMenu(newSub);
		return true;
	}
	return false;
}
bool Menu::MenuOptionn(const char * option, SubMenus newSub, std::function<void()> function)
{
	MenuOptionn(option, newSub);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	return false;
}
bool Menu::MenuOption(const char * option, SubMenus newSub)
{
    Option(option);

    bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
    if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Spriter("Vortexassets", onThis ? "arrow" : "arrow", (Settings::menuX + 0.098f), ((Settings::optionCount)* 0.035f + 0.142f), 0.015f, 0.027f, 0, onThis ? 255 : 255, onThis ? 255 : 255, 255, 255);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Spriter("Vortexassets", onThis ? "arrow" : "arrow", (Settings::menuX + 0.098f), ((Settings::optionCount - (Settings::currentOption - 16))* 0.035f + 0.142f), 0.015f, 0.027f, 0, onThis ? 255 : 255, onThis ? 255 : 255, 255, 255);

    if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
        MenuLevelHandler::MoveMenu(newSub);
        return true;
    }
    return false;
}
bool Menu::MenuOption(const char * option, SubMenus newSub, std::function<void()> function)
{
	MenuOption(option, newSub);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	return false;
}

bool Menu::Toggle(const char * option, bool & b00l)
{
	Option(option);
	if (b00l)
	{
		if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
			Drawing::Spriter("Vortexassets", b00l ? "Vortexon" : "Vortexoff", Settings::menuX + 0.105f, (Settings::optionCount * 0.035f + 0.141f), 0.02f, 0.03f, 0, 255, 255, 255, 200);
		else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
			Drawing::Spriter("Vortexassets", b00l ? "Vortexon" : "VortexOff", Settings::menuX + 0.105f, ((Settings::optionCount - (Settings::currentOption - 16)) * 0.035f + 0.141f), 0.02f, 0.03f, 0, 255, 255, 255, 200);
	}
	else
	{
		if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
			Drawing::Spriter("Vortexassets", b00l ? "Vortexon" : "Vortexoff", Settings::menuX + 0.105f, (Settings::optionCount * 0.035f + 0.141f), 0.02f, 0.03f, 0, 255, 255, 255, 200);
		else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
			Drawing::Spriter("Vortexassets", b00l ? "Vortexon" : "Vortexoff", Settings::menuX + 0.105f, ((Settings::optionCount - (Settings::currentOption - 16)) * 0.035f + 0.141f), 0.02f, 0.03f, 0, 255, 255, 255, 200);
	}
	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		b00l ^= 1;
		return true;
	}
	return false;
}
bool Menu::Toggle(const char * option, bool & b00l, std::function<void()> function)
{
	Toggle(option, b00l);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	return false;
}
int NumberKeyboardg() {
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(1, "", "", "", "", "", "", 10);
	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return 0;
	return atof(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
}
bool Menu::Int(const char * option, int & _int, int min, int max, int step)
{
	Option(option);
	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
	if (Settings::optionCount == Settings::currentOption) {
		if (Settings::leftPressed) {
			_int < max ? _int += step : _int = min;
		}
		if (Settings::rightPressed) {
			_int >= min ? _int -= step : _int = max;
		}

		_int < min ? _int = max : _int > max ? _int = min : NULL;


		if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
			int number = NumberKeyboardg();
			if (number > max) {
				_int = max;
			}
			else if (number < min) {
				_int = min;
			}
			else {
				_int = number;
			}
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions) 
		Drawing::Text(Tools::StringToChar("~w~(" + std::to_string(_int) + ") ~b~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.130f }, { 0.28f, 0.28f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption) 
		Drawing::Text(Tools::StringToChar("~w~(" + std::to_string(_int) + ") ~b~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.070f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.130f }, { 0.28f, 0.28f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
bool Menu::Int(const char * option, int & _int, int min, int max)
{
	Option(option);
	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
	if (Settings::optionCount == Settings::currentOption) {
		if (Settings::leftPressed) {
			_int < max ? _int++ : _int = min;
		}
		if (Settings::rightPressed) {
			_int >= min ? _int-- : _int = max;
		}
		if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
			int number = NumberKeyboardg();
			if (number > max) {
				_int = max;
			}
			else if (number < min) {
				_int = min;
			}
			else {
				_int = number;
			}
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(Tools::StringToChar("~w~(" + std::to_string(_int) + ") ~b~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.130f }, { 0.28f, 0.28f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(Tools::StringToChar("~w~(" + std::to_string(_int) + ") ~b~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.130f }, { 0.28f, 0.28f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
bool Menu::Int(const char * option, int & _int, int min, int max, std::function<void()> function)
{
	Int(option, _int, min, max);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}
bool Menu::Int(const char * option, int & _int, int min, int max, int step, std::function<void()> function)
{
	Int(option, _int, min, max, step);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}
//speedometer 
void Menu::AddSmallInfo2(char* text, short line)
{
	if (line == 1) {
		Drawing::Rect(Settings::optionRect, { 0.815f, 0.875f }, { 0.115f, 13 * 0.035f + -0.193f });
	}
	Drawing::Text(text, Settings::count, { 0.815f, 0.870f }, { 0.75f, 0.75f }, false);

}
#pragma warning(disable: 4244)
bool Menu::Float(const char * option, float & _float, int min, int max)
{
	bool onThis = Settings::currentOption == Settings::optionCount + 1 ? true : false;
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		if (Settings::rightPressed) {
			_float <= min ? _float = max : _float -= 0.1f;
		}
		if (Settings::leftPressed) {
			_float >= max ? _float = min : _float += 0.1f;
		}
		_float < min ? _float = max : _float > max ? _float = min : NULL;
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions) {
		std::string currStr = std::to_string(_float);
		std::string currStr2(currStr.begin(), std::find(currStr.begin(), currStr.end(), '.'));
		Drawing::Text(Tools::StringToChar("(" + currStr.substr(0, (currStr2.length() + 3)) + ") ~b~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.073f, Settings::optionCount * 0.035f + 0.13f }, { 0.28f, 0.28f }, true);
	}
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption) {
		std::string currStr = std::to_string(_float);
		std::string currStr2(currStr.begin(), std::find(currStr.begin(), currStr.end(), '.'));
		Drawing::Text(Tools::StringToChar("(" + currStr.substr(0, (currStr2.length() + 3)) + ") ~b~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.073f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.13f }, { 0.28f, 0.28f }, true);
	}

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}

bool Menu::Float(const char * option, float & _float, int min, int max, int step)
{
	bool onThis = Settings::currentOption == Settings::optionCount + 1 ? true : false;
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		if (Settings::rightPressed) {
			_float <= min ? _float = max : _float -= step;
		}
		if (Settings::leftPressed) {
			_float >= max ? _float = min : _float += step;
		}
		_float < min ? _float = max : _float > max ? _float = min : NULL;
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions) {
		std::string currStr = std::to_string(_float);
		std::string currStr2(currStr.begin(), std::find(currStr.begin(), currStr.end(), '.'));
		Drawing::Text(Tools::StringToChar("(" + currStr.substr(0, (currStr2.length() + 6)) + ") ~b~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.073f, Settings::optionCount * 0.035f + 0.13f }, { 0.28f, 0.28f }, true);
	}
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption) {
		std::string currStr = std::to_string(_float);
		std::string currStr2(currStr.begin(), std::find(currStr.begin(), currStr.end(), '.'));
		Drawing::Text(Tools::StringToChar("(" + currStr.substr(0, (currStr2.length() + 6)) + ") ~b~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.073f, (Settings::optionCount - (Settings::currentOption - 10))*0.035f + 0.13f }, { 0.28f, 0.28f }, true);
	}

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
#pragma warning(default: 4244)

bool Menu::Float(const char * option, float & _float, int min, int max, std::function<void()> function)
{
	Float(option, _float, min, max);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}

bool Menu::Float(const char * option, float & _float, int min, int max, int step, std::function<void()> function)
{
	Float(option, _float, min, max, step);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}

#pragma warning(disable: 4267)
bool Menu::IntVector(const char * option, std::vector<int> Vector, int & position)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		int max = Vector.size() - 1;
		int min = 0;
		if (Settings::leftPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::rightPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(Tools::StringToChar(std::to_string(Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, { 0.5f, 0.5f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(Tools::StringToChar(std::to_string(Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, { 0.5f, 0.5f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}

bool Menu::IntVector(const char * option, std::vector<int> Vector, int & position, std::function<void()> function)
{
	IntVector(option, Vector, position);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}

bool Menu::FloatVector(const char * option, std::vector<float> Vector, int & position)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		size_t max = Vector.size() - 1;
		int min = 0;
		if (Settings::leftPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::rightPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(Tools::StringToChar(std::to_string(Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, { 0.5f, 0.5f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(Tools::StringToChar(std::to_string(Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, { 0.5f, 0.5f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}

bool Menu::FloatVector(const char * option, std::vector<float> Vector, int & position, std::function<void()> function)
{
	FloatVector(option, Vector, position);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}

//bool Menu::StringVector(const char * option, std::string Vector, int & position)
//{
//	constexpr static const VECTOR2_2 textSize = { 0.32f, 0.32f };
//	bool selected = Settings::optionCount == Settings::currentOption ? true : false;
//	Option(option);
//	if (Settings::optionCount == Settings::currentOption) {
//		//size_t max = Vector.size() - 1;
//		size_t max = Vector.size() - 1;
//		int min = 0;
//		if (Settings::leftPressed) {
//			position >= 1 ? position-- : position = max;
//		}
//		if (Settings::rightPressed) {
//			position < max ? position++ : position = min;
//		}
//	}
//
//	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
//		Drawing::Text(Tools::StringToChar(Vector), Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, textSize, true);
//	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
//		Drawing::Text(Tools::StringToChar(Vector), Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, textSize, true);
//
//	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
////	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
//	//else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
//	else return false;
//}
/*
bool Menu::StringVector(const char * option, std::vector<std::string> Vector, int & position, std::function<void()> function)
{
	StringVector(option, Vector, position);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}
*/
void Menu::info(const char * info)
{
	if (Settings::currentOption <= 16 && Settings::optionCount <= 16)
	{
		if (bool onThis = true) {
			Drawing::Text(info, Settings::optionText, { Settings::menuX - 0.100f, 17 * 0.035f + 0.1600f }, { 0.25f, 0.25f }, false), Drawing::Rect(Settings::optionRect, { Settings::menuX, 17 * 0.035f + 0.1820f }, { 0.21f, 0.045f });
		}
	}
	else if (Settings::optionCount > (Settings::currentOption - 16) && Settings::optionCount <= Settings::currentOption)
	{
		if (bool onThis = true) {
			Drawing::Text(info, Settings::optionText, { Settings::menuX - 0.100f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1300f }, { 0.25f, 0.25f }, false), Drawing::Rect(Settings::optionRect, { Settings::menuX, (Settings::optionCount + 1) * 0.035f + 0.1820f }, { 0.21f, 0.045f });
		}
	}
}
bool Menu::StringVector(const char * option, std::vector<std::string> Vector, int & position)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		size_t max = Vector.size() - 1;
		int min = 0;
		if (Settings::rightPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::leftPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(Tools::StringToChar((Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, { 0.5f, 0.5f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(Tools::StringToChar((Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, { 0.5f, 0.5f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
bool Menu::StringVector(const char * option, std::vector<std::string> Vector, int & position, std::function<void()> function)
{
	StringVector(option, Vector, position);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}
bool Menu::StringVector(const char * option, std::vector<char*> Vector, int & position)
{
	constexpr static const VECTOR2_2 textSize = { 0.36f, 0.35f };
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		size_t max = Vector.size() - 1;
		int min = 0;
		if (Settings::rightPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::leftPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions) {
		std::string SelectedChar
			= UI::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL($(Vector[position])));

		UI::SET_TEXT_COLOUR(Settings::integre.r, Settings::integre.g, Settings::integre.b, Settings::integre.a);
		UI::SET_TEXT_FONT(Settings::integre.f);
		UI::SET_TEXT_SCALE(textSize.w, textSize.h);
		UI::SET_TEXT_RIGHT_JUSTIFY(TRUE);
		UI::SET_TEXT_WRAP(Settings::menuX - 0.06f, Settings::menuX + 0.095f);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(Tools::StringToChar("[ " + SelectedChar + " ] ~c~" + std::to_string(position) + "/" + std::to_string(Vector.size() - 1)));
		UI::SET_TEXT_DROPSHADOW(1, 166, 166, 166, 0);
		UI::SET_TEXT_EDGE(1, 166, 166, 166, 0);
		UI::SET_TEXT_OUTLINE();
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(Settings::menuX + 0.082f, Settings::optionCount * 0.035f + 0.129f);
	}
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption) {
		std::string SelectedChar
			= UI::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL($(Vector[position])));

		UI::SET_TEXT_COLOUR(Settings::integre.r, Settings::integre.g, Settings::integre.b, Settings::integre.a);
		UI::SET_TEXT_FONT(Settings::integre.f);
		UI::SET_TEXT_SCALE(textSize.w, textSize.h);
		UI::SET_TEXT_RIGHT_JUSTIFY(TRUE);
		UI::SET_TEXT_WRAP(Settings::menuX - 0.06f, Settings::menuX + 0.095f);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(Tools::StringToChar("[ " + SelectedChar + " ] ~c~" + std::to_string(position) + "/" + std::to_string(Vector.size() - 1)));
		UI::SET_TEXT_DROPSHADOW(1, 166, 166, 166, 0);
		UI::SET_TEXT_EDGE(1, 166, 166, 166, 0);
		UI::SET_TEXT_OUTLINE();
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(Settings::menuX + 0.060f, (Settings::optionCount - (Settings::currentOption - Settings::maxVisOptions))*0.035f + 0.129f);
	}

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
/*float DrawGlareX = 0.435001f;;
float DrawGlareY = 0.4954f;
float DrawGlareScaleX = 1.1880f;
float DrawGlareScaleY = 1.0215f;*/

void Menu::End(const char * title)
{
	Menu::Drawing::Hitler();
    int opcount = Settings::optionCount;
    int currop = Settings::currentOption;
    if (opcount >= 16) {
        Drawing::Text(Tools::StringToChar(std::to_string(currop) + " / " + std::to_string(opcount)), Settings::count, { Settings::menuX + 0.103f, 17 * 0.035f - 0.467f }, { 0.35f, 0.35f }, true);
		Drawing::Rect({ 0, 0, 0, 255 }, { Settings::menuX, 17 * 0.035f + 0.1415f }, { 0.24f, 0.035f });
	   // Drawing::Rect(Settings::Endrectlol, { Settings::menuX, 17 * 0.035f + 0.1815f }, { 0.24f, 0.027f });
	   // Drawing::Spriter("Vortexassets", "Vortexend", Settings::menuX, 17 *0.0350f + 0.14150f, 0.240f, 0.0350f, 0, Settings::Endrectloll.r, Settings::Endrectloll.g, Settings::Endrectloll.b, Settings::Endrectloll.a);
		Drawing::Rect({ 0, 247, 255,255 }, { Settings::menuX, 17 * 0.035f + 0.12570f }, { 0.24f, 0.002f });


        //Drawing::Rect(Settings::Endrect, { Settings::menuX, 17 * 0.035f + 0.1880f }, { 0.21f, 0.050f });
		//Drawing::Text(Tools::StringToChar("3 Generation"), Settings::titleText3, { Settings::menuX, 17 * 0.035f + 0.169f }, { 0.3f, 0.3f }, true);
		if (Settings::currentOption == 1) {
			Drawing::Spriter("commonmenu", "arrowright", Settings::menuX, ((16 + 1) * 0.035f + 0.140f), 0.020f, 0.035f, 90, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);
		}
		else if (Settings::currentOption == Settings::optionCount) {
			Drawing::Spriter("commonmenu", "arrowright", Settings::menuX, ((16 + 1) * 0.035f + 0.140f), 0.020f, 0.035f, 270, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);
		}
		else {
			Drawing::Spriter("commonmenu", "shop_arrows_upanddown", Settings::menuX, ((16 + 1) * 0.035f + 0.140f), 0.020f, 0.035f, 180, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);
		}

    }
    else if (opcount > 0) {
        Drawing::Text(Tools::StringToChar(std::to_string(currop) + " / " + std::to_string(opcount)), Settings::count, { Settings::menuX + 0.103f, 17 * 0.035f - 0.467f }, { 0.35f, 0.35f }, true);
        Drawing::Rect({ 0, 0, 0, 255 }, { Settings::menuX,(Settings::optionCount + 1) * 0.035f + 0.1415f }, { 0.24f, 0.035f });
		//Drawing::Rect(Settings::Endrectlol, { Settings::menuX, (Settings::optionCount + 1) * 0.035f + 0.1815f }, { 0.24f, 0.027f });
		//Drawing::Spriter("Vortexassets", "Vortexend", Settings::menuX, (Settings::optionCount + 1) * 0.035f + 0.1415f, 0.24f, 0.035f, 0, Settings::Endrectloll.r, Settings::Endrectloll.g, Settings::Endrectloll.b, Settings::Endrectloll.a);
		Drawing::Rect({ 0, 247, 255,255 }, { Settings::menuX, (Settings::optionCount + 1) * 0.035f + 0.12570f }, { 0.24f, 0.002f });


       
        //Drawing::Rect(Settings::Endrect, { Settings::menuX, (Settings::optionCount + 1) * 0.035f + 0.1880f }, { 0.21f, 0.050f });
		//Drawing::Text(Tools::StringToChar("3 Generation"), Settings::titleText3, { Settings::menuX, (Settings::optionCount + 1) * 0.035f + 0.169f }, { 0.3f, 0.3f }, true);

		if (Settings::currentOption == 1 && Settings::optionCount > 1) {
			Drawing::Spriter("commonmenu", "arrowright", Settings::menuX, ((Settings::optionCount + 1) * 0.035f + 0.140f), 0.020f, 0.035f, 90, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);
		}
		else if (Settings::currentOption == Settings::optionCount && Settings::optionCount > 1) {
			Drawing::Spriter("commonmenu", "arrowright", Settings::menuX, ((Settings::optionCount + 1) * 0.035f + 0.140f), 0.020f, 0.035f, 270, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);
		}
		else if (Settings::optionCount > 1) {
			Drawing::Spriter("commonmenu", "shop_arrows_upanddown", Settings::menuX, ((Settings::optionCount + 1) * 0.035f + 0.140f), 0.020f, 0.035f, 180, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);
		}

    }
	 // lol, fixed, now i need to go, 
}



bool Menu::ListVector(const char * option, std::vector<char*> Vector, int & position)
{ // who's coded this code wtf

	constexpr static const VECTOR2_2 textSize = { 0.32f, 0.32f };
	Option(option);
	if (Settings::optionCount == Settings::currentOption) {
		//size_t max = Vector.size() - 1;
		size_t max = Vector.size() - 1;
		int min = 0;
		if (Settings::leftPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::rightPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(Tools::StringToChar(Vector[position]), Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, textSize, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(Tools::StringToChar(Vector[position]), Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, textSize, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	//else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
//	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	else 
		return false;

	/*constexpr static const VECTOR2_2 textSize = { 0.45f, 0.45f };
	bool onThis = Settings::currentOption == Settings::optionCount + 1 ? true : false;
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		size_t max = Vector.size() - 1;
		int min = 0;
		if (Settings::rightPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::leftPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return false;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return false;
	return false;*/
}

int IconNotification(char *text, char *text2, char *Subject)
{
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	//UI::_SET_NOTIFICATION_MESSAGE_CLAN_TAG("CHAR_GANGAPP", "CHAR_GANGAPP", false, 7, text2, Subject, 1.0, "___Menu");
	return UI::_DRAW_NOTIFICATION(1, 1);
}
//char * text = "Logged in";
void PlaySoundFrontend_default(char* sound_name)
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sound_name, "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
}
void PlaySoundFrontend_default2(char* sound_name)
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sound_name, "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 0);
}
char * Menu::Tools::StringToChar(std::string string)
{
	return _strdup(string.c_str());
}

int Menu::Settings::keyPressDelay = 200;
int Menu::Settings::keyPressPreviousTick = GetTickCount();
int Menu::Settings::keyPressDelay2 = 150;
int Menu::Settings::keyPressPreviousTick2 = GetTickCount();
int Menu::Settings::keyPressDelay3 = 140;
int Menu::Settings::keyPressPreviousTick3 = GetTickCount();

#pragma warning(disable: 4018)
bool firstopen = true;
void Menu::Checks::Keys()
{
	Settings::selectPressed = false;
	Settings::leftPressed = false;
	Settings::rightPressed = false;
	if (GetTickCount() - Settings::keyPressPreviousTick > Settings::keyPressDelay) {
		if (GetTickCount() - Settings::keyPressPreviousTick2 > Settings::keyPressDelay2) {
			if (GetTickCount() - Settings::keyPressPreviousTick3 > Settings::keyPressDelay3) {
				if (IsKeyPressed(VK_MULTIPLY) || IsKeyPressed(VK_F8) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlScriptRB) && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight)) {
					Settings::menuLevel == 0 ? MenuLevelHandler::MoveMenu(SubMenus::mainmenu) : Settings::menuLevel == 1 ? MenuLevelHandler::BackMenu() : NULL;
					if (firstopen) {
						//IconNotification(Menu::Tools::StringToChar("~w~Welcome " + (std::string)PLAYER::GET_PLAYER_NAME(0)), "~r~Diamond Menu v4.0.1", text);
						PlaySoundFrontend_default2("Hack_Success");
						prevOption = 1;
						firstopen = false;
					}

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD0) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendCancel)) {
					Settings::menuLevel > 0 ? MenuLevelHandler::BackMenu() : NULL;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("BACK");
					prevOption = 1;
					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD8) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendUp)) {
					Settings::currentOption > 1 ? Settings::currentOption-- : Settings::currentOption = Settings::optionCount;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("Security_Door_Alarm");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD2) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendDown)) {
					Settings::currentOption < Settings::optionCount ? Settings::currentOption++ : Settings::currentOption = 1;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("Security_Door_Alarm");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD6) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight)) {
					Settings::leftPressed = true;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("Security_Door_Alarm");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD4) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneLeft)) {
					Settings::rightPressed = true;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("Security_Door_Alarm");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Settings::selectPressed = true;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("SELECT");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_BACK) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendCancel)) {
					Settings::menuLevel > 0 ? MenuLevelHandler::BackMenu() : NULL;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("BACK");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_UP) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendUp)) {
					Settings::currentOption > 1 ? Settings::currentOption-- : Settings::currentOption = Settings::optionCount;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("Security_Door_Alarm");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_DOWN) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendDown)) {
					Settings::currentOption < Settings::optionCount ? Settings::currentOption++ : Settings::currentOption = 1;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("Security_Door_Alarm");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_LEFT) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneLeft)) {
					Settings::leftPressed = true;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("Security_Door_Alarm");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_RIGHT) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight)) {
					Settings::rightPressed = true;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("Security_Door_Alarm");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_RETURN) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Settings::selectPressed = true;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("SELECT");

					Settings::keyPressPreviousTick = GetTickCount();
				}

				//Increase wanted level.
				if (KeyJustUp(VK_ADD))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(playerr) < 5)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(playerr, PLAYER::GET_PLAYER_WANTED_LEVEL(playerr) + 1, FALSE);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(playerr, FALSE);


					}
				}
				if (KeyJustUp(VK_F8))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(playerr) < 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(playerr, PLAYER::GET_PLAYER_WANTED_LEVEL(playerr) - 1, FALSE);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(playerr, FALSE);
					}
				}
				//Decrease wanted level.
				if (KeyJustUp(VK_MULTIPLY))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(playerr) < 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(playerr, PLAYER::GET_PLAYER_WANTED_LEVEL(playerr) - 1, FALSE);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(playerr, FALSE);
					}
				}

				//Teleport to waypoint.
				if (KeyJustUp(VK_F5))
				{
					teleport_to_marker();
				}

				//Teleport to Mission Objective
				if (KeyJustUp(VK_F7))
				{
					//teleport_to_objective();

				}

				//Spawn Vehicle
				if (KeyJustUp(VK_F6))
				{
					//request_vehicle();
				}
			}
		}
	}
	Settings::optionCount = 0;
}

#pragma warning(default : 4018)

void Menu::MenuLevelHandler::MoveMenu(SubMenus menu)
{
	Settings::menusArray[Settings::menuLevel] = Settings::currentMenu;
	Settings::optionsArray[Settings::menuLevel] = Settings::currentOption;
	Settings::menuLevel++;
	Settings::currentMenu = menu;
	Settings::currentOption = 1;
}

void Menu::MenuLevelHandler::BackMenu()
{
	Settings::menuLevel--;
	Settings::currentMenu = Settings::menusArray[Settings::menuLevel];
	Settings::currentOption = Settings::optionsArray[Settings::menuLevel];
}
void Menu::Files::WriteStringToIni(std::string string, std::string file, std::string app, std::string key)
{
	WritePrivateProfileStringA(app.c_str(), key.c_str(), string.c_str(), file.c_str());
}
std::string Menu::Files::ReadStringFromIni(std::string file, std::string app, std::string key)
{
	char buf[100];
	GetPrivateProfileStringA(app.c_str(), key.c_str(), "NULL", buf, 100, file.c_str());
	return (std::string)buf;
}

void Menu::Files::WriteIntToIni(int intValue, std::string file, std::string app, std::string key)
{
	WriteStringToIni(std::to_string(intValue), file, app, key);
}

int Menu::Files::ReadIntFromIni(std::string file, std::string app, std::string key)
{
	return std::stoi(ReadStringFromIni(file, app, key));
}

void Menu::Files::WriteFloatToIni(float floatValue, std::string file, std::string app, std::string key)
{
	WriteStringToIni((std::to_string(floatValue)), file, app, key);
}

float Menu::Files::ReadFloatFromIni(std::string file, std::string app, std::string key)
{
	return std::stof(ReadStringFromIni(file, app, key));
}

void Menu::Files::WriteBoolToIni(bool b00l, std::string file, std::string app, std::string key)
{
	WriteStringToIni(b00l ? "true" : "false", file, app, key);
}

bool Menu::Files::ReadBoolFromIni(std::string file, std::string app, std::string key)
{
	return ReadStringFromIni(file, app, key) == "true" ? true : false;
}
//------Colorbox----------------
void Menu::Colorbox2(std::string texture1, std::string texture2, int r, int g, int b, int a)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		if (Menu::Settings::optionCount == Menu::Settings::currentOption) { Menu::Drawing::Spriter(texture1, texture2, Menu::Settings::menuX + 0.24f, 0.2f, 0.11f, 0.11f, 0, r, g, b, a); }
	}
	else { if (Menu::Settings::optionCount == Menu::Settings::currentOption) { Menu::Drawing::Spriter(texture1, texture2, Menu::Settings::menuX - 0.24f, 0.2f, 0.11f, 0.11f, 0, r, g, b, a); } }
}
void Menu::Colorbox(std::string texture1, std::string texture2, RGBA rgba)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		if (Menu::Settings::optionCount == Menu::Settings::currentOption) { Menu::Drawing::Spriter(texture1, texture2, Menu::Settings::menuX + 0.24f, 0.2f, 0.11f, 0.11f, 0, rgba.r, rgba.g, rgba.b, rgba.a); }
	}
	else { if (Menu::Settings::optionCount == Menu::Settings::currentOption) { Menu::Drawing::Spriter(texture1, texture2, Menu::Settings::menuX - 0.24f, 0.2f, 0.11f, 0.11f, 0, rgba.r, rgba.g, rgba.b, rgba.a); } }
}
//---------Vehicle----------------
void Menu::Vehicle(std::string texture1, std::string texture2)
{
	//if (Menu::Settings::optionCount == Menu::Settings::currentOption) {
	if (Menu::Settings::menuX < 0.78f)
	{
		Drawing::Text("Vehicle Pictures", Settings::titleText2, { Settings::menuX + 0.240f, 0.145f }, { 0.425f, 0.425f }, true);

		Menu::Drawing::Spriter("CommonMenu", "interaction_bgd", Menu::Settings::menuX + 0.24f, 0.1f, 0.13f, 0.13f, 0, 255, 0, 0, 255);

		Menu::Drawing::Spriter(texture1, texture2, Menu::Settings::menuX + 0.24f, 0.1f, 0.11f, 0.11f, 0, 255, 255, 255, 255);
	}
	else
	{
		Drawing::Text("Vehicle Pictures", Settings::titleText2, { Settings::menuX + 0.240f, 0.145f }, { 0.425f, 0.425f }, true);

		Menu::Drawing::Spriter("CommonMenu", "interaction_bgd", Menu::Settings::menuX + 0.24f, 0.1f, 0.13f, 0.13f, 0, 255, 0, 0, 255);
		Menu::Drawing::Spriter(texture1, texture2, Menu::Settings::menuX - 0.24f, 0.1f, 0.11f, 0.11f, 0, 255, 255, 255, 255);
		//}
	}
}
void Menu::Vehicle2(std::string texture1, std::string texture2)
{
	if (Menu::Settings::optionCount == Menu::Settings::currentOption) { Menu::Drawing::Spriter(texture1, texture2, Menu::Settings::menuX - 0.24f, 0.362f, 0.15f, 0.18f, 0, 255, 255, 255, 255); }
}
//-----------Player Info-----------
void Menu::AddSmallTitle(char* text)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		Drawing::Text(text, Settings::titleText, { Settings::menuX + 0.200f, 0.090f }, { 0.425f, 0.425f }, true);
		Drawing::Rect(line2, { Settings::menuX + 0.200f,  0.1175f - 0.019f }, { 0.115f, 0.045f });
	}
	else
	{
		Drawing::Text(text, Settings::titleText, { Settings::menuX - 0.200f, 0.090f }, { 0.425f, 0.425f }, true);
		Drawing::Rect(line2, { Settings::menuX + 0.200f,  0.1175f - 0.019f }, { 0.115f, 0.045f });
	}
}
void Menu::AddSmallInfo(char* text, short line)
{
    const __int8 maxSize = 32;
    if (Menu::Settings::menuX < 0.78f)
    {
        if (line == 1) {
            Drawing::Rect(Settings::optionRect, { Settings::menuX + 0.200f, ((static_cast<int>(23) * 0.035f) / 2.0f) + 0.159f - 0.135f }, { 0.115f, static_cast<int>(23) * 0.035f + -0.193f });
        }
        Drawing::Text(text, Settings::title_end, { Settings::menuX + 0.145f, (line * 0.020f) + 0.123f }, { 0.375f, 0.375f }, false);
    }
    else
    {
        if (line == 1) {
            Drawing::Rect(Settings::optionRect, { Settings::menuX - 0.200f, ((static_cast<int>(23) * 0.035f) / 2.0f) + 0.159f - 0.135f }, { 0.115f, static_cast<int>(23) * 0.035f + -0.193f });
        }
        Drawing::Text(text, Settings::title_end, { Settings::menuX - 0.228f, (line * 0.020f) + 0.123f }, { 0.375f, 0.375f }, false);
    }
}
void Menu::AddSmallTitle2(char* text)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		Drawing::Text(text, Settings::titleText, { Settings::menuX + 0.200f, 0.090f }, { 0.425f, 0.425f }, true);
		Drawing::Rect(line2, { Settings::menuX + 0.200f,  0.1175f - 0.019f }, { 0.115f, 0.045f });
	}
	else
	{
		Drawing::Text(text, Settings::titleText, { Settings::menuX - 0.200f, 0.090f }, { 0.425f, 0.425f }, true);
		Drawing::Rect(line2, { Settings::menuX + 0.200f,  0.1175f - 0.019f }, { 0.115f, 0.045f });
	}
}

bool Menu::Settings::controllerinput = true;
void Menu::Checks::Controlls()
{
	Settings::selectPressed = false;
	Settings::leftPressed = false;
	Settings::rightPressed = false;
	if (GetTickCount() - Settings::keyPressPreviousTick > Settings::keyPressDelay) {
		if (GetTickCount() - Settings::keyPressPreviousTick2 > Settings::keyPressDelay2) {
			if (GetTickCount() - Settings::keyPressPreviousTick3 > Settings::keyPressDelay3) {
				if (IsKeyPressed(VK_MULTIPLY) || IsKeyPressed(VK_F8) ||  CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlScriptRB) && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight) && Settings::controllerinput) {
					Settings::menuLevel == 0 ? MenuLevelHandler::MoveMenu(SubMenus::mainmenu) : Settings::menuLevel == 1 ? MenuLevelHandler::BackMenu() : NULL;
					Settings::keyPressPreviousTick = GetTickCount();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 0);
				}
				else if (IsKeyPressed(VK_NUMPAD0) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendCancel) && Settings::controllerinput) {
					Settings::menuLevel > 0 ? MenuLevelHandler::BackMenu() : NULL;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("BACK");

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD8) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendUp) && Settings::controllerinput) {
					Settings::currentOption > 1 ? Settings::currentOption-- : Settings::currentOption = Settings::optionCount;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("NAV_UP_DOWN");

					Settings::keyPressPreviousTick2 = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD2) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendDown) && Settings::controllerinput) {
					Settings::currentOption < Settings::optionCount ? Settings::currentOption++ : Settings::currentOption = 1;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("NAV_UP_DOWN");

					Settings::keyPressPreviousTick2 = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD6) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight) && Settings::controllerinput) {
					Settings::leftPressed = true;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("NAV_UP_DOWN");

					Settings::keyPressPreviousTick3 = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD4) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneLeft) && Settings::controllerinput) {
					Settings::rightPressed = true;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("NAV_UP_DOWN");

					Settings::keyPressPreviousTick3 = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept) && Settings::controllerinput) {
					Settings::selectPressed = true;
					if (Settings::menuLevel > 0)
						PlaySoundFrontend_default("SELECT");

					Settings::keyPressPreviousTick = GetTickCount();
				}
			}
		}
	}
	Settings::optionCount = 0;
}

void Menu::PlayerInfoTitle(char* text)
{
	Drawing::Rect(line2, { Settings::menuX + 0.230f,  0.1250f }, { 0.165f, 0.045f });
	//Drawing::Spriter("Vortextextures", "playerinfo", Settings::menuX + 0.230f, 0.1250f, 0.165f, 0.045f, 180, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);

	Drawing::Text(text, Settings::titleText, { Settings::menuX + 0.230f, 0.1097f }, { 0.425f, 0.425f }, true);
}

void Menu::PlayerInfoLine(char* text, short line)
{
	if (line == 1) {
		Drawing::Rect(Settings::optionRect, { Settings::menuX + 0.230f, 0.3335f }, { 0.165f, 13 * 0.045f + -0.213f });
		//Drawing::Spriter("Vortextextures", "playerinfo", Settings::menuX + 0.1385f, 0.2520f, 0.019f, 0.085f, 180, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);
		Drawing::Rect(Settings::optionRect, { Settings::menuX + 0.1385f, 0.2520f }, { 0.019f, 0.085f });
	}
	Drawing::Text(text, Settings::optionText, { Settings::menuX + 0.250f, (line * 0.030f) + 0.155f }, { 0.35f, 0.35f }, true);
}

void Menu::AddSmallInfo3(char* text, short line)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		if (line == 1) {
			Drawing::Rect(Settings::optionRect, { Settings::menuX + 0.250f, ((13 * 0.035f) / 2.0f) + 0.159f - 0.135f }, { 0.115f, 13 * 0.035f + -0.193f });
			//Drawing::Rect(Settings::optionRect, { Settings::menuX + 0.175f, ((13 * 0.035f) / 2.0f) + 0.159f - 0.135f }, { 0.115f, 13 * 0.035f + -0.193f });

		}
		Drawing::Text(text, Settings::title_end, { Settings::menuX + 0.145f, (line * 0.020f) + 0.123f }, { 0.375f, 0.375f }, false);
	}
	else
	{
		if (line == 1) {
			Drawing::Rect(Settings::optionRect, { Settings::menuX - 0.250f, ((13 * 0.035f) / 2.0f) + 0.159f - 0.135f }, { 0.115f, 13 * 0.035f + -0.193f });
		}
		Drawing::Text(text, Settings::title_end, { Settings::menuX - 0.228f, (line * 0.020f) + 0.123f }, { 0.375f, 0.375f }, false);
	}
}
class Ini
{
private:
	std::string inifile;
public:
	Ini(std::string file)
	{
		this->inifile = file;
	}

	void WriteString(std::string string, std::string app, std::string key)
	{
		WritePrivateProfileStringA(app.c_str(), key.c_str(), string.c_str(), this->inifile.c_str());
	}
	std::string GetString(std::string app, std::string key)
	{
		char buf[100];
		GetPrivateProfileStringA(app.c_str(), key.c_str(), "NULL", buf, 100, this->inifile.c_str());
		return (std::string)buf;
	}

	void WriteInt(int value, std::string app, std::string key)
	{
		WriteString(std::to_string(value), app, key);
	}
	int GetInt(std::string app, std::string key)
	{
		return std::stoi(GetString(app, key));
	}

	void WriteFloat(float value, std::string app, std::string key)
	{
		WriteString(std::to_string(value), app, key);
	}
	float GetFloat(std::string app, std::string key)
	{
		return std::stof(GetString(app, key));
	}
};
std::string MenuStyleFile = ".\\ThemeMenu\\MenuStyle.ini";
void Menu::Files::StyleSaver::SaveStyles()
{
	// Title Text
	WriteIntToIni(Settings::titleText.r, MenuStyleFile, "Title Text", "Red");
	WriteIntToIni(Settings::titleText.g, MenuStyleFile, "Title Text", "Green");
	WriteIntToIni(Settings::titleText.b, MenuStyleFile, "Title Text", "Blue");
	WriteIntToIni(Settings::titleText.a, MenuStyleFile, "Title Text", "Alpha");
	WriteIntToIni(Settings::titleText.f, MenuStyleFile, "Title Text", "Font");

	// Title Rect
	WriteIntToIni(Settings::titleRect.r, MenuStyleFile, "Title Rect", "Red");
	WriteIntToIni(Settings::titleRect.g, MenuStyleFile, "Title Rect", "Green");
	WriteIntToIni(Settings::titleRect.b, MenuStyleFile, "Title Rect", "Blue");
	WriteIntToIni(Settings::titleRect.a, MenuStyleFile, "Title Rect", "Alpha");

	// Option Text
	WriteIntToIni(Settings::optionText.r, MenuStyleFile, "Option Text", "Red");
	WriteIntToIni(Settings::optionText.g, MenuStyleFile, "Option Text", "Green");
	WriteIntToIni(Settings::optionText.b, MenuStyleFile, "Option Text", "Blue");
	WriteIntToIni(Settings::optionText.a, MenuStyleFile, "Option Text", "Alpha");
	WriteIntToIni(Settings::optionText.f, MenuStyleFile, "Option Text", "Font");

	// Option Rect
	WriteIntToIni(Settings::optionRect.r, MenuStyleFile, "Option Rect", "Red");
	WriteIntToIni(Settings::optionRect.g, MenuStyleFile, "Option Rect", "Green");
	WriteIntToIni(Settings::optionRect.b, MenuStyleFile, "Option Rect", "Blue");
	WriteIntToIni(Settings::optionRect.a, MenuStyleFile, "Option Rect", "Alpha");

	// Scroller
	WriteIntToIni(Settings::scroller.r, MenuStyleFile, "Scroller", "Red");
	WriteIntToIni(Settings::scroller.g, MenuStyleFile, "Scroller", "Green");
	WriteIntToIni(Settings::scroller.b, MenuStyleFile, "Scroller", "Blue");
	WriteIntToIni(Settings::scroller.a, MenuStyleFile, "Scroller", "Alpha");
}

void Menu::Files::StyleSaver::LoadStyles()
{
	// Title Text
	Settings::titleText.r = ReadIntFromIni(MenuStyleFile, "Title Text", "Red");
	Settings::titleText.g = ReadIntFromIni(MenuStyleFile, "Title Text", "Green");
	Settings::titleText.b = ReadIntFromIni(MenuStyleFile, "Title Text", "Blue");
	Settings::titleText.a = ReadIntFromIni(MenuStyleFile, "Title Text", "Alpha");
	Settings::titleText.f = ReadIntFromIni(MenuStyleFile, "Title Text", "Font");

	// Title Rect
	Settings::titleRect.r = ReadIntFromIni(MenuStyleFile, "Title Rect", "Red");
	Settings::titleRect.g = ReadIntFromIni(MenuStyleFile, "Title Rect", "Green");
	Settings::titleRect.b = ReadIntFromIni(MenuStyleFile, "Title Rect", "Blue");
	Settings::titleRect.a = ReadIntFromIni(MenuStyleFile, "Title Rect", "Alpha");

	// Option Text
	Settings::optionText.r = ReadIntFromIni(MenuStyleFile, "Option Text", "Red");
	Settings::optionText.g = ReadIntFromIni(MenuStyleFile, "Option Text", "Green");
	Settings::optionText.b = ReadIntFromIni(MenuStyleFile, "Option Text", "Blue");
	Settings::optionText.a = ReadIntFromIni(MenuStyleFile, "Option Text", "Alpha");
	Settings::optionText.f = ReadIntFromIni(MenuStyleFile, "Option Text", "Font");

	// Option Rect
	Settings::optionRect.r = ReadIntFromIni(MenuStyleFile, "Option Rect", "Red");
	Settings::optionRect.g = ReadIntFromIni(MenuStyleFile, "Option Rect", "Green");
	Settings::optionRect.b = ReadIntFromIni(MenuStyleFile, "Option Rect", "Blue");
	Settings::optionRect.a = ReadIntFromIni(MenuStyleFile, "Option Rect", "Alpha");

	// Scroller
	Settings::scroller.r = ReadIntFromIni(MenuStyleFile, "Scroller", "Red");
	Settings::scroller.g = ReadIntFromIni(MenuStyleFile, "Scroller", "Green");
	Settings::scroller.b = ReadIntFromIni(MenuStyleFile, "Scroller", "Blue");
	Settings::scroller.a = ReadIntFromIni(MenuStyleFile, "Scroller", "Alpha");
}

int VAR_INSTRUCTIONAL_CONTAINER;
int VAR_INSTRUCTIONAL_COUNT;
void InstructionsInit() {
	VAR_INSTRUCTIONAL_COUNT = 0;
	VAR_INSTRUCTIONAL_CONTAINER = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(VAR_INSTRUCTIONAL_CONTAINER, 255, 255, 255, 0, 0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(VAR_INSTRUCTIONAL_CONTAINER, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(VAR_INSTRUCTIONAL_CONTAINER, "SET_CLEAR_SPACE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(200);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
void InstructionsAdd(char *text, int button) {
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(VAR_INSTRUCTIONAL_CONTAINER, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(VAR_INSTRUCTIONAL_COUNT);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(button);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	VAR_INSTRUCTIONAL_COUNT++;
}
void InstructionsEnd() {
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(VAR_INSTRUCTIONAL_CONTAINER, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(VAR_INSTRUCTIONAL_CONTAINER, "SET_BACKGROUND_COLOUR");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(80);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void Menu::drawInstructions() {
	InstructionsInit();
	InstructionsAdd("Back", 136);
	InstructionsAdd("Up/Down", 10);
	InstructionsAdd("Change Value", 46);
	InstructionsAdd("Select", 141);
	InstructionsEnd();
}

