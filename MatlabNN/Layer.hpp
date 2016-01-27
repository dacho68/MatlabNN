//
//  Layer.hpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#ifndef Layer_hpp
#define Layer_hpp

#include "Neuron.hpp"

/**
 * This abstract class is the base for derived classes.
 * It models the layers present in a neural network.
 */

class Layer{
protected:
	vector<Neuron> neurons;
public:
	Layer(vector<Neuron> neurons);
	virtual vector<double> transferLayer(vector<double> inputs) = 0;
	int numNeurons();
};

#endif /* Layer_hpp */
