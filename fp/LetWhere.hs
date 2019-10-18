-- Tested with GHC 8.8.1.

-- Adaped from Fig. 5.9 in Kent D. Lee (2017), Foundations of
-- Programming Languages, 2nd ed.

import Numeric.Natural ( Natural )

sumUpTo :: Natural -> Natural
sumUpTo 0 = 0
sumUpTo n = n + sumUpTo (n - 1)

sumUpToL :: Natural -> Natural
sumUpToL 0 = 0
sumUpToL n =
  let sum :: Natural
      sum = sumUpToL (n - 1)
  in n + sum

sumUpToW :: Natural -> Natural
sumUpToW 0 = 0
sumUpToW n = n + sum
  where
    sum :: Natural
    sum = sumUpToW (n - 1)
