/**
 *  Copyright (c) 2023 by Contributors
 * @file python_binding.cc
 * @brief Graph bolt library Python binding.
 */

#include <graphbolt/csc_sampling_graph.h>

namespace graphbolt {
namespace sampling {

TORCH_LIBRARY(graphbolt, m) {
  m.class_<CSCSamplingGraph>("CSCSamplingGraph")
      .def("num_nodes", &CSCSamplingGraph::NumNodes)
      .def("num_edges", &CSCSamplingGraph::NumEdges)
      .def("csc_indptr", &CSCSamplingGraph::CSCIndptr)
      .def("indices", &CSCSamplingGraph::Indices)
      .def("node_type_offset", &CSCSamplingGraph::NodeTypeOffset)
      .def("type_per_edge", &CSCSamplingGraph::TypePerEdge);
  m.def("from_csc", &CSCSamplingGraph::FromCSC);
}

}  // namespace sampling
}  // namespace graphbolt