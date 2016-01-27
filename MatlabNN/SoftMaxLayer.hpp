//
//  SoftMaxLayer.hpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#ifndef SoftMaxLayer_hpp
#define SoftMaxLayer_hpp

#include "Layer.hpp"

/**
 * This class models a neural network layer with the softmax function at the outputs
 */

class SoftMaxLayer: public Layer{
public:
	SoftMaxLayer(vector<Neuron> neurons);
	vector<double> transferLayer(vector<double> inputs);
};


#endif /* SoftMaxLayer_hpp */
