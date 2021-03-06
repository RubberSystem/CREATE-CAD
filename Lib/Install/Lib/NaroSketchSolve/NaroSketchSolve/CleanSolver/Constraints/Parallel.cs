﻿#region Usings

using CleanSolver.SolverSystem;

#endregion

namespace CleanSolver.Constraints
{
    public class Parallel : ConstraintBase
    {
        public override double Calc()
        {
            var dx = L1.P2.X.Value - L1.P1.X.Value;
            var dy = L1.P2.Y.Value - L1.P1.Y.Value;
            var dx2 = L2.P2.X.Value - L2.P1.X.Value;
            var dy2 = L2.P2.Y.Value - L2.P1.Y.Value;

            var hyp1 = SolverUtils.Hypot(dx, dy);
            var hyp2 = SolverUtils.Hypot(dx2, dy2);

            dx = dx/hyp1;
            dy = dy/hyp1;
            dx2 = dx2/hyp2;
            dy2 = dy2/hyp2;

            var temp = dy*dx2 - dx*dy2;
            return (temp)*(temp);
        }
    }
}