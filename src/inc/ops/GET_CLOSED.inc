#ifdef ten_DEBUG
    VirFun* fun = &regs.cls->fun->u.vir;
    tenAssert( opr < fun->nLocals + regs.cls->fun->nParams + 1 );
    tenAssert( tvIsObj( regs.lcl[opr] ) );
    tenAssert( datGetTag( tvGetObj( regs.lcl[opr] ) ) == OBJ_UPV );
#endif

*(regs.sp++) = ((Upvalue*)tvGetObj( regs.lcl[opr] ))->val;
