#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEAC8
// Address: 0x1beac8 - 0x1beb40
void sub_001BEAC8_0x1beac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEAC8_0x1beac8");
#endif

    switch (ctx->pc) {
        case 0x1beac8u: goto label_1beac8;
        case 0x1beaccu: goto label_1beacc;
        case 0x1bead0u: goto label_1bead0;
        case 0x1bead4u: goto label_1bead4;
        case 0x1bead8u: goto label_1bead8;
        case 0x1beadcu: goto label_1beadc;
        case 0x1beae0u: goto label_1beae0;
        case 0x1beae4u: goto label_1beae4;
        case 0x1beae8u: goto label_1beae8;
        case 0x1beaecu: goto label_1beaec;
        case 0x1beaf0u: goto label_1beaf0;
        case 0x1beaf4u: goto label_1beaf4;
        case 0x1beaf8u: goto label_1beaf8;
        case 0x1beafcu: goto label_1beafc;
        case 0x1beb00u: goto label_1beb00;
        case 0x1beb04u: goto label_1beb04;
        case 0x1beb08u: goto label_1beb08;
        case 0x1beb0cu: goto label_1beb0c;
        case 0x1beb10u: goto label_1beb10;
        case 0x1beb14u: goto label_1beb14;
        case 0x1beb18u: goto label_1beb18;
        case 0x1beb1cu: goto label_1beb1c;
        case 0x1beb20u: goto label_1beb20;
        case 0x1beb24u: goto label_1beb24;
        case 0x1beb28u: goto label_1beb28;
        case 0x1beb2cu: goto label_1beb2c;
        case 0x1beb30u: goto label_1beb30;
        case 0x1beb34u: goto label_1beb34;
        case 0x1beb38u: goto label_1beb38;
        case 0x1beb3cu: goto label_1beb3c;
        default: break;
    }

    ctx->pc = 0x1beac8u;

label_1beac8:
    // 0x1beac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1beac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1beacc:
    // 0x1beacc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1beaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bead0:
    // 0x1bead0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bead0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bead4:
    // 0x1bead4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_1bead8:
    if (ctx->pc == 0x1BEAD8u) {
        ctx->pc = 0x1BEAD8u;
            // 0x1bead8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1BEADCu;
        goto label_1beadc;
    }
    ctx->pc = 0x1BEAD4u;
    {
        const bool branch_taken_0x1bead4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAD4u;
            // 0x1bead8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bead4) {
            ctx->pc = 0x1BEAF8u;
            goto label_1beaf8;
        }
    }
    ctx->pc = 0x1BEADCu;
label_1beadc:
    // 0x1beadc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1beadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1beae0:
    // 0x1beae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1beae4:
    // 0x1beae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1beae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1beae8:
    // 0x1beae8: 0x24848bb8  addiu       $a0, $a0, -0x7448
    ctx->pc = 0x1beae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937528));
label_1beaec:
    // 0x1beaec: 0x806f838  j           func_1BE0E0
label_1beaf0:
    if (ctx->pc == 0x1BEAF0u) {
        ctx->pc = 0x1BEAF0u;
            // 0x1beaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BEAF4u;
        goto label_1beaf4;
    }
    ctx->pc = 0x1BEAECu;
    ctx->pc = 0x1BEAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAECu;
            // 0x1beaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BEAF4u;
label_1beaf4:
    // 0x1beaf4: 0x0  nop
    ctx->pc = 0x1beaf4u;
    // NOP
label_1beaf8:
    // 0x1beaf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1beaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1beafc:
    // 0x1beafc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1beafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1beb00:
    // 0x1beb00: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1beb04:
    if (ctx->pc == 0x1BEB04u) {
        ctx->pc = 0x1BEB04u;
            // 0x1beb04: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x1BEB08u;
        goto label_1beb08;
    }
    ctx->pc = 0x1BEB00u;
    {
        const bool branch_taken_0x1beb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beb00) {
            ctx->pc = 0x1BEB04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB00u;
            // 0x1beb04: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEB28u;
            goto label_1beb28;
        }
    }
    ctx->pc = 0x1BEB08u;
label_1beb08:
    // 0x1beb08: 0x40f809  jalr        $v0
label_1beb0c:
    if (ctx->pc == 0x1BEB0Cu) {
        ctx->pc = 0x1BEB0Cu;
            // 0x1beb0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BEB10u;
        goto label_1beb10;
    }
    ctx->pc = 0x1BEB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BEB10u);
        ctx->pc = 0x1BEB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB08u;
            // 0x1beb0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BEB10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB10u; }
            if (ctx->pc != 0x1BEB10u) { return; }
        }
        }
    }
    ctx->pc = 0x1BEB10u;
label_1beb10:
    // 0x1beb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1beb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1beb14:
    // 0x1beb14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1beb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1beb18:
    // 0x1beb18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beb18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1beb1c:
    // 0x1beb1c: 0x806fa42  j           func_1BE908
label_1beb20:
    if (ctx->pc == 0x1BEB20u) {
        ctx->pc = 0x1BEB20u;
            // 0x1beb20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BEB24u;
        goto label_1beb24;
    }
    ctx->pc = 0x1BEB1Cu;
    ctx->pc = 0x1BEB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB1Cu;
            // 0x1beb20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE908u;
    if (runtime->hasFunction(0x1BE908u)) {
        auto targetFn = runtime->lookupFunction(0x1BE908u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE908_0x1be908(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BEB24u;
label_1beb24:
    // 0x1beb24: 0x0  nop
    ctx->pc = 0x1beb24u;
    // NOP
label_1beb28:
    // 0x1beb28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beb28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1beb2c:
    // 0x1beb2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1beb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1beb30:
    // 0x1beb30: 0x24848bd8  addiu       $a0, $a0, -0x7428
    ctx->pc = 0x1beb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937560));
label_1beb34:
    // 0x1beb34: 0x806f838  j           func_1BE0E0
label_1beb38:
    if (ctx->pc == 0x1BEB38u) {
        ctx->pc = 0x1BEB38u;
            // 0x1beb38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BEB3Cu;
        goto label_1beb3c;
    }
    ctx->pc = 0x1BEB34u;
    ctx->pc = 0x1BEB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB34u;
            // 0x1beb38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BEB3Cu;
label_1beb3c:
    // 0x1beb3c: 0x0  nop
    ctx->pc = 0x1beb3cu;
    // NOP
    ctx->pc = 0x1beb40u;
}
