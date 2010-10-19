/*
 * analyserrg.h
 *
 *  Created on: 13/ott/2010
 *      Author: vittorio
 */

#ifndef ANALYSERRG_H_
#define ANALYSERRG_H_

#include "analyser.h"
#include "configobject.h"

class AnalyserGain : public Analyser {

  public:
    AnalyserGain(ConfigObject<ConfigValue> *_config);
    void initialise(TrackPointer tio, int sampleRate, int totalSamples);
    void process(const CSAMPLE *pIn, const int iLen);
    void finalise(TrackPointer tio);

  private:
    int m_istepcontrol;
    ConfigObject<ConfigValue> *m_pConfigRG;
    //int m_iStartTime;
};


#endif /* ANALYSERRG_H_ */
