#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00307C60
// Address: 0x307c60 - 0x307f20
void sub_00307C60_0x307c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307C60_0x307c60");
#endif

    switch (ctx->pc) {
        case 0x307ca4u: goto label_307ca4;
        case 0x307d70u: goto label_307d70;
        case 0x307ddcu: goto label_307ddc;
        case 0x307e58u: goto label_307e58;
        default: break;
    }

    ctx->pc = 0x307c60u;

    // 0x307c60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x307c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307c64: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x307c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x307c68: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x307c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x307c6c: 0x24c67890  addiu       $a2, $a2, 0x7890
    ctx->pc = 0x307c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30864));
    // 0x307c70: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x307c70u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307c74: 0x11070003  beq         $t0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x307C74u;
    {
        const bool branch_taken_0x307c74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x307C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307C74u;
            // 0x307c78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c74) {
            ctx->pc = 0x307C84u;
            goto label_307c84;
        }
    }
    ctx->pc = 0x307C7Cu;
    // 0x307c7c: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x307c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x307c80: 0xace647a0  sw          $a2, 0x47A0($a3)
    ctx->pc = 0x307c80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18336), GPR_U32(ctx, 6));
label_307c84:
    // 0x307c84: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x307c84u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307c88: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x307c88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x307c8c: 0x10ec002e  beq         $a3, $t4, . + 4 + (0x2E << 2)
    ctx->pc = 0x307C8Cu;
    {
        const bool branch_taken_0x307c8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        if (branch_taken_0x307c8c) {
            ctx->pc = 0x307D48u;
            goto label_307d48;
        }
    }
    ctx->pc = 0x307C94u;
    // 0x307c94: 0x3c0a01d3  lui         $t2, 0x1D3
    ctx->pc = 0x307c94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)467 << 16));
    // 0x307c98: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x307c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307c9c: 0x254a7890  addiu       $t2, $t2, 0x7890
    ctx->pc = 0x307c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30864));
    // 0x307ca0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x307ca0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307ca4:
    // 0x307ca4: 0x14eb000a  bne         $a3, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x307CA4u;
    {
        const bool branch_taken_0x307ca4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x307ca4) {
            ctx->pc = 0x307CD0u;
            goto label_307cd0;
        }
    }
    ctx->pc = 0x307CACu;
    // 0x307cac: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x307cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x307cb0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x307cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x307cb4: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x307cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x307cb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x307cbc: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x307cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x307cc0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x307cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x307cc4: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x307cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x307cc8: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x307cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x307ccc: 0x0  nop
    ctx->pc = 0x307cccu;
    // NOP
label_307cd0:
    // 0x307cd0: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x307cd0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307cd4: 0x14e9000c  bne         $a3, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x307CD4u;
    {
        const bool branch_taken_0x307cd4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        if (branch_taken_0x307cd4) {
            ctx->pc = 0x307D08u;
            goto label_307d08;
        }
    }
    ctx->pc = 0x307CDCu;
    // 0x307cdc: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x307cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x307ce0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x307ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x307ce4: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x307ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x307ce8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x307cec: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x307cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x307cf0: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x307cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x307cf4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x307cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x307cf8: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x307cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x307cfc: 0xad07000c  sw          $a3, 0xC($t0)
    ctx->pc = 0x307cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 7));
    // 0x307d00: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x307d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x307d04: 0x0  nop
    ctx->pc = 0x307d04u;
    // NOP
label_307d08:
    // 0x307d08: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x307d08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307d0c: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x307D0Cu;
    {
        const bool branch_taken_0x307d0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d0c) {
            ctx->pc = 0x307D38u;
            goto label_307d38;
        }
    }
    ctx->pc = 0x307D14u;
    // 0x307d14: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x307d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x307d18: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x307D18u;
    {
        const bool branch_taken_0x307d18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d18) {
            ctx->pc = 0x307D28u;
            goto label_307d28;
        }
    }
    ctx->pc = 0x307D20u;
    // 0x307d20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x307D20u;
    {
        const bool branch_taken_0x307d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307D20u;
            // 0x307d24: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d20) {
            ctx->pc = 0x307D38u;
            goto label_307d38;
        }
    }
    ctx->pc = 0x307D28u;
