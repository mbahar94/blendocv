/*
 * $Id: AUD_JOSResampleFactory.cpp 39792 2011-08-30 09:15:55Z nexyon $
 *
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * Copyright 2009-2011 Jörg Hermann Müller
 *
 * This file is part of AudaSpace.
 *
 * Audaspace is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * AudaSpace is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Audaspace; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file audaspace/intern/AUD_JOSResampleFactory.cpp
 *  \ingroup audaspaceintern
 */


#include "AUD_JOSResampleFactory.h"
#include "AUD_JOSResampleReader.h"

AUD_JOSResampleFactory::AUD_JOSResampleFactory(AUD_Reference<AUD_IFactory> factory,
													 AUD_DeviceSpecs specs) :
		AUD_MixerFactory(factory, specs)
{
}

AUD_Reference<AUD_IReader> AUD_JOSResampleFactory::createReader()
{
	return new AUD_JOSResampleReader(getReader(), m_specs.specs);
}
