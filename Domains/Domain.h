#ifndef INCLUDED_DOMAINS_DOMAIN
#define INCLUDED_DOMAINS_DOMAIN

#include "../LBM/node.h"
#include "../VelocitySets/VelocitySet.h"
#include "../BoundaryConditions/BoundaryNode.h"

struct Domain {
    std::vector<Node> nodes;
    std::vector<BoundaryNode> b_nodes;
    VelocitySet set;
    // Pherhaps here some messengers? for parallel programming
};

#endif