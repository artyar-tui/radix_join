#ifndef RADIXJOIN_H
#define RADIXJOIN_H

#include <stdint.h>
#include <queue>

#include "Relation.h"
#include "Tuple.h"

class RadixJoin
{

public:

  RadixJoin (Relation * innerRelation,
	     Relation * outerRelation, uint64_t radix_bits);

  static uint64_t MATCH_COUNTER;
  static uint64_t thread_num;
  static uint64_t part_num;
  static uint64_t parts_per_thread;

  void join ();

protected:

  void partitioning ();
  Relation *innerRelation;
  Relation *outerRelation;

};

#endif
