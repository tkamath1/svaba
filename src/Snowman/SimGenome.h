#ifndef SNOWMAN_SIMGENOME_H__
#define SNOWMAN_SIMGENOME_H__

#include "SeqFrag.h"
#include "SnowTools/BWAWrapper.h"
#include "ReadSim.h"

class SimGenome {

 public:

  SimGenome(const SnowTools::GenomicRegion& gr, int nbreaks, int nindels, faidx_t * findex, bool scramble); 

  void addBreak(int b);

  friend std::ostream& operator<<(std::ostream& out, const SimGenome& s);

  std::string getSequence() const;

  std::string printBreaks() const;

  std::vector<Indel> m_indels;

 private:
  
  SnowTools::GenomicRegion m_gr;

  std::vector<SeqFrag> m_sfv;

};

#endif