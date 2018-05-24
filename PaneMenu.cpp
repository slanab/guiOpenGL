#include "PaneMenu.h"

PaneMenu::PaneMenu(wxPanel * parent)
: wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{
	count = 0;
	m_parent = parent;
	btn_conn = new wxButton(this, ID_CONNECT, wxT("Connect"), wxPoint(10, 10));
	btn_start = new wxButton(this, ID_START, wxT("Start Live"), wxPoint(10, 60));
	btn_stop = new wxButton(this, ID_STOP, wxT("Stop Live"), wxPoint(10, 100));
	Connect(ID_CONNECT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PaneMenu::OnConnect));
	Connect(ID_START, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PaneMenu::OnLiveStart));
	Connect(ID_STOP, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PaneMenu::OnLiveStop));
}

void PaneMenu::OnConnect(wxCommandEvent & WXUNUSED(event))
{
	
}

void PaneMenu::OnLiveStart(wxCommandEvent & WXUNUSED(event))
{
	
}

void PaneMenu::OnLiveStop(wxCommandEvent & WXUNUSED(event))
{
	
}
