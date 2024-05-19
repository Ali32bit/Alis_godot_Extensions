#ifndef CONVEX_HULL_MESH
#define CONVEX_HULL_MESH


#include <godot_cpp/classes/node.hpp>

using namespace godot;

class ConvexHullMesh:public Node {
    GDCLASS(ConvexHullMesh,Node);

    protected:
    static void _bind_methods(){}
};

// {
// private:
//     /* data */
// public:
//     GenerateMesh(PackedVector3Array input);
//     ConvexHullMesh(/* args */);
//     ~ConvexHullMesh();
// };

// ConvexHullMesh::ConvexHullMesh()
// {
// }

// ConvexHullMesh::~ConvexHullMesh()
// {
// }


#endif