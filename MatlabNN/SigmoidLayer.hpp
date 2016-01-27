//
//  SigmoidLayer.hpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#ifndef SigmoidLayer_hpp
#define SigmoidLayer_hpp

#include "Layer.hpp"

/**
 * This class models a neural network layer with a sigoid activation function
 */

class SigmoidLayer: public Layer{
public:
	SigmoidLayer(vector<Neuron> neurons);
	vector<double> transferLayer(vector<double> inputs);
};

#endif /* SigmoidLayer_hpp */
