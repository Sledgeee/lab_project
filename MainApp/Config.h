#pragma once

using namespace System;
using namespace System::IO;

public ref class Config
{
public:
	static String^ config_filename = "config.cfg";
	Boolean launch_at_startup;
	Boolean remember_user;
	Boolean open_store_while_launching;
	Config();
	~Config();

	Void CreateConfig();
	Void ReadConfig();
};

