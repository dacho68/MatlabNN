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

class SoftMaxLayer: public Layer{
public:
	SoftMaxLayer(vector<Neuron> neurons);
	vector<double> transferLayer(vector<double> inputs);
};


#endif /* SoftMaxLayer_hpp */
