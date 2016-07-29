/*
    @file IGroup.h
    @abstract   Group definition
*/


#pragma once


namespace std
{
    class string;
    template<> class vector;
}

namespace WaDirectory
{


    class IDirectory;
    class IUser;

    class IGroup
    {
        public:

            virtual  void   GetName(std::string& outName)                               =0;

            virtual  IUser* GetUserByName ( const std::string& inUserName)              =0;

            virtual  void GetSubGroupNames(std::vector<std::string>& ouSubGroupNames)   =0;
            
            virtual  IDirectory* GetDirectory() const                                   =0;    
    };



}