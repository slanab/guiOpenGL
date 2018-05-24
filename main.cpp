#include "wx/wx.h"
#include "wx/sizer.h"

#include "PaneOpenGL.h"
#include "PaneMenu.h"

class MyApp : public wxApp
{
	virtual bool OnInit();

	wxFrame *frame;
	wxPanel *panelMain;
	PaneMenu *panelMenu;
	BasicGLPane * glPane;

public:

};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
	frame = new wxFrame((wxFrame *)NULL, -1, wxT("OpenGL Test"), wxPoint(50, 50), wxSize(400, 200));
	panelMain = new wxPanel(frame, wxID_ANY, wxDefaultPosition, wxSize(400, 400));
	panelMenu = new PaneMenu(panelMain);
	int args[] = { WX_GL_RGBA, WX_GL_DOUBLEBUFFER, WX_GL_DEPTH_SIZE, 16, 0 };
	glPane = new BasicGLPane((wxPanel*)panelMain, args);

	wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
	sizer->Add(panelMenu, 1, wxEXPAND | wxALL, 5);
	sizer->Add(glPane, 1, wxEXPAND);
	frame->SetSizer(sizer);
	frame->SetAutoLayout(true);
	frame->Show();

	return true;
}

BEGIN_EVENT_TABLE(BasicGLPane, wxGLCanvas)
EVT_MOTION(BasicGLPane::mouseMoved)
EVT_LEFT_DOWN(BasicGLPane::mouseDown)
EVT_LEFT_UP(BasicGLPane::mouseReleased)
EVT_RIGHT_DOWN(BasicGLPane::rightClick)
EVT_LEAVE_WINDOW(BasicGLPane::mouseLeftWindow)
EVT_SIZE(BasicGLPane::resized)
EVT_KEY_DOWN(BasicGLPane::keyPressed)
EVT_KEY_UP(BasicGLPane::keyReleased)
EVT_MOUSEWHEEL(BasicGLPane::mouseWheelMoved)
EVT_PAINT(BasicGLPane::render)
END_EVENT_TABLE()