label_307d28:
    // 0x307d28: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x307d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x307d2c: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x307D2Cu;
    {
        const bool branch_taken_0x307d2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d2c) {
            ctx->pc = 0x307D38u;
            goto label_307d38;
        }
    }
    ctx->pc = 0x307D34u;
    // 0x307d34: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x307d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_307d38:
    // 0x307d38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x307d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x307d3c: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x307d3cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307d40: 0x14ecffd8  bne         $a3, $t4, . + 4 + (-0x28 << 2)
    ctx->pc = 0x307D40u;
    {
        const bool branch_taken_0x307d40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        if (branch_taken_0x307d40) {
            ctx->pc = 0x307CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307ca4;
        }
    }
    ctx->pc = 0x307D48u;
label_307d48:
    // 0x307d48: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x307d48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x307d4c: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x307d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x307d50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x307d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x307d54: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x307d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x307d58: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x307d58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x307d5c: 0x24c678a0  addiu       $a2, $a2, 0x78A0
    ctx->pc = 0x307d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30880));
    // 0x307d60: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x307d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x307d64: 0x30a6000f  andi        $a2, $a1, 0xF
    ctx->pc = 0x307d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x307d68: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x307D68u;
    {
        const bool branch_taken_0x307d68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307D68u;
            // 0x307d6c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d68) {
            ctx->pc = 0x307D90u;
            goto label_307d90;
        }
    }
    ctx->pc = 0x307D70u;
label_307d70:
    // 0x307d70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x307d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x307d74: 0x30a6000f  andi        $a2, $a1, 0xF
    ctx->pc = 0x307d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x307d78: 0x0  nop
    ctx->pc = 0x307d78u;
    // NOP
    // 0x307d7c: 0x0  nop
    ctx->pc = 0x307d7cu;
    // NOP
    // 0x307d80: 0x0  nop
    ctx->pc = 0x307d80u;
    // NOP
    // 0x307d84: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x307D84u;
    {
        const bool branch_taken_0x307d84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d84) {
            ctx->pc = 0x307D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307d70;
        }
    }
    ctx->pc = 0x307D8Cu;
    // 0x307d8c: 0x0  nop
    ctx->pc = 0x307d8cu;
    // NOP
label_307d90:
    // 0x307d90: 0x2c6601d6  sltiu       $a2, $v1, 0x1D6
    ctx->pc = 0x307d90u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)470) ? 1 : 0);
    // 0x307d94: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x307D94u;
    {
        const bool branch_taken_0x307d94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d94) {
            ctx->pc = 0x307DA8u;
            goto label_307da8;
        }
    }
    ctx->pc = 0x307D9Cu;
    // 0x307d9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x307d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307da0: 0xb8060001  swr         $a2, 0x1($zero)
    ctx->pc = 0x307da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x307da4: 0xa8060004  swl         $a2, 0x4($zero)
    ctx->pc = 0x307da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_307da8:
    // 0x307da8: 0x3c0701d2  lui         $a3, 0x1D2
    ctx->pc = 0x307da8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)466 << 16));
    // 0x307dac: 0x3c0601d2  lui         $a2, 0x1D2
    ctx->pc = 0x307dacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)466 << 16));
    // 0x307db0: 0xace31e00  sw          $v1, 0x1E00($a3)
    ctx->pc = 0x307db0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7680), GPR_U32(ctx, 3));
    // 0x307db4: 0xacc01e20  sw          $zero, 0x1E20($a2)
    ctx->pc = 0x307db4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7712), GPR_U32(ctx, 0));
    // 0x307db8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x307db8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307dbc: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x307DBCu;
    {
        const bool branch_taken_0x307dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307dbc) {
            ctx->pc = 0x307F08u;
            goto label_307f08;
        }
    }
    ctx->pc = 0x307DC4u;
    // 0x307dc4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307dc8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x307dc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307dcc: 0x24637890  addiu       $v1, $v1, 0x7890
    ctx->pc = 0x307dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30864));
    // 0x307dd0: 0x3c0701d2  lui         $a3, 0x1D2
    ctx->pc = 0x307dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)466 << 16));
    // 0x307dd4: 0x3c0601d2  lui         $a2, 0x1D2
    ctx->pc = 0x307dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)466 << 16));
    // 0x307dd8: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x307dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_307ddc:
    // 0x307ddc: 0x8ca80114  lw          $t0, 0x114($a1)
    ctx->pc = 0x307ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x307de0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307DE0u;
    {
        const bool branch_taken_0x307de0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307DE0u;
            // 0x307de4: 0x246300c0  addiu       $v1, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307de0) {
            ctx->pc = 0x307DF0u;
            goto label_307df0;
        }
    }
    ctx->pc = 0x307DE8u;
    // 0x307de8: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x307de8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307dec: 0xaca80114  sw          $t0, 0x114($a1)
    ctx->pc = 0x307decu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 8));
