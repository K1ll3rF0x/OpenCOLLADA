/*
    Copyright (c) 2008 NetAllied Systems GmbH

	This file is part of COLLADAStreamWriter.
	
    Licensed under the MIT Open Source License, 
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/

#ifndef __COLLADASTREAMWRITER_INSTANCE_CAMERA_H__
#define __COLLADASTREAMWRITER_INSTANCE_CAMERA_H__

#include "COLLADAPrerequisites.h"
#include "COLLADAElementWriter.h"
#include "COLLADAURI.h"

namespace COLLADA
{

    /** A class that holds informations of an @a \<instance_camera\> element and writes it to stream. */
    class InstanceCamera : public ElementWriter
    {

    private:

        /** The url to the camera information (library_cameras) */
        URI mUrl;
        String mSid;
        String mName;

    public:
        /** 
         * Constructor
         * @param url The url
         * @param sid The sid
         * @param name The name
        */
        InstanceCamera ( StreamWriter* streamWriter, const URI& url, const String &sid="", const String &name="" )  
        : ElementWriter ( streamWriter )
        , mUrl ( url )
        , mSid ( sid ) 
        , mName ( name )
        {}

        /** Returns the url */
        const URI& getUrl() const
        {
            return mUrl;
        }

        /** Returns the sid */
        const String& getSid() const
        {
            return mSid;
        }

        /** Returns the name */
        const String& getName() const
        {
            return mName;
        }

        /** Write the instance camera to the stream*/
        void add();

    };

} //namespace COLLADA


#endif //__COLLADASTREAMWRITER_INSTANCE_CAMERA_H__
