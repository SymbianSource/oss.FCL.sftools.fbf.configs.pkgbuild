// Copyright (c) 2004-2009 Nokia Corporation and/or its subsidiary(-ies).
// All rights reserved.
// This component and the accompanying materials are made available
// under the terms of the License "Symbian Foundation License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.symbianfoundation.org/legal/sfl-v10.html".
//
// Initial Contributors:
// Nokia Corporation - initial contribution.
//
// Contributors:
//
// Description:
// This contains CTestContactsCreateDB
// 
//

#ifndef TEST_CONTACTS_CREATE_DB_H
#define TEST_CONTACTS_CREATE_DB_H

#include "TestContactsBase.h"

class CTestContactsCreateDB : public CTestContactsBase
{
public:
	CTestContactsCreateDB();
	virtual ~CTestContactsCreateDB();

	virtual enum TVerdict doTestStepL( void );

};

#endif /* TEST_CONTACTS_CREATE_DB_H */