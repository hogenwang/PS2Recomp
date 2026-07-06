#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EDEB0
// Address: 0x1edeb0 - 0x1edf18
void sub_001EDEB0_0x1edeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDEB0_0x1edeb0");
#endif

    switch (ctx->pc) {
        case 0x1eded4u: goto label_1eded4;
        case 0x1edf00u: goto label_1edf00;
        default: break;
    }

    ctx->pc = 0x1edeb0u;

    // 0x1edeb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1edeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1edeb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1edeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1edeb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1edeb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edebc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1edebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1edec0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1edec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1edec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1edec8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1edec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edecc: 0xc07aa60  jal         func_1EA980
    ctx->pc = 0x1EDECCu;
    SET_GPR_U32(ctx, 31, 0x1EDED4u);
    ctx->pc = 0x1EDED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDECCu;
            // 0x1eded0: 0x8e051fdc  lw          $a1, 0x1FDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA980u;
    if (runtime->hasFunction(0x1EA980u)) {
        auto targetFn = runtime->lookupFunction(0x1EA980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDED4u; }
        if (ctx->pc != 0x1EDED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA980_0x1ea980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDED4u; }
        if (ctx->pc != 0x1EDED4u) { return; }
    }
    ctx->pc = 0x1EDED4u;
label_1eded4:
    // 0x1eded4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDED4u;
    {
        const bool branch_taken_0x1eded4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eded4) {
            ctx->pc = 0x1EDED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDED4u;
            // 0x1eded8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDEECu;
            goto label_1edeec;
        }
    }
    ctx->pc = 0x1EDEDCu;
    // 0x1ededc: 0x8e033800  lw          $v1, 0x3800($s0)
    ctx->pc = 0x1ededcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14336)));
    // 0x1edee0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1edee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1edee4: 0xae033800  sw          $v1, 0x3800($s0)
    ctx->pc = 0x1edee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14336), GPR_U32(ctx, 3));
    // 0x1edee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1edee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1edeec:
    // 0x1edeec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1edeecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1edef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1edef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEF4u;
            // 0x1edef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDEFCu;
    // 0x1edefc: 0x0  nop
    ctx->pc = 0x1edefcu;
    // NOP
label_1edf00:
    // 0x1edf00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDF00u;
    {
        const bool branch_taken_0x1edf00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf00) {
            ctx->pc = 0x1EDF10u;
            goto label_1edf10;
        }
    }
    ctx->pc = 0x1EDF08u;
    // 0x1edf08: 0xac8637fc  sw          $a2, 0x37FC($a0)
    ctx->pc = 0x1edf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14332), GPR_U32(ctx, 6));
    // 0x1edf0c: 0xac8537f8  sw          $a1, 0x37F8($a0)
    ctx->pc = 0x1edf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14328), GPR_U32(ctx, 5));
label_1edf10:
    // 0x1edf10: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDF18u;
    ctx->pc = 0x1edf18u;
}
