#pragma once
#include <d3d11.h>

class GraphcisEngine;
class DeviceContext;

class VertexShader
{
public:
	VertexShader();
	bool release();
	~VertexShader();
private:
	bool init(void* shader_byte_code, size_t byte_code_size);
private:
	ID3D11VertexShader* m_vs;

	friend class GraphicsEngine;
	friend class DeviceContext;
};

