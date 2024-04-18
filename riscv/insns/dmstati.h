// Our implementation is actually synchronous and therefore never busy.
// The last completed id is always the id of the last dmcpy[i].
switch (insn.p_imm5())
{
    case 0: WRITE_RD(STATE.dmaid - 1); break;
    case 1: WRITE_RD(STATE.dmaid); break;
    case 2: WRITE_RD(0); break;
    case 3: WRITE_RD(0); break;
    default: throw trap_illegal_instruction(insn.bits());
}
