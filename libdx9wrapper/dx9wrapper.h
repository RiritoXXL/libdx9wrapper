#pragma once
#include <d3d9.h>
#include <Windows.h>
static LPDIRECT3D9 g_pD3D = NULL;
static LPDIRECT3DDEVICE9 g_pd3dDevice = NULL;
static D3DPRESENT_PARAMETERS g_d3dpp = { NULL };
class dx9wrapper
{
private:

public:
	bool CreateDX9Device(HWND hwnd);
	void CleanupD3DDeviceDX9();
	void ResetDX9Device();
};