/*
    @file   ISession.h
    @abstract   define a session in Wakanda Directory
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

    class ISession
    {
            public:

                virtual    IUser*  GetUser()                    =0;
                
                virtual     void GetWASID( std::string& outWASID) const           =0;

                virtual     IDirectory* GetDirectory() const        =0;

                virtual     bool    IsValid()                       =0;

                virtual     LogOut()                                =0;



    };

}