label_307df0:
    // 0x307df0: 0x8ca80118  lw          $t0, 0x118($a1)
    ctx->pc = 0x307df0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x307df4: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307DF4u;
    {
        const bool branch_taken_0x307df4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x307df4) {
            ctx->pc = 0x307E08u;
            goto label_307e08;
        }
    }
    ctx->pc = 0x307DFCu;
    // 0x307dfc: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x307dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307e00: 0xaca80118  sw          $t0, 0x118($a1)
    ctx->pc = 0x307e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 8));
    // 0x307e04: 0x0  nop
    ctx->pc = 0x307e04u;
    // NOP
label_307e08:
    // 0x307e08: 0x8ca80120  lw          $t0, 0x120($a1)
    ctx->pc = 0x307e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x307e0c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307E0Cu;
    {
        const bool branch_taken_0x307e0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e0c) {
            ctx->pc = 0x307E20u;
            goto label_307e20;
        }
    }
    ctx->pc = 0x307E14u;
    // 0x307e14: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x307e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307e18: 0xaca80120  sw          $t0, 0x120($a1)
    ctx->pc = 0x307e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 8));
    // 0x307e1c: 0x0  nop
    ctx->pc = 0x307e1cu;
    // NOP
label_307e20:
    // 0x307e20: 0x8ca80124  lw          $t0, 0x124($a1)
    ctx->pc = 0x307e20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x307e24: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307E24u;
    {
        const bool branch_taken_0x307e24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e24) {
            ctx->pc = 0x307E38u;
            goto label_307e38;
        }
    }
    ctx->pc = 0x307E2Cu;
    // 0x307e2c: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x307e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307e30: 0xaca80124  sw          $t0, 0x124($a1)
    ctx->pc = 0x307e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 8));
    // 0x307e34: 0x0  nop
    ctx->pc = 0x307e34u;
    // NOP
label_307e38:
    // 0x307e38: 0x8ca80128  lw          $t0, 0x128($a1)
    ctx->pc = 0x307e38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
    // 0x307e3c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307E3Cu;
    {
        const bool branch_taken_0x307e3c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e3c) {
            ctx->pc = 0x307E50u;
            goto label_307e50;
        }
    }
    ctx->pc = 0x307E44u;
    // 0x307e44: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x307e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307e48: 0xaca80128  sw          $t0, 0x128($a1)
    ctx->pc = 0x307e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 8));
    // 0x307e4c: 0x0  nop
    ctx->pc = 0x307e4cu;
    // NOP
label_307e50:
    // 0x307e50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x307e50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e54: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x307e54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_307e58:
    // 0x307e58: 0x8d280140  lw          $t0, 0x140($t1)
    ctx->pc = 0x307e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 320)));
    // 0x307e5c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307E5Cu;
    {
        const bool branch_taken_0x307e5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e5c) {
            ctx->pc = 0x307E70u;
            goto label_307e70;
        }
    }
    ctx->pc = 0x307E64u;
    // 0x307e64: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x307e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307e68: 0xad280140  sw          $t0, 0x140($t1)
    ctx->pc = 0x307e68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 320), GPR_U32(ctx, 8));
    // 0x307e6c: 0x0  nop
    ctx->pc = 0x307e6cu;
    // NOP
