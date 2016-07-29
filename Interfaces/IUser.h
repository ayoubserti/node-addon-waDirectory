/*
    @file   IUser.h
    @abstract   define the user object interface
*/

#pragma once

namespace std 
{
    class string;
    template<> class vector; 
}

namespace WaDirectory
{


    class IUser
    {
        public:
    
            virtual  IDirectory* GetDirectory()   const              =0;
            
            virtual void    GetName(std::string& outName)          =0;

            virtual bool    BelongsToGroup(const std::string& inGroupName) =0;

            virtual bool    BelongsToGroup(const IGroup* inGroupName) =0;

            virtual bool    IsLoggedIn( const ISession* inSession)   =0;

    };
    
}