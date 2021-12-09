#include "Config.h"

Config::Config()
{
    this->launch_at_startup = false;
    this->remember_user = false;
    this->open_store_while_launching = false;
}

Config::~Config() {}

Void Config::CreateConfig()
{
    StreamWriter^ sw = gcnew StreamWriter(config_filename);
    sw->WriteLine(this->launch_at_startup);
    sw->WriteLine(this->remember_user);
    sw->Write(this->open_store_while_launching);
    sw->Close();
}

Void Config::ReadConfig()
{
    StreamReader^ sr = gcnew StreamReader(config_filename);
    array<wchar_t>^ buffer = gcnew array<wchar_t>(3);
    sr->ReadBlock(buffer, 0, 3);
    this->launch_at_startup = Convert::ToBoolean(buffer[0]);
    this->remember_user = Convert::ToBoolean(buffer[1]);
    this->open_store_while_launching = Convert::ToBoolean(buffer[2]);
}
