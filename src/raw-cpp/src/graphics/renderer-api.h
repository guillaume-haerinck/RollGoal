#pragma once

#include <glad/glad.h>
#include <memory>
#include <glm/glm.hpp>

#include "vertex-array.h"

class RendererApi {
public:
	RendererApi();
	~RendererApi();

	void setClearColor(glm::vec4 color);
	void clear();

	void drawIndexed(const std::shared_ptr<VertexArray>& vertexArray);

};
