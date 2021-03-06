// Ex,graph 16: const definition; a simple graph traversal
//  (was named graph-10-nl)

typedef struct edge {
  struct edge * next ;
  struct node * dest ;
} edge ;
typedef struct  node {
  struct node * next ;
  struct edge * edges;
  int data;
} node ;
typedef node * lnode;
typedef edge * ledge;

void main( ){
  lnode l;
  lnode k;
  _memcad( "decl_setvars( E, F )" );
  _memcad ("set_assume ( F $sub E)");
  _memcad( "add_inductive( l, graphc, [ | | F, E] )" );
  k = l;
  int data;
  while( k!= 0 ){
    ledge g = k->edges;
    if( g == 0 ){
      k = null;
    } else {
      int i;
      while( i > 0 ){
        if( g->next == 0){
          i = 0;
        } else {
          i = i - 1;
          g = g->next;
        }
      }
      k = g->dest;
    }
    if( k != 0 ){
      data = k->data;
    }
  }
  _memcad( "check_inductive( l, graphc, [ | | F, E] )" );
}
