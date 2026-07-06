#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012BDD0
// Address: 0x12bdd0 - 0x12be18
void sub_0012BDD0_0x12bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BDD0_0x12bdd0");
#endif

    switch (ctx->pc) {
        case 0x12bdf0u: goto label_12bdf0;
        case 0x12be00u: goto label_12be00;
        case 0x12be08u: goto label_12be08;
        default: break;
    }

    ctx->pc = 0x12bdd0u;

    // 0x12bdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bdd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bdd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12bddc: 0x8caf0008  lw          $t7, 0x8($a1)
    ctx->pc = 0x12bddcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12bde0: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BDE0u;
    {
        const bool branch_taken_0x12bde0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDE0u;
            // 0x12bde4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bde0) {
            ctx->pc = 0x12BE00u;
            goto label_12be00;
        }
    }
    ctx->pc = 0x12BDE8u;
    // 0x12bde8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12bdec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12bdecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12bdf0:
    // 0x12bdf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bdf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bdf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12bdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDF8u;
            // 0x12bdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12BE00u;
label_12be00:
    // 0x12be00: 0xc0496c0  jal         func_125B00
    ctx->pc = 0x12BE00u;
    SET_GPR_U32(ctx, 31, 0x12BE08u);
    ctx->pc = 0x125B00u;
    if (runtime->hasFunction(0x125B00u)) {
        auto targetFn = runtime->lookupFunction(0x125B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE08u; }
        if (ctx->pc != 0x12BE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B00_0x125b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE08u; }
        if (ctx->pc != 0x12BE08u) { return; }
    }
    ctx->pc = 0x12BE08u;
label_12be08:
    // 0x12be08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12be08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12be0c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12BE0Cu;
    {
        const bool branch_taken_0x12be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE0Cu;
            // 0x12be10: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be0c) {
            ctx->pc = 0x12BDF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bdf0;
        }
    }
    ctx->pc = 0x12BE14u;
    // 0x12be14: 0x0  nop
    ctx->pc = 0x12be14u;
    // NOP
    ctx->pc = 0x12be18u;
}
