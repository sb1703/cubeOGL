#include "config.h"

class Cube {
    public:
        Cube();
        void draw();
        ~Cube();
    private:
        unsigned int EBO, VAO, VBO, vertex_count;
};