// ---------------------------------------------------------------------------
// ../modules/wxbind/src/wxmedia_media.cpp was generated by genwxbind.lua 
//
// Any changes made to this file will be lost when the file is regenerated.
// ---------------------------------------------------------------------------


#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#ifndef WX_PRECOMP
     #include "wx/wx.h"
#endif

#include "wxlua/wxlstate.h"
#include "wxbind/include/wxmedia_bind.h"

#ifdef __GNUC__
    #pragma GCC diagnostic ignored "-Wunused-variable"
#endif // __GNUC__


#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
// ---------------------------------------------------------------------------
// Bind class wxMediaCtrl
// ---------------------------------------------------------------------------

// Lua MetaTable Tag for Class 'wxMediaCtrl'
int wxluatype_wxMediaCtrl = WXLUA_TUNKNOWN;

#if ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect)
static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Create[] = { &wxluatype_wxMediaCtrl, &wxluatype_wxWindow, &wxluatype_TNUMBER, &wxluatype_TSTRING, &wxluatype_wxPoint, &wxluatype_wxSize, &wxluatype_TNUMBER, &wxluatype_TSTRING, &wxluatype_wxValidator, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxMediaCtrl_Create(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Create[1] = {{ wxLua_wxMediaCtrl_Create, WXLUAMETHOD_METHOD, 3, 10, s_wxluatypeArray_wxLua_wxMediaCtrl_Create }};
//     bool Create( wxWindow* parent, wxWindowID winid, const wxString& fileName = "", const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& szBackend = "", const wxValidator& val = wxDefaultValidator, const wxString& name = "wxMediaCtrl"  );
static int LUACALL wxLua_wxMediaCtrl_Create(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // const wxString name = "wxMediaCtrl"
    const wxString name = (argCount >= 10 ? wxlua_getwxStringtype(L, 10) : wxString(wxT("wxMediaCtrl")));
    // const wxValidator val = wxDefaultValidator
    const wxValidator * val = (argCount >= 9 ? (const wxValidator *)wxluaT_getuserdatatype(L, 9, wxluatype_wxValidator) : &wxDefaultValidator);
    // const wxString szBackend = ""
    const wxString szBackend = (argCount >= 8 ? wxlua_getwxStringtype(L, 8) : wxString(wxEmptyString));
    // long style = 0
    long style = (argCount >= 7 ? (long)wxlua_getnumbertype(L, 7) : 0);
    // const wxSize size = wxDefaultSize
    const wxSize * size = (argCount >= 6 ? (const wxSize *)wxluaT_getuserdatatype(L, 6, wxluatype_wxSize) : &wxDefaultSize);
    // const wxPoint pos = wxDefaultPosition
    const wxPoint * pos = (argCount >= 5 ? (const wxPoint *)wxluaT_getuserdatatype(L, 5, wxluatype_wxPoint) : &wxDefaultPosition);
    // const wxString fileName = ""
    const wxString fileName = (argCount >= 4 ? wxlua_getwxStringtype(L, 4) : wxString(wxEmptyString));
    // wxWindowID winid
    wxWindowID winid = (wxWindowID)wxlua_getnumbertype(L, 3);
    // wxWindow parent
    wxWindow * parent = (wxWindow *)wxluaT_getuserdatatype(L, 2, wxluatype_wxWindow);
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Create
    bool returns = (self->Create(parent, winid, fileName, *pos, *size, style, szBackend, *val, name));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

#endif // ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect)

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_GetDownloadProgress[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_GetDownloadProgress(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_GetDownloadProgress[1] = {{ wxLua_wxMediaCtrl_GetDownloadProgress, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_GetDownloadProgress }};
//     wxFileOffset GetDownloadProgress();  // DirectShow only
static int LUACALL wxLua_wxMediaCtrl_GetDownloadProgress(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call GetDownloadProgress
    wxFileOffset returns = (self->GetDownloadProgress());
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_GetDownloadTotal[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_GetDownloadTotal(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_GetDownloadTotal[1] = {{ wxLua_wxMediaCtrl_GetDownloadTotal, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_GetDownloadTotal }};
//     wxFileOffset GetDownloadTotal();     // DirectShow only
static int LUACALL wxLua_wxMediaCtrl_GetDownloadTotal(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call GetDownloadTotal
    wxFileOffset returns = (self->GetDownloadTotal());
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_GetState[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_GetState(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_GetState[1] = {{ wxLua_wxMediaCtrl_GetState, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_GetState }};
//     wxMediaState GetState( );
static int LUACALL wxLua_wxMediaCtrl_GetState(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call GetState
    wxMediaState returns = (self->GetState());
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_GetVolume1[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_GetVolume1(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_GetVolume1[1] = {{ wxLua_wxMediaCtrl_GetVolume1, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_GetVolume1 }};
//     double GetVolume( );
static int LUACALL wxLua_wxMediaCtrl_GetVolume1(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call GetVolume
    double returns = (self->GetVolume());
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_GetVolume[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_GetVolume(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_GetVolume[1] = {{ wxLua_wxMediaCtrl_GetVolume, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_GetVolume }};
//     double GetVolume( );
static int LUACALL wxLua_wxMediaCtrl_GetVolume(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call GetVolume
    double returns = (self->GetVolume());
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Length[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_Length(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Length[1] = {{ wxLua_wxMediaCtrl_Length, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_Length }};
//     wxFileOffset Length( );
static int LUACALL wxLua_wxMediaCtrl_Length(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Length
    wxFileOffset returns = (self->Length());
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}


#if (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS)
static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Load2[] = { &wxluatype_wxMediaCtrl, &wxluatype_wxURI, &wxluatype_wxURI, NULL };
static int LUACALL wxLua_wxMediaCtrl_Load2(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Load2[1] = {{ wxLua_wxMediaCtrl_Load2, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxMediaCtrl_Load2 }};
//     bool Load(const wxURI& location, const wxURI& proxy );
static int LUACALL wxLua_wxMediaCtrl_Load2(lua_State *L)
{
    // const wxURI proxy
    const wxURI * proxy = (const wxURI *)wxluaT_getuserdatatype(L, 3, wxluatype_wxURI);
    // const wxURI location
    const wxURI * location = (const wxURI *)wxluaT_getuserdatatype(L, 2, wxluatype_wxURI);
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Load
    bool returns = (self->Load(*location, *proxy));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Load1[] = { &wxluatype_wxMediaCtrl, &wxluatype_wxURI, NULL };
static int LUACALL wxLua_wxMediaCtrl_Load1(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Load1[1] = {{ wxLua_wxMediaCtrl_Load1, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxMediaCtrl_Load1 }};
//     bool Load(const wxURI& location );
static int LUACALL wxLua_wxMediaCtrl_Load1(lua_State *L)
{
    // const wxURI location
    const wxURI * location = (const wxURI *)wxluaT_getuserdatatype(L, 2, wxluatype_wxURI);
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Load
    bool returns = (self->Load(*location));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

#endif // (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS)

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Load[] = { &wxluatype_wxMediaCtrl, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxMediaCtrl_Load(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Load[1] = {{ wxLua_wxMediaCtrl_Load, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxMediaCtrl_Load }};
//     bool Load(const wxString& fileName );
static int LUACALL wxLua_wxMediaCtrl_Load(lua_State *L)
{
    // const wxString fileName
    const wxString fileName = wxlua_getwxStringtype(L, 2);
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Load
    bool returns = (self->Load(fileName));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_LoadURI[] = { &wxluatype_wxMediaCtrl, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxMediaCtrl_LoadURI(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_LoadURI[1] = {{ wxLua_wxMediaCtrl_LoadURI, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxMediaCtrl_LoadURI }};
//     bool LoadURI(const wxString& fileName); // {   return Load(wxURI(fileName));       }
static int LUACALL wxLua_wxMediaCtrl_LoadURI(lua_State *L)
{
    // const wxString fileName
    const wxString fileName = wxlua_getwxStringtype(L, 2);
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call LoadURI
    bool returns = (self->LoadURI(fileName));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_LoadURIWithProxy[] = { &wxluatype_wxMediaCtrl, &wxluatype_TSTRING, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxMediaCtrl_LoadURIWithProxy(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_LoadURIWithProxy[1] = {{ wxLua_wxMediaCtrl_LoadURIWithProxy, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxMediaCtrl_LoadURIWithProxy }};
//     bool LoadURIWithProxy(const wxString& fileName, const wxString& proxy); // {   return Load(wxURI(fileName), wxURI(proxy));       }
static int LUACALL wxLua_wxMediaCtrl_LoadURIWithProxy(lua_State *L)
{
    // const wxString proxy
    const wxString proxy = wxlua_getwxStringtype(L, 3);
    // const wxString fileName
    const wxString fileName = wxlua_getwxStringtype(L, 2);
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call LoadURIWithProxy
    bool returns = (self->LoadURIWithProxy(fileName, proxy));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Pause[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_Pause(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Pause[1] = {{ wxLua_wxMediaCtrl_Pause, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_Pause }};
//     bool Pause( );
static int LUACALL wxLua_wxMediaCtrl_Pause(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Pause
    bool returns = (self->Pause());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Play[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_Play(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Play[1] = {{ wxLua_wxMediaCtrl_Play, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_Play }};
//     bool Play( );
static int LUACALL wxLua_wxMediaCtrl_Play(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Play
    bool returns = (self->Play());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}


#if (wxLUA_USE_wxFile && wxUSE_FILE) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Seek[] = { &wxluatype_wxMediaCtrl, &wxluatype_TINTEGER, &wxluatype_TINTEGER, NULL };
static int LUACALL wxLua_wxMediaCtrl_Seek(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Seek[1] = {{ wxLua_wxMediaCtrl_Seek, WXLUAMETHOD_METHOD, 2, 3, s_wxluatypeArray_wxLua_wxMediaCtrl_Seek }};
//     wxFileOffset Seek(wxFileOffset where, wxSeekMode mode = wxFromStart );
static int LUACALL wxLua_wxMediaCtrl_Seek(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // wxSeekMode mode = wxFromStart
    wxSeekMode mode = (argCount >= 3 ? (wxSeekMode)wxlua_getenumtype(L, 3) : wxFromStart);
    // wxFileOffset where
    wxFileOffset where = (wxFileOffset)wxlua_getuintegertype(L, 2);
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Seek
    wxFileOffset returns = (self->Seek(where, mode));
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

#endif // (wxLUA_USE_wxFile && wxUSE_FILE) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_SetVolume[] = { &wxluatype_wxMediaCtrl, &wxluatype_TNUMBER, NULL };
static int LUACALL wxLua_wxMediaCtrl_SetVolume(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_SetVolume[1] = {{ wxLua_wxMediaCtrl_SetVolume, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxMediaCtrl_SetVolume }};
//     bool SetVolume(double dVolume );
static int LUACALL wxLua_wxMediaCtrl_SetVolume(lua_State *L)
{
    // double dVolume
    double dVolume = (double)wxlua_getnumbertype(L, 2);
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call SetVolume
    bool returns = (self->SetVolume(dVolume));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_ShowPlayerControls[] = { &wxluatype_wxMediaCtrl, &wxluatype_TINTEGER, NULL };
static int LUACALL wxLua_wxMediaCtrl_ShowPlayerControls(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_ShowPlayerControls[1] = {{ wxLua_wxMediaCtrl_ShowPlayerControls, WXLUAMETHOD_METHOD, 1, 2, s_wxluatypeArray_wxLua_wxMediaCtrl_ShowPlayerControls }};
//     bool ShowPlayerControls(wxMediaCtrlPlayerControls flags = wxMEDIACTRLPLAYERCONTROLS_DEFAULT );
static int LUACALL wxLua_wxMediaCtrl_ShowPlayerControls(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // wxMediaCtrlPlayerControls flags = wxMEDIACTRLPLAYERCONTROLS_DEFAULT
    wxMediaCtrlPlayerControls flags = (argCount >= 2 ? (wxMediaCtrlPlayerControls)wxlua_getenumtype(L, 2) : wxMEDIACTRLPLAYERCONTROLS_DEFAULT);
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call ShowPlayerControls
    bool returns = (self->ShowPlayerControls(flags));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Stop[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_Stop(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Stop[1] = {{ wxLua_wxMediaCtrl_Stop, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_Stop }};
//     bool Stop( );
static int LUACALL wxLua_wxMediaCtrl_Stop(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Stop
    bool returns = (self->Stop());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_Tell[] = { &wxluatype_wxMediaCtrl, NULL };
static int LUACALL wxLua_wxMediaCtrl_Tell(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Tell[1] = {{ wxLua_wxMediaCtrl_Tell, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_Tell }};
//     wxFileOffset Tell();
static int LUACALL wxLua_wxMediaCtrl_Tell(lua_State *L)
{
    // get this
    wxMediaCtrl * self = (wxMediaCtrl *)wxluaT_getuserdatatype(L, 1, wxluatype_wxMediaCtrl);
    // call Tell
    wxFileOffset returns = (self->Tell());
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}


#if ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect)
static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaCtrl_constructor1[] = { &wxluatype_wxWindow, &wxluatype_TNUMBER, &wxluatype_TSTRING, &wxluatype_wxPoint, &wxluatype_wxSize, &wxluatype_TNUMBER, &wxluatype_TSTRING, &wxluatype_wxValidator, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxMediaCtrl_constructor1(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_constructor1[1] = {{ wxLua_wxMediaCtrl_constructor1, WXLUAMETHOD_CONSTRUCTOR, 2, 9, s_wxluatypeArray_wxLua_wxMediaCtrl_constructor1 }};
//     wxMediaCtrl( wxWindow* parent, wxWindowID winid, const wxString& fileName = "", const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& szBackend = "", const wxValidator& val = wxDefaultValidator, const wxString& name = "wxMediaCtrl" );
static int LUACALL wxLua_wxMediaCtrl_constructor1(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // const wxString name = "wxMediaCtrl"
    const wxString name = (argCount >= 9 ? wxlua_getwxStringtype(L, 9) : wxString(wxT("wxMediaCtrl")));
    // const wxValidator val = wxDefaultValidator
    const wxValidator * val = (argCount >= 8 ? (const wxValidator *)wxluaT_getuserdatatype(L, 8, wxluatype_wxValidator) : &wxDefaultValidator);
    // const wxString szBackend = ""
    const wxString szBackend = (argCount >= 7 ? wxlua_getwxStringtype(L, 7) : wxString(wxEmptyString));
    // long style = 0
    long style = (argCount >= 6 ? (long)wxlua_getnumbertype(L, 6) : 0);
    // const wxSize size = wxDefaultSize
    const wxSize * size = (argCount >= 5 ? (const wxSize *)wxluaT_getuserdatatype(L, 5, wxluatype_wxSize) : &wxDefaultSize);
    // const wxPoint pos = wxDefaultPosition
    const wxPoint * pos = (argCount >= 4 ? (const wxPoint *)wxluaT_getuserdatatype(L, 4, wxluatype_wxPoint) : &wxDefaultPosition);
    // const wxString fileName = ""
    const wxString fileName = (argCount >= 3 ? wxlua_getwxStringtype(L, 3) : wxString(wxEmptyString));
    // wxWindowID winid
    wxWindowID winid = (wxWindowID)wxlua_getnumbertype(L, 2);
    // wxWindow parent
    wxWindow * parent = (wxWindow *)wxluaT_getuserdatatype(L, 1, wxluatype_wxWindow);
    // call constructor
    wxMediaCtrl* returns = new wxMediaCtrl(parent, winid, fileName, *pos, *size, style, szBackend, *val, name);
    // add to tracked window list, it will check validity
    wxluaW_addtrackedwindow(L, returns);
    // push the constructed class pointer
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxMediaCtrl);

    return 1;
}

#endif // ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect)

static int LUACALL wxLua_wxMediaCtrl_constructor(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_constructor[1] = {{ wxLua_wxMediaCtrl_constructor, WXLUAMETHOD_CONSTRUCTOR, 0, 0, g_wxluaargtypeArray_None }};
//     wxMediaCtrl( );
static int LUACALL wxLua_wxMediaCtrl_constructor(lua_State *L)
{
    // call constructor
    wxMediaCtrl* returns = new wxMediaCtrl();
    // add to tracked window list, it will check validity
    wxluaW_addtrackedwindow(L, returns);
    // push the constructed class pointer
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxMediaCtrl);

    return 1;
}




#if (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
// function overload table
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_GetVolume_overload[] =
{
    { wxLua_wxMediaCtrl_GetVolume1, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_GetVolume1 },
    { wxLua_wxMediaCtrl_GetVolume, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxMediaCtrl_GetVolume },
};
static int s_wxluafunc_wxLua_wxMediaCtrl_GetVolume_overload_count = sizeof(s_wxluafunc_wxLua_wxMediaCtrl_GetVolume_overload)/sizeof(wxLuaBindCFunc);

#endif // (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

#if ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS))||(wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
// function overload table
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_Load_overload[] =
{

#if (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS)
    { wxLua_wxMediaCtrl_Load2, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxMediaCtrl_Load2 },
#endif // (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS)

#if (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS)
    { wxLua_wxMediaCtrl_Load1, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxMediaCtrl_Load1 },
#endif // (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS)
    { wxLua_wxMediaCtrl_Load, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxMediaCtrl_Load },
};
static int s_wxluafunc_wxLua_wxMediaCtrl_Load_overload_count = sizeof(s_wxluafunc_wxLua_wxMediaCtrl_Load_overload)/sizeof(wxLuaBindCFunc);

#endif // ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS))||(wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

#if (((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect))||(wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
// function overload table
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaCtrl_constructor_overload[] =
{

#if ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect)
    { wxLua_wxMediaCtrl_constructor1, WXLUAMETHOD_CONSTRUCTOR, 2, 9, s_wxluatypeArray_wxLua_wxMediaCtrl_constructor1 },
#endif // ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect)
    { wxLua_wxMediaCtrl_constructor, WXLUAMETHOD_CONSTRUCTOR, 0, 0, g_wxluaargtypeArray_None },
};
static int s_wxluafunc_wxLua_wxMediaCtrl_constructor_overload_count = sizeof(s_wxluafunc_wxLua_wxMediaCtrl_constructor_overload)/sizeof(wxLuaBindCFunc);

#endif // (((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect))||(wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

void wxLua_wxMediaCtrl_delete_function(void** p)
{
    wxMediaCtrl* o = (wxMediaCtrl*)(*p);
    delete o;
}

// Map Lua Class Methods to C Binding Functions
wxLuaBindMethod wxMediaCtrl_methods[] = {
#if ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect)
    { "Create", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_Create, 1, NULL },
#endif // ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect)

    { "GetDownloadProgress", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_GetDownloadProgress, 1, NULL },
    { "GetDownloadTotal", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_GetDownloadTotal, 1, NULL },
    { "GetState", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_GetState, 1, NULL },

#if (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
    { "GetVolume", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_GetVolume_overload, s_wxluafunc_wxLua_wxMediaCtrl_GetVolume_overload_count, 0 },
#endif // (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

    { "Length", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_Length, 1, NULL },

#if ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS))||(wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
    { "Load", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_Load_overload, s_wxluafunc_wxLua_wxMediaCtrl_Load_overload_count, 0 },
#endif // ((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxSocket && wxUSE_SOCKETS))||(wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

    { "LoadURI", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_LoadURI, 1, NULL },
    { "LoadURIWithProxy", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_LoadURIWithProxy, 1, NULL },
    { "Pause", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_Pause, 1, NULL },
    { "Play", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_Play, 1, NULL },

#if (wxLUA_USE_wxFile && wxUSE_FILE) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
    { "Seek", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_Seek, 1, NULL },
#endif // (wxLUA_USE_wxFile && wxUSE_FILE) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

    { "SetVolume", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_SetVolume, 1, NULL },
    { "ShowPlayerControls", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_ShowPlayerControls, 1, NULL },
    { "Stop", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_Stop, 1, NULL },
    { "Tell", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxMediaCtrl_Tell, 1, NULL },

#if (((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect))||(wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
    { "wxMediaCtrl", WXLUAMETHOD_CONSTRUCTOR, s_wxluafunc_wxLua_wxMediaCtrl_constructor_overload, s_wxluafunc_wxLua_wxMediaCtrl_constructor_overload_count, 0 },
#endif // (((wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL) && (wxLUA_USE_wxValidator && wxUSE_VALIDATORS)) && (wxLUA_USE_wxPointSizeRect))||(wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

    { 0, 0, 0, 0 },
};

int wxMediaCtrl_methodCount = sizeof(wxMediaCtrl_methods)/sizeof(wxLuaBindMethod) - 1;

#endif  // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL


#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
// ---------------------------------------------------------------------------
// Bind class wxMediaEvent
// ---------------------------------------------------------------------------

// Lua MetaTable Tag for Class 'wxMediaEvent'
int wxluatype_wxMediaEvent = WXLUA_TUNKNOWN;

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaEvent_delete[] = { &wxluatype_wxMediaEvent, NULL };
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaEvent_delete[1] = {{ wxlua_userdata_delete, WXLUAMETHOD_METHOD|WXLUAMETHOD_DELETE, 1, 1, s_wxluatypeArray_wxLua_wxMediaEvent_delete }};

static wxLuaArgType s_wxluatypeArray_wxLua_wxMediaEvent_constructor[] = { &wxluatype_TNUMBER, &wxluatype_TNUMBER, NULL };
static int LUACALL wxLua_wxMediaEvent_constructor(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxMediaEvent_constructor[1] = {{ wxLua_wxMediaEvent_constructor, WXLUAMETHOD_CONSTRUCTOR, 0, 2, s_wxluatypeArray_wxLua_wxMediaEvent_constructor }};
//     wxMediaEvent(wxEventType commandType = wxEVT_NULL, int winid = 0 );
static int LUACALL wxLua_wxMediaEvent_constructor(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // int winid = 0
    int winid = (argCount >= 2 ? (int)wxlua_getnumbertype(L, 2) : 0);
    // wxEventType commandType = wxEVT_NULL
    wxEventType commandType = (argCount >= 1 ? (wxEventType)wxlua_getnumbertype(L, 1) : wxEVT_NULL);
    // call constructor
    wxMediaEvent* returns = new wxMediaEvent(commandType, winid);
    // add to tracked memory list
    wxluaO_addgcobject(L, returns, wxluatype_wxMediaEvent);
    // push the constructed class pointer
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxMediaEvent);

    return 1;
}




void wxLua_wxMediaEvent_delete_function(void** p)
{
    wxMediaEvent* o = (wxMediaEvent*)(*p);
    delete o;
}

// Map Lua Class Methods to C Binding Functions
wxLuaBindMethod wxMediaEvent_methods[] = {
    { "delete", WXLUAMETHOD_METHOD|WXLUAMETHOD_DELETE, s_wxluafunc_wxLua_wxMediaEvent_delete, 1, NULL },
    { "wxMediaEvent", WXLUAMETHOD_CONSTRUCTOR, s_wxluafunc_wxLua_wxMediaEvent_constructor, 1, NULL },

    { 0, 0, 0, 0 },
};

int wxMediaEvent_methodCount = sizeof(wxMediaEvent_methods)/sizeof(wxLuaBindMethod) - 1;

#endif  // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL



// ---------------------------------------------------------------------------
// ../modules/wxbind/src/wxmedia_bind.cpp was generated by genwxbind.lua 
//
// Any changes made to this file will be lost when the file is regenerated.
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
// wxLuaGetEventList_wxmedia() is called to register events
// ---------------------------------------------------------------------------

wxLuaBindEvent* wxLuaGetEventList_wxmedia(size_t &count)
{
    static wxLuaBindEvent eventList[] =
    {
#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
        { "wxEVT_MEDIA_FINISHED", WXLUA_GET_wxEventType_ptr(wxEVT_MEDIA_FINISHED), &wxluatype_wxMediaEvent },
        { "wxEVT_MEDIA_LOADED", WXLUA_GET_wxEventType_ptr(wxEVT_MEDIA_LOADED), &wxluatype_wxMediaEvent },
#endif // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL

#if (wxCHECK_VERSION(2,6,4)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
        { "wxEVT_MEDIA_PAUSE", WXLUA_GET_wxEventType_ptr(wxEVT_MEDIA_PAUSE), &wxluatype_wxMediaEvent },
        { "wxEVT_MEDIA_PLAY", WXLUA_GET_wxEventType_ptr(wxEVT_MEDIA_PLAY), &wxluatype_wxMediaEvent },
        { "wxEVT_MEDIA_STATECHANGED", WXLUA_GET_wxEventType_ptr(wxEVT_MEDIA_STATECHANGED), &wxluatype_wxMediaEvent },
#endif // (wxCHECK_VERSION(2,6,4)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
        { "wxEVT_MEDIA_STOP", WXLUA_GET_wxEventType_ptr(wxEVT_MEDIA_STOP), &wxluatype_wxMediaEvent },
#endif // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL


        { 0, 0, 0 },
    };
    count = sizeof(eventList)/sizeof(wxLuaBindEvent) - 1;
    return eventList;
}

// ---------------------------------------------------------------------------
// wxLuaGetDefineList_wxmedia() is called to register #define and enum
// ---------------------------------------------------------------------------

wxLuaBindNumber* wxLuaGetDefineList_wxmedia(size_t &count)
{
    static wxLuaBindNumber numberList[] =
    {
#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
        { "wxMEDIACTRLPLAYERCONTROLS_DEFAULT", wxMEDIACTRLPLAYERCONTROLS_DEFAULT },
        { "wxMEDIACTRLPLAYERCONTROLS_NONE", wxMEDIACTRLPLAYERCONTROLS_NONE },
        { "wxMEDIACTRLPLAYERCONTROLS_STEP", wxMEDIACTRLPLAYERCONTROLS_STEP },
        { "wxMEDIACTRLPLAYERCONTROLS_VOLUME", wxMEDIACTRLPLAYERCONTROLS_VOLUME },
        { "wxMEDIASTATE_PAUSED", wxMEDIASTATE_PAUSED },
        { "wxMEDIASTATE_PLAYING", wxMEDIASTATE_PLAYING },
        { "wxMEDIASTATE_STOPPED", wxMEDIASTATE_STOPPED },
#endif // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL

#if (!wxCHECK_VERSION(2,9,2)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
        { "wxMEDIA_FINISHED_ID", wxMEDIA_FINISHED_ID },
        { "wxMEDIA_LOADED_ID", wxMEDIA_LOADED_ID },
#endif // (!wxCHECK_VERSION(2,9,2)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)

#if ((!wxCHECK_VERSION(2,9,2)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)) && (wxCHECK_VERSION(2,6,4))
        { "wxMEDIA_PAUSE_ID", wxMEDIA_PAUSE_ID },
        { "wxMEDIA_PLAY_ID", wxMEDIA_PLAY_ID },
        { "wxMEDIA_STATECHANGED_ID", wxMEDIA_STATECHANGED_ID },
#endif // ((!wxCHECK_VERSION(2,9,2)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)) && (wxCHECK_VERSION(2,6,4))

#if (!wxCHECK_VERSION(2,9,2)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
        { "wxMEDIA_STOP_ID", wxMEDIA_STOP_ID },
#endif // (!wxCHECK_VERSION(2,9,2)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)


        { 0, 0 },
    };
    count = sizeof(numberList)/sizeof(wxLuaBindNumber) - 1;
    return numberList;
}

// ---------------------------------------------------------------------------

// wxLuaGetStringList_wxmedia() is called to register #define_string
// ---------------------------------------------------------------------------

wxLuaBindString* wxLuaGetStringList_wxmedia(size_t &count)
{
    static wxLuaBindString stringList[] =
    {
#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
        { "wxMEDIABACKEND_DIRECTSHOW", NULL, wxMEDIABACKEND_DIRECTSHOW },
        { "wxMEDIABACKEND_GSTREAMER", NULL, wxMEDIABACKEND_GSTREAMER },
        { "wxMEDIABACKEND_MCI", NULL, wxMEDIABACKEND_MCI },
        { "wxMEDIABACKEND_QUICKTIME", NULL, wxMEDIABACKEND_QUICKTIME },
#endif // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL

#if (wxCHECK_VERSION(2,8,0)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)
        { "wxMEDIABACKEND_REALPLAYER", NULL, wxMEDIABACKEND_REALPLAYER },
        { "wxMEDIABACKEND_WMP10", NULL, wxMEDIABACKEND_WMP10 },
#endif // (wxCHECK_VERSION(2,8,0)) && (wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL)


        { 0, 0 },
    };
    count = sizeof(stringList)/sizeof(wxLuaBindString) - 1;
    return stringList;
}

// ---------------------------------------------------------------------------
// wxLuaGetObjectList_wxmedia() is called to register object and pointer bindings
// ---------------------------------------------------------------------------

wxLuaBindObject* wxLuaGetObjectList_wxmedia(size_t &count)
{
    static wxLuaBindObject objectList[] =
    {

        { 0, 0, 0, 0 },
    };
    count = sizeof(objectList)/sizeof(wxLuaBindObject) - 1;
    return objectList;
}

// ---------------------------------------------------------------------------
// wxLuaGetFunctionList_wxmedia() is called to register global functions
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
// wxLuaGetFunctionList_wxmedia() is called to register global functions
// ---------------------------------------------------------------------------

wxLuaBindMethod* wxLuaGetFunctionList_wxmedia(size_t &count)
{
    static wxLuaBindMethod functionList[] =
    {

        { 0, 0, 0, 0 }, 
    };
    count = sizeof(functionList)/sizeof(wxLuaBindMethod) - 1;
    return functionList;
}



// ---------------------------------------------------------------------------
// wxLuaGetClassList_wxmedia() is called to register classes
// ---------------------------------------------------------------------------

static const char* wxluaclassname_wxControl = "wxControl";
static const char* wxluaclassname_wxMediaCtrl = "wxMediaCtrl";
static const char* wxluaclassname_wxMediaEvent = "wxMediaEvent";
static const char* wxluaclassname_wxNotifyEvent = "wxNotifyEvent";

static const char* wxluabaseclassnames_wxMediaCtrl[] = { wxluaclassname_wxControl, NULL };
static wxLuaBindClass* wxluabaseclassbinds_wxMediaCtrl[] = { NULL };
static const char* wxluabaseclassnames_wxMediaEvent[] = { wxluaclassname_wxNotifyEvent, NULL };
static wxLuaBindClass* wxluabaseclassbinds_wxMediaEvent[] = { NULL };
// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
    extern wxLuaBindMethod wxMediaCtrl_methods[];
    extern int wxMediaCtrl_methodCount;
    extern void wxLua_wxMediaCtrl_delete_function(void** p);
    extern wxLuaBindMethod wxMediaEvent_methods[];
    extern int wxMediaEvent_methodCount;
    extern void wxLua_wxMediaEvent_delete_function(void** p);
#endif // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL




wxLuaBindClass* wxLuaGetClassList_wxmedia(size_t &count)
{
    static wxLuaBindClass classList[] =
    {
#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
        { wxluaclassname_wxMediaCtrl, wxMediaCtrl_methods, wxMediaCtrl_methodCount, CLASSINFO(wxMediaCtrl), &wxluatype_wxMediaCtrl, wxluabaseclassnames_wxMediaCtrl, wxluabaseclassbinds_wxMediaCtrl, NULL, NULL, NULL, 0, &wxLua_wxMediaCtrl_delete_function, }, 
        { wxluaclassname_wxMediaEvent, wxMediaEvent_methods, wxMediaEvent_methodCount, CLASSINFO(wxMediaEvent), &wxluatype_wxMediaEvent, wxluabaseclassnames_wxMediaEvent, wxluabaseclassbinds_wxMediaEvent, NULL, NULL, NULL, 0, &wxLua_wxMediaEvent_delete_function, }, 
#endif // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL


        { 0, 0, 0, 0, 0, 0, 0 }, 
    };
    count = sizeof(classList)/sizeof(wxLuaBindClass) - 1;

    return classList;
}

// ---------------------------------------------------------------------------
// wxLuaBinding_wxmedia() - the binding class
// ---------------------------------------------------------------------------

IMPLEMENT_DYNAMIC_CLASS(wxLuaBinding_wxmedia, wxLuaBinding)

wxLuaBinding_wxmedia::wxLuaBinding_wxmedia() : wxLuaBinding()
{
    m_bindingName   = wxT("wxmedia");
    m_nameSpace     = wxT("wx");
    m_classArray    = wxLuaGetClassList_wxmedia(m_classCount);
    m_numberArray   = wxLuaGetDefineList_wxmedia(m_numberCount);
    m_stringArray   = wxLuaGetStringList_wxmedia(m_stringCount);
    m_eventArray    = wxLuaGetEventList_wxmedia(m_eventCount);
    m_objectArray   = wxLuaGetObjectList_wxmedia(m_objectCount);
    m_functionArray = wxLuaGetFunctionList_wxmedia(m_functionCount);
    InitBinding();
}



// ---------------------------------------------------------------------------

wxLuaBinding* wxLuaBinding_wxmedia_init()
{
    static wxLuaBinding_wxmedia m_binding;

    if (wxLuaBinding::GetBindingArray().Index(&m_binding) == wxNOT_FOUND)
        wxLuaBinding::GetBindingArray().Add(&m_binding);

    return &m_binding;
}