label_307e70:
    // 0x307e70: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x307e70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x307e74: 0x2d680003  sltiu       $t0, $t3, 0x3
    ctx->pc = 0x307e74u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x307e78: 0x1500fff7  bnez        $t0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x307E78u;
    {
        const bool branch_taken_0x307e78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x307E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307E78u;
            // 0x307e7c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e78) {
            ctx->pc = 0x307E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307e58;
        }
    }
    ctx->pc = 0x307E80u;
    // 0x307e80: 0x8ca80150  lw          $t0, 0x150($a1)
    ctx->pc = 0x307e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x307e84: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307E84u;
    {
        const bool branch_taken_0x307e84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e84) {
            ctx->pc = 0x307E98u;
            goto label_307e98;
        }
    }
    ctx->pc = 0x307E8Cu;
    // 0x307e8c: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x307e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307e90: 0xaca80150  sw          $t0, 0x150($a1)
    ctx->pc = 0x307e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 336), GPR_U32(ctx, 8));
    // 0x307e94: 0x0  nop
    ctx->pc = 0x307e94u;
    // NOP
label_307e98:
    // 0x307e98: 0x8ca80158  lw          $t0, 0x158($a1)
    ctx->pc = 0x307e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x307e9c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307E9Cu;
    {
        const bool branch_taken_0x307e9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e9c) {
            ctx->pc = 0x307EB0u;
            goto label_307eb0;
        }
    }
    ctx->pc = 0x307EA4u;
    // 0x307ea4: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x307ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307ea8: 0xaca80158  sw          $t0, 0x158($a1)
    ctx->pc = 0x307ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 8));
    // 0x307eac: 0x0  nop
    ctx->pc = 0x307eacu;
    // NOP
label_307eb0:
    // 0x307eb0: 0x8ca80180  lw          $t0, 0x180($a1)
    ctx->pc = 0x307eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x307eb4: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307EB4u;
    {
        const bool branch_taken_0x307eb4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x307eb4) {
            ctx->pc = 0x307EC8u;
            goto label_307ec8;
        }
    }
    ctx->pc = 0x307EBCu;
    // 0x307ebc: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x307ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307ec0: 0xaca80180  sw          $t0, 0x180($a1)
    ctx->pc = 0x307ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 384), GPR_U32(ctx, 8));
    // 0x307ec4: 0x0  nop
    ctx->pc = 0x307ec4u;
    // NOP
label_307ec8:
    // 0x307ec8: 0x8ca80110  lw          $t0, 0x110($a1)
    ctx->pc = 0x307ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x307ecc: 0x2d011001  sltiu       $at, $t0, 0x1001
    ctx->pc = 0x307eccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
    // 0x307ed0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x307ED0u;
    {
        const bool branch_taken_0x307ed0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x307ed0) {
            ctx->pc = 0x307EE0u;
            goto label_307ee0;
        }
    }
    ctx->pc = 0x307ED8u;
    // 0x307ed8: 0xb80a0001  swr         $t2, 0x1($zero)
    ctx->pc = 0x307ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x307edc: 0xa80a0004  swl         $t2, 0x4($zero)
    ctx->pc = 0x307edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_307ee0:
    // 0x307ee0: 0x8ce91e20  lw          $t1, 0x1E20($a3)
    ctx->pc = 0x307ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7712)));
    // 0x307ee4: 0x8ca8011c  lw          $t0, 0x11C($a1)
    ctx->pc = 0x307ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
    // 0x307ee8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x307ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x307eec: 0xacc81e20  sw          $t0, 0x1E20($a2)
    ctx->pc = 0x307eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7712), GPR_U32(ctx, 8));
    // 0x307ef0: 0x8ca80184  lw          $t0, 0x184($a1)
    ctx->pc = 0x307ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 388)));
    // 0x307ef4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x307ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x307ef8: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x307ef8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307efc: 0x5500ffb7  bnel        $t0, $zero, . + 4 + (-0x49 << 2)
    ctx->pc = 0x307EFCu;
    {
        const bool branch_taken_0x307efc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x307efc) {
            ctx->pc = 0x307F00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307EFCu;
            // 0x307f00: 0xac650010  sw          $a1, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307ddc;
        }
    }
    ctx->pc = 0x307F04u;
    // 0x307f04: 0x0  nop
    ctx->pc = 0x307f04u;
    // NOP
label_307f08:
    // 0x307f08: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x307f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x307f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x307F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307F0Cu;
            // 0x307f10: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307F14u;
    // 0x307f14: 0x0  nop
    ctx->pc = 0x307f14u;
    // NOP
    // 0x307f18: 0x0  nop
    ctx->pc = 0x307f18u;
    // NOP
    // 0x307f1c: 0x0  nop
    ctx->pc = 0x307f1cu;
    // NOP
    ctx->pc = 0x307f20u;
}
