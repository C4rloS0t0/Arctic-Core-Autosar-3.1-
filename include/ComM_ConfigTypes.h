/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/


#ifndef COMM_CONFIGTYPES_H_
#define COMM_CONFIGTYPES_H_

/** @req COMM246.generated */
COMM554
COMM555
COMM563
COMM560
COMM561
COMM557
COMM622
COMM653
COMM654
COMM565
COMM567
COMM635
COMM556
COMM607
COMM606
COMM568
COMM
COMM
COMM
COMM

typedef enum {
	COMM_BUS_TYPE_CAN,
	COMM_BUS_TYPE_FR,
	COMM_BUS_TYPE_INTERNAL,
	COMM_BUS_TYPE_LIN,
} ComM_BusTypeType;

typedef enum {
	COMM_NM_VARIANT_NONE,
	COMM_NM_VARIANT_LIGHT,
	COMM_NM_VARIANT_PASSIVE,
	COMM_NM_VARIANT_FULL,
} ComM_NmVariantType;

typedef struct {
	const ComM_BusTypeType			BusType;               /**< @req COMM322 */
	const NetworkHandleType			BusSMNetworkHandle;
	const NetworkHandleType			NmChannelHandle;
	const ComM_NmVariantType		NmVariant;
	const uint32					MainFunctionPeriod;
	const uint32					LightTimeout;
	const uint8						Number;
} ComM_ChannelType;


typedef struct {
	/** @req COMM795  @req COMM796  @req COMM797  @req COMM798  @req COMM327  @req COMM159 */
	const ComM_ChannelType**		ChannelList;
	const uint8						ChannelCount;
} ComM_UserType;

typedef struct {
	const ComM_ChannelType*			Channels;
	const ComM_UserType*			Users;
} ComM_ConfigType;

#endif /* COMM_CONFIGTYPES_H_ */
