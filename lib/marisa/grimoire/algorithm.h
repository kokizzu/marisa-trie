#ifndef MARISA_GRIMOIRE_ALGORITHM_H_
#define MARISA_GRIMOIRE_ALGORITHM_H_

#include "marisa/grimoire/algorithm/sort.h"

namespace marisa::grimoire {

class Algorithm {
 public:
  Algorithm() = default;

  Algorithm(const Algorithm &) = delete;
  Algorithm &operator=(const Algorithm &) = delete;

  template <typename Iterator>
  std::size_t sort(Iterator begin, Iterator end) const {
    return algorithm::sort(begin, end);
  }
};

}  // namespace marisa::grimoire

#endif  // MARISA_GRIMOIRE_ALGORITHM_H_
