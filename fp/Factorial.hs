
import Numeric.Natural ( Natural )

-- Non-tail recursive version.
factorial :: Natural -> Natural
factorial 0 = 1
factorial n = n * factorial (n - 1)

-- Tail recursive version. Adapted from Fig. 5.19 in Kent D. Lee
-- (2017), Foundations of Programming Languages, 2nd ed.
factorialTR :: Natural -> Natural
factorialTR n = facHelper n 1
  where
  facHelper :: Natural -> Natural -> Natural
  facHelper 0 prod = prod
  facHelper m prod = facHelper (m - 1) (prod * m)
