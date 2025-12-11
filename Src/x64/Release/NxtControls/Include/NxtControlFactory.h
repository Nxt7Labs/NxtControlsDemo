
#pragma once
#include "NxtButtonEx.h"

class NXTCONTROL_CLASS_EXPORT CNxtControlFactory
{
private:
	CString GetAppPath();

public:
	CNxtControlFactory();
	~CNxtControlFactory();

	void InitializeButton(CNxtButtonEx* pBtn, CString strImgPressed, CString strImgNormal, CString strIcon, SIZE szIcon);

};

