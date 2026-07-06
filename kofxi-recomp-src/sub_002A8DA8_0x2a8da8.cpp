#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A8DA8
// Address: 0x2a8da8 - 0x2a8e38
void sub_002A8DA8_0x2a8da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8DA8_0x2a8da8");
#endif

    switch (ctx->pc) {
        case 0x2a8ddcu: goto label_2a8ddc;
        default: break;
    }

    ctx->pc = 0x2a8da8u;

    // 0x2a8da8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a8dac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8db0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a8db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a8db4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2a8db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8db8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a8db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a8dbc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a8dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a8dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a8dc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a8dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dc8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a8dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dd0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2a8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a8dd4: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A8DD4u;
    SET_GPR_U32(ctx, 31, 0x2A8DDCu);
    ctx->pc = 0x2A8DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DD4u;
            // 0x2a8dd8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8DDCu; }
        if (ctx->pc != 0x2A8DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8DDCu; }
        if (ctx->pc != 0x2A8DDCu) { return; }
    }
    ctx->pc = 0x2A8DDCu;
label_2a8ddc:
    // 0x2a8ddc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8de0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A8DE0u;
    {
        const bool branch_taken_0x2a8de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8de0) {
            ctx->pc = 0x2A8E0Cu;
            goto label_2a8e0c;
        }
    }
    ctx->pc = 0x2A8DE8u;
    // 0x2a8de8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8DE8u;
    {
        const bool branch_taken_0x2a8de8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8de8) {
            ctx->pc = 0x2A8DF8u;
            goto label_2a8df8;
        }
    }
    ctx->pc = 0x2A8DF0u;
    // 0x2a8df0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a8df4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a8df8:
    // 0x2a8df8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8DF8u;
    {
        const bool branch_taken_0x2a8df8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DF8u;
            // 0x2a8dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8df8) {
            ctx->pc = 0x2A8E20u;
            goto label_2a8e20;
        }
    }
    ctx->pc = 0x2A8E00u;
    // 0x2a8e00: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8e04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8E04u;
    {
        const bool branch_taken_0x2a8e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E04u;
            // 0x2a8e08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e04) {
            ctx->pc = 0x2A8E1Cu;
            goto label_2a8e1c;
        }
    }
    ctx->pc = 0x2A8E0Cu;
label_2a8e0c:
    // 0x2a8e0c: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8E0Cu;
    {
        const bool branch_taken_0x2a8e0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e0c) {
            ctx->pc = 0x2A8E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E0Cu;
            // 0x2a8e10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8E14u;
            goto label_2a8e14;
        }
    }
    ctx->pc = 0x2A8E14u;
label_2a8e14:
    // 0x2a8e14: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8E14u;
    {
        const bool branch_taken_0x2a8e14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e14) {
            ctx->pc = 0x2A8E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E14u;
            // 0x2a8e18: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8E1Cu;
            goto label_2a8e1c;
        }
    }
    ctx->pc = 0x2A8E1Cu;
label_2a8e1c:
    // 0x2a8e1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8e20:
    // 0x2a8e20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a8e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8e24: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a8e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8e28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a8e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E2Cu;
            // 0x2a8e30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8E34u;
    // 0x2a8e34: 0x0  nop
    ctx->pc = 0x2a8e34u;
    // NOP
    ctx->pc = 0x2a8e38u;
}
