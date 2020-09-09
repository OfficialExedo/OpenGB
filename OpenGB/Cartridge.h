#pragma once

#include <map>
#include <string>

#define ROM_OFFSET_NAME 0x134
#define ROM_OFFSET_TYPE 0x147
#define ROM_OFFSET_ROM_SIZE 0x148
#define ROM_OFFSET_RAM_SIZE 0x149

enum rom_type
{
	ROM_PLAIN = 0x00,
	ROM_MBC1 = 0x01,
	ROM_MBC1_RAM = 0x02,
	ROM_MBC1_RAM_BATT = 0x03,
	ROM_MBC2 = 0x05,
	ROM_MBC2_BATT = 0x06,
	ROM_RAM = 0x08,
	ROM_RAM_BATT = 0x09,
	ROM_MMM01 = 0x0B,
	ROM_MMM01_RAM = 0x0C,
	ROM_MMM01_RAM_BATT = 0x0D,
	ROM_MBC3_TIMER_BATT = 0x0F,
	ROM_MBC3_TIMER_RAM_BATT = 0x10,
	ROM_MBC3 = 0x11,
	ROM_MBC3_RAM = 0x12,
	ROM_MBC3_RAM_BATT = 0x13,
	ROM_MBC5 = 0x19,
	ROM_MBC5_RAM = 0x1A,
	ROM_MBC5_RAM_BATT = 0x1B,
	ROM_MBC5_RUMBLE = 0x1C,
	ROM_MBC5_RUMBLE_RAM = 0x1D,
	ROM_MBC5_RUMBLE_RAM_BATT = 0x1E,
	ROM_MBC6 = 0x20,
	ROM_MBC7_SENSOR_RUMBLE_RAM_BATT = 0x22,
	ROM_POCKET_CAMERA = 0xFC,
	ROM_BANDAI_TAMAS = 0xFD,
	ROM_HUC3 = 0xFE,
	ROM_HUC1_RAM_BATT = 0xFF,
};

const std::map<rom_type, std::string> rom_type_names = 
{
	{ROM_PLAIN, "ROM ONLY"},
	{ROM_MBC1, "MBC1"},
	{ROM_MBC1_RAM, "MBC1+RAM"},
	{ROM_MBC1_RAM_BATT, "MBC1+RAM+BATTERY"},
	{ROM_MBC2, "MBC2"},
	{ROM_MBC2_BATT, "MBC2+BATTERY"},
	{ROM_RAM, "ROM+RAM"},
	{ROM_RAM_BATT, "ROM+RAM+BATTERY"},
	{ROM_MMM01, "MMM01"},
	{ROM_MMM01_RAM, "MMM01+RAM"},
	{ROM_MMM01_RAM_BATT, "MMM01+RAM+BATTERY"},
	{ROM_MBC3_TIMER_BATT, "MBC3+TIMER+BATTERY"},
	{ROM_MBC3_TIMER_RAM_BATT, "MBC3+TIMER+RAM+BATTERY"},
	{ROM_MBC3, "MBC3"},
	{ROM_MBC3_RAM, "MBC3+RAM"},
	{ROM_MBC3_RAM_BATT, "MBC3+RAM+BATTERY"},
	{ROM_MBC5, "MBC5"},
	{ROM_MBC5_RAM, "MBC5+RAM"},
	{ROM_MBC5_RAM_BATT, "MBC5+RAM+BATTERY"},
	{ROM_MBC5_RUMBLE, "MBC5+RUMBLE"},
	{ROM_MBC5_RUMBLE_RAM, "MBC5+RUMBLE+RAM"},
	{ROM_MBC5_RUMBLE_RAM_BATT, "MBC5+RUMBLE+RAM+BATTERY"},
	{ROM_MBC6, "MBC6"},
	{ROM_MBC7_SENSOR_RUMBLE_RAM_BATT, "MBC7+SENSOR+RUMBLE+RAM+BATTERY"},
	{ROM_POCKET_CAMERA, "POCKET CAMERA"},
	{ROM_BANDAI_TAMAS, "BANDAI TAMAS"},
	{ROM_HUC3, "HuC3"},
	{ROM_HUC1_RAM_BATT, "HuC1+RAM+Battery"}
};

