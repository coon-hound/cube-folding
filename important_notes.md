# Paper 6 basic stuff

## Definitions
> **Polyomino** - a connected polygon P in the plane formed by joining together *n* unit squares on the square lattice. 

We refer to the *n* unit squares forming P as the **grid points** of P. 

We view P as an **open region** which bincludes *n* open unit squares of the form ($x_i$. $x_i + 1$) x ($y_i$, $y_i + 1$) as well as *some* of the shared unit-length edges (and grid points) among these *n* unit squares. 

Notably, we do not require P to includ ethe common edge betweene very adjacent pair of squares; if such an edge is missing from P, we call the edge a **slit edge**. But there is at least n-1 uniot-length edges in P so that P is (interior-)connected.

> **Hole** - a bopunded connected component of P'x exterior whose boundary is one of the conencted components of P's boundary other than the outermost one. 

*We assume that P has no holes that are just a single grid point, because such holes do not affect foldability so we can fill them in (add them to P).*

We call a hole a **slot** if it has zero area (and is more than a single grid point), and thus consists entirely of one or mo-re slit edges.

### Basic Holes
    1. A unit square
    2. A slit of size 1 (a single slit edge)
    3. A slit of size 2 (L-shaped or straight)
    4. A U-silt of size 3
## Theorems
### Polyonimoes that **Do** Fold
1. If a polyomino P contains a hole h that is not basic, then P folds into a cube
2. A polyomino with two vertical straight size-2 slits with at least two columns and an odd number of rows between them folds. 
3. A unit cube can be folded from any polyomino with an A-slit and a unit-square hole/C-slit in the smae column above it, having an even number of rows between them folds.
4. A polyomino with an A-slit and a unit-square hole/C-slit below it and seperated bya n odd numer of rows, folds, regardless in which columns they are folds.
5. A polyomino with two unit-square holes which are in the smae or in neighboured column(s) and ahve an odd numaber of rows between them folds. 

### Polyonimoes that **Do Not** Fold

#### Lemmas
1. Four unit squares incident to a polyomino grid point v for which the induced polyomino is connected, cannot cover more than three faces of a unit cube. 
2. Four unit squares incident to a grid point v not on the bopundary of polyomino P cannot cover more than two faces of a unit cube. In particular, at least two collinear incident creases are folded by +- 180 degrees.
3. Consider a grid point v that is not on the boundary o-f a polyomino P that folds into a unit square. If one crease of v is folded by +- 180, then the incident collinear crease is also folded by 180

#### Theorems
1. Let k, n >= 2 and lert P be a poalyomino containing a rectangular k x n subpolyomino P' whose interior does not contain any boudnary of P. Then, in every folding of P intoa  unit cube, all collinear creases of P' are either folded by +- 90 degreses or by +- 180 degrees. Moreover, either all hroizontal or all vertical creases of P' are folded by +- 180 degrees.
2. Let P be a rectangular k x n-polyomino without any holes, then P does not fold into a unit cube. 
3. If P is a rectangle with exjactly one unit-square hole h, then P does not fold intoa  unit cube.
4. A rectangle with exactly two unit-square holes int eh same row does not fold into a unit square if the number of columns between the holes are even.  
5. Let P be a polyomino with two holes, whicha re both either a unit square, or an L-slit of size 2, or a U-slit of size 3, such that (1) P continas all the other cell sof the bounding abox fo the two holes and (2) the number of rows and the number of columns between teh holes is at least 1. In every folding of P into a unit square, the two holes are not folded non-trivially.
6. If P is a rectangle with exactly one slit of size 1, then P does not fold int a unit cube.

## Open Problems
- The existence of only a folded state int eh shape of a unit square is considered, but what if we requrie a continuous folding motino from the unfolded polyomino int a unit cube, These two models are to be equivalent for polyogons without holes [13, 3], but equivalence remains an open problem for polygons with holes as in this case. 