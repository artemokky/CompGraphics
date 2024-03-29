#pragma once
#include <assert.h>

#include <d3d11.h>
#include <dxgi.h>

class Renderer {
private:
	ID3D11Device* m_pDevice = nullptr;
	ID3D11DeviceContext* m_pDeviceContext = nullptr;
	IDXGISwapChain* m_pSwapChain = nullptr;
	ID3D11RenderTargetView* m_pBackBufferRTV = nullptr;

	UINT m_width = 0;
	UINT m_height = 0;

	HRESULT setupBackBuffer();

public:
	bool Init(HWND hWnd);
	bool Render();
	void deviceCleanup();
	bool Resize(UINT width, UINT height);

};
