#include "MeshSegmentation.h"
#undef check

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Polyhedron_3.h>

#include <CGAL/mesh_segmentation.h>
#include <CGAL/property_map.h>

#include <iostream>
#include <fstream>

typedef CGAL::Exact_predicates_inexact_constructions_kernel Kernel;
typedef CGAL::Polyhedron_3<Kernel> Polyhedron;
typedef boost::graph_traits<Polyhedron>::face_descriptor face_descriptor;

bool FMeshSegmenter::TestAdapter() {
	// create and read Polyhedron
	Polyhedron mesh;
	std::ifstream input(CGAL::data_file_path("G:\\geometry\\CGAL-5.6.1\\CGAL-5.6.1-shared\\data\\meshes\\cactus.off"));
	if ( !input || !(input >> mesh) || mesh.empty() || ( !CGAL::is_triangle_mesh(mesh)) )
	{
		std::cerr << "Input is not a triangle mesh" << std::endl;
		return false;
	}

	// create a property-map
	typedef std::map<face_descriptor, double> Face_double_map;
	Face_double_map internal_map;
	boost::associative_property_map<Face_double_map> sdf_property_map(internal_map);

	// compute SDF values
	std::pair<double, double> min_max_sdf = CGAL::sdf_values(mesh, sdf_property_map);

	// print minimum & maximum SDF values
	std::cout << "minimum SDF: " << min_max_sdf.first
			  << " maximum SDF: " << min_max_sdf.second << std::endl;

	// print SDF values
	for(face_descriptor f : faces(mesh))
		std::cout << sdf_property_map[f] << " ";

	std::cout << std::endl;
	return true;
}
