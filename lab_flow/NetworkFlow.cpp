/**
 * @file NetworkFlow.cpp
 * CS 225: Data Structures
 */

#include <vector>
#include <algorithm>
#include <set>

#include "graph.h"
#include "edge.h"

#include "NetworkFlow.h"

int min(int a, int b) {
  if (a<b)
    return a;
  else return b;
}

NetworkFlow::NetworkFlow(Graph & startingGraph, Vertex source, Vertex sink) :
  g_(startingGraph), residual_(Graph(true,true)), flow_(Graph(true,true)), source_(source), sink_(sink) {

  // YOUR CODE HERE

  for(Vertex vertex: g_.getVertices()) {
    flow_.insertVertex(vertex);
    residual_.insertVertex(vertex);
  }

  for (Edge edge: g_.getEdges()) {
    flow_.insertEdge(edge.source, edge.dest);
    flow_.setEdgeWeight(edge.source, edge.dest, 0);
    residual_.insertEdge(edge.source, edge.dest);
    residual_.insertEdge(edge.dest, edge.source);
    residual_.setEdgeWeight(edge.source, edge.dest, edge.getWeight());
    residual_.setEdgeWeight(edge.dest, edge.source, 0);
  }
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the helper function.
   *
   * @param source  The starting (current) vertex
   * @param sink    The destination vertex
   * @param path    The vertices in the path
   * @param visited A set of vertices we have visited
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink, 
  std::vector<Vertex> &path, std::set<Vertex> &visited) {

  if (visited.count(source) != 0)
    return false;
  visited.insert(source);

  if (source == sink) {
    return true;
  }

  vector<Vertex> adjs = residual_.getAdjacent(source);
  for(auto it = adjs.begin(); it != adjs.end(); it++) {
    if (visited.count(*it) == 0 && residual_.getEdgeWeight(source,*it) > 0) {
      path.push_back(*it);
      if (findAugmentingPath(*it,sink,path,visited))
        return true;
      else {
        path.pop_back();
      }
    }
  }

  return false;
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the main function.  It initializes a set to keep track of visited vertices.
   *
   * @param source The starting (current) vertex
   * @param sink   The destination vertex
   * @param path   The vertices in the path
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink, std::vector<Vertex> &path) {
   std::set<Vertex> visited;
   path.clear();
   path.push_back(source);
   return findAugmentingPath(source,sink,path,visited);
}

  /**
   * pathCapacity - Determine the capacity of a path in the residual graph.
   *
   * @param path   The vertices in the path
   */

int NetworkFlow::pathCapacity(const std::vector<Vertex> & path) const {
  // YOUR CODE HERE
  if (!(path.size() > 1)) {
    return 0;
  }
  int min = residual_.getEdgeWeight(path[0], path[1]);
  for (unsigned j = 1; path.size() >= j + 2; ++j) {
    if (residual_.getEdgeWeight(path[j], path[j + 1]) < min) {
      min = residual_.getEdgeWeight(path[j], path[j + 1]);
    }
  }
  return min;

}

  /**
   * calculuateFlow - Determine the capacity of a path in the residual graph.
   * Sets the member function `maxFlow_` to be the flow, and updates the
   * residual graph and flow graph according to the algorithm.
   *
   * @return The network flow graph.
   */

const Graph & NetworkFlow::calculateFlow() {
  // YOUR CODE HERE
  maxFlow_ = 0;
  vector<Vertex> p;
  while(findAugmentingPath(source_, sink_, p)) {
    int pcap = pathCapacity(p);
    maxFlow_ = maxFlow_ + pathCapacity(p);
    for (unsigned j = 0; p.size() >= j + 2; ++j) {
      residual_.setEdgeWeight(p[j], p[j + 1], residual_.getEdgeWeight(p[j], p[j + 1]) - pcap);
      residual_.setEdgeWeight(p[j + 1], p[j], residual_.getEdgeWeight(p[j + 1], p[j]) + pcap);
      if (!flow_.edgeExists(p[j], p[j + 1])) {
        flow_.setEdgeWeight(p[j + 1], p[j], flow_.getEdgeWeight(p[j + 1], p[j]) - pcap);
      } else {
        flow_.setEdgeWeight(p[j], p[j + 1], flow_.getEdgeWeight(p[j], p[j + 1]) + pcap);
      }
    }
  }
  return flow_;
}

int NetworkFlow::getMaxFlow() const {
  return maxFlow_;
}

const Graph & NetworkFlow::getGraph() const {
  return g_;
}

const Graph & NetworkFlow::getFlowGraph() const {
  return flow_;
}

const Graph & NetworkFlow::getResidualGraph() const {
  return residual_;
}

