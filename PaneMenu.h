#pragma once
#include <wx/wx.h>
#include <wx/panel.h>

class PaneMenu : public wxPanel
{
public:
	PaneMenu(wxPanel *parent);

	void OnConnect(wxCommandEvent & event);
    void OnLiveStart(wxCommandEvent & event);
	void OnLiveStop(wxCommandEvent & event);

    wxButton *btn_conn;
    wxButton *btn_start;
	wxButton *btn_stop;
    wxPanel *m_parent;
    int count;

};

const int ID_CONNECT = 101;
const int ID_START = 102;
const int ID_STOP = 103;