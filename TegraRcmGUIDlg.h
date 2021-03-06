
// TegraRcmGUIDlg.h : header file
//
#pragma once
#include "res/BitmapPicture.h"
#include <string> 
#include "TegraRcmSmash.h"
#include "res/BitmapPicture.h"
#include <windows.h>
#include <string> 
#include <thread>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <array>



// CTegraRcmGUIDlg dialog
class CTegraRcmGUIDlg : public CDialog
{
// Construction
public:
	CTegraRcmGUIDlg(CWnd* pParent = NULL);	// standard constructor
	CBitmapPicture RCM_BITMAP0;
	CBitmapPicture RCM_BITMAP1;
	CBitmapPicture RCM_BITMAP2;
	CBitmapPicture RCM_BITMAP3;
	CMFCEditBrowseCtrl m_EditBrowse;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEGRARCMGUI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions	
	virtual BOOL OnInitDialog();	
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnIdle();
	afx_msg void OnShowWindow();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void StartTimer();
	void StopTimer();
	void OnTimer(UINT nIDEvent);
	int STATUS;
	afx_msg void OnEnChangePath();
	afx_msg void OnBnClickedButton();
	afx_msg void InjectPayload();
	afx_msg void OnBnClickedShofel2();
	afx_msg string GetPreset(string param);
	afx_msg void SetPreset(string param, string value);
	afx_msg void InstallDriver();
	afx_msg BOOL LookForDriver();
};
