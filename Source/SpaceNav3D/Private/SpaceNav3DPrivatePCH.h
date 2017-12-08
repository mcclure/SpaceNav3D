// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "IInputDeviceModule.h"
#include "IInputInterface.h"
#include "IInputDevice.h"
#include "SlateBasics.h"

#ifdef _WIN32
#include "WindowsApplication.h"
#endif

#include "Engine/World.h"

#if WITH_EDITOR
#include "Editor/EditorEngine.h"
#include "SEditorViewport.h"
#include "EditorViewportClient.h"
#include "EditorViewportCommands.h"
#endif

#ifdef _WIN32
#include "AllowWindowsPlatformTypes.h"
#include "si.h"
#include "spwmacro.h"  /* Common macros used by 3DxWare SDK functions. */
extern "C"
{
#include "siapp.h"     /* Required for siapp.lib symbols */
}
#include "V3DCMD.h"
#include "HideWindowsPlatformTypes.h"
#endif

#include "ISpaceNav3DPlugin.h"

// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.
