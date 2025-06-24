#pragma once
#include <wx/wx.h>

class LoginDialog : public wxDialog {
public:
    LoginDialog(wxWindow* parent)
        : wxDialog(parent, wxID_ANY, "Login", wxDefaultPosition, wxSize(300, 180)) {
        wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);

        username = new wxTextCtrl(this, wxID_ANY);
        password = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD);

        vbox->Add(new wxStaticText(this, wxID_ANY, "Username:"), 0, wxLEFT | wxTOP, 10);
        vbox->Add(username, 0, wxEXPAND | wxALL, 10);
        vbox->Add(new wxStaticText(this, wxID_ANY, "Password:"), 0, wxLEFT, 10);
        vbox->Add(password, 0, wxEXPAND | wxALL, 10);

        wxBoxSizer* btnSizer = new wxBoxSizer(wxHORIZONTAL);
        btnSizer->Add(new wxButton(this, wxID_OK, "Login"), 0, wxALL, 5);
        btnSizer->Add(new wxButton(this, wxID_CANCEL, "Cancel"), 0, wxALL, 5);

        vbox->Add(btnSizer, 0, wxALIGN_CENTER | wxBOTTOM, 10);
        SetSizerAndFit(vbox);
    }

    wxString GetUsername() const { return username->GetValue(); }
    wxString GetPassword() const { return password->GetValue(); }

private:
    wxTextCtrl *username, *password;
};
