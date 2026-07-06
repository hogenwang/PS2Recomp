#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239DA8
// Address: 0x239da8 - 0x239e70
void sub_00239DA8_0x239da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239DA8_0x239da8");
#endif

    switch (ctx->pc) {
        case 0x239dc0u: goto label_239dc0;
        case 0x239decu: goto label_239dec;
        case 0x239df8u: goto label_239df8;
        case 0x239e24u: goto label_239e24;
        case 0x239e30u: goto label_239e30;
        case 0x239e5cu: goto label_239e5c;
        default: break;
    }

    ctx->pc = 0x239da8u;

    // 0x239da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239dac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239db0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239db8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x239db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x239dbc: 0x0  nop
    ctx->pc = 0x239dbcu;
    // NOP
label_239dc0:
    // 0x239dc0: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x239DC0u;
    {
        const bool branch_taken_0x239dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239dc0) {
            ctx->pc = 0x239DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239DC0u;
            // 0x239dc4: 0x8e040100  lw          $a0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239DF8u;
            goto label_239df8;
        }
    }
    ctx->pc = 0x239DC8u;
    // 0x239dc8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x239dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239dcc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239DCCu;
    {
        const bool branch_taken_0x239dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239DCCu;
            // 0x239dd0: 0xae0200dc  sw          $v0, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dcc) {
            ctx->pc = 0x239DD8u;
            goto label_239dd8;
        }
    }
    ctx->pc = 0x239DD4u;
    // 0x239dd4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x239dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_239dd8:
    // 0x239dd8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x239dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x239ddc: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x239ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x239de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239de4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x239DE4u;
    SET_GPR_U32(ctx, 31, 0x239DECu);
    ctx->pc = 0x239DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239DE4u;
            // 0x239de8: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239DECu; }
        if (ctx->pc != 0x239DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239DECu; }
        if (ctx->pc != 0x239DECu) { return; }
    }
    ctx->pc = 0x239DECu;
label_239dec:
    // 0x239dec: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x239DECu;
    {
        const bool branch_taken_0x239dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239DECu;
            // 0x239df0: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dec) {
            ctx->pc = 0x239DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239dc0;
        }
    }
    ctx->pc = 0x239DF4u;
    // 0x239df4: 0x0  nop
    ctx->pc = 0x239df4u;
    // NOP
label_239df8:
    // 0x239df8: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x239DF8u;
    {
        const bool branch_taken_0x239df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239df8) {
            ctx->pc = 0x239DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239DF8u;
            // 0x239dfc: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239E30u;
            goto label_239e30;
        }
    }
    ctx->pc = 0x239E00u;
    // 0x239e00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x239e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239e04: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239E04u;
    {
        const bool branch_taken_0x239e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E04u;
            // 0x239e08: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e04) {
            ctx->pc = 0x239E10u;
            goto label_239e10;
        }
    }
    ctx->pc = 0x239E0Cu;
    // 0x239e0c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x239e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_239e10:
    // 0x239e10: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x239e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x239e14: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x239e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x239e18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239e1c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x239E1Cu;
    SET_GPR_U32(ctx, 31, 0x239E24u);
    ctx->pc = 0x239E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239E1Cu;
            // 0x239e20: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239E24u; }
        if (ctx->pc != 0x239E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239E24u; }
        if (ctx->pc != 0x239E24u) { return; }
    }
    ctx->pc = 0x239E24u;
label_239e24:
    // 0x239e24: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x239E24u;
    {
        const bool branch_taken_0x239e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E24u;
            // 0x239e28: 0x8e040100  lw          $a0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e24) {
            ctx->pc = 0x239DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239df8;
        }
    }
    ctx->pc = 0x239E2Cu;
    // 0x239e2c: 0x0  nop
    ctx->pc = 0x239e2cu;
    // NOP
label_239e30:
    // 0x239e30: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x239E30u;
    {
        const bool branch_taken_0x239e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E30u;
            // 0x239e34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e30) {
            ctx->pc = 0x239E64u;
            goto label_239e64;
        }
    }
    ctx->pc = 0x239E38u;
    // 0x239e38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x239e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239e3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239E3Cu;
    {
        const bool branch_taken_0x239e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E3Cu;
            // 0x239e40: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e3c) {
            ctx->pc = 0x239E48u;
            goto label_239e48;
        }
    }
    ctx->pc = 0x239E44u;
    // 0x239e44: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x239e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_239e48:
    // 0x239e48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x239e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x239e4c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x239e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x239e50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239e54: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x239E54u;
    SET_GPR_U32(ctx, 31, 0x239E5Cu);
    ctx->pc = 0x239E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239E54u;
            // 0x239e58: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239E5Cu; }
        if (ctx->pc != 0x239E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239E5Cu; }
        if (ctx->pc != 0x239E5Cu) { return; }
    }
    ctx->pc = 0x239E5Cu;
label_239e5c:
    // 0x239e5c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x239E5Cu;
    {
        const bool branch_taken_0x239e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E5Cu;
            // 0x239e60: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e5c) {
            ctx->pc = 0x239E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239e30;
        }
    }
    ctx->pc = 0x239E64u;
label_239e64:
    // 0x239e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239e68: 0x3e00008  jr          $ra
    ctx->pc = 0x239E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E68u;
            // 0x239e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239E70u;
    ctx->pc = 0x239e70u;
}
