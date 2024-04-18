reg_t id = STATE.dmaid++;
// Others not yet implemented.
require(insn.p_imm5() == 0);
unsigned byte_count = RS1;
for (unsigned i = 0; i < byte_count; i++) {
    uint8_t value = MMU.load<uint8_t>(STATE.dmasrc + i);
    MMU.store(STATE.dmadst + i, value);
}
WRITE_RD(id);
