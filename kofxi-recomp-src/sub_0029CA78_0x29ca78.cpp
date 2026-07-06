#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CA78
// Address: 0x29ca78 - 0x29cb20
void sub_0029CA78_0x29ca78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CA78_0x29ca78");
#endif

    switch (ctx->pc) {
        case 0x29cabcu: goto label_29cabc;
        case 0x29cad8u: goto label_29cad8;
        case 0x29caf4u: goto label_29caf4;
        default: break;
    }

    ctx->pc = 0x29ca78u;

    // 0x29ca78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ca78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29ca7c: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x29ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x29ca80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29ca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29ca84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ca88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29ca8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ca8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ca94: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x29CA94u;
    {
        const bool branch_taken_0x29ca94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29CA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA94u;
            // 0x29ca98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca94) {
            ctx->pc = 0x29CB04u;
            goto label_29cb04;
        }
    }
    ctx->pc = 0x29CA9Cu;
    // 0x29ca9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29caa0: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x29CAA0u;
    {
        const bool branch_taken_0x29caa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29CAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAA0u;
            // 0x29caa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29caa0) {
            ctx->pc = 0x29CB08u;
            goto label_29cb08;
        }
    }
    ctx->pc = 0x29CAA8u;
    // 0x29caa8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29caac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x29caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29cab0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x29cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29cab4: 0xc0a1c20  jal         func_287080
    ctx->pc = 0x29CAB4u;
    SET_GPR_U32(ctx, 31, 0x29CABCu);
    ctx->pc = 0x29CAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAB4u;
            // 0x29cab8: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (runtime->hasFunction(0x287080u)) {
        auto targetFn = runtime->lookupFunction(0x287080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CABCu; }
        if (ctx->pc != 0x29CABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287080_0x287080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CABCu; }
        if (ctx->pc != 0x29CABCu) { return; }
    }
    ctx->pc = 0x29CABCu;
label_29cabc:
    // 0x29cabc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29CABCu;
    {
        const bool branch_taken_0x29cabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CABCu;
            // 0x29cac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cabc) {
            ctx->pc = 0x29CB08u;
            goto label_29cb08;
        }
    }
    ctx->pc = 0x29CAC4u;
    // 0x29cac4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29cac8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x29cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29cacc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x29caccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29cad0: 0xc0a1c20  jal         func_287080
    ctx->pc = 0x29CAD0u;
    SET_GPR_U32(ctx, 31, 0x29CAD8u);
    ctx->pc = 0x29CAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAD0u;
            // 0x29cad4: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (runtime->hasFunction(0x287080u)) {
        auto targetFn = runtime->lookupFunction(0x287080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAD8u; }
        if (ctx->pc != 0x29CAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287080_0x287080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAD8u; }
        if (ctx->pc != 0x29CAD8u) { return; }
    }
    ctx->pc = 0x29CAD8u;
label_29cad8:
    // 0x29cad8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29CAD8u;
    {
        const bool branch_taken_0x29cad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAD8u;
            // 0x29cadc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cad8) {
            ctx->pc = 0x29CB08u;
            goto label_29cb08;
        }
    }
    ctx->pc = 0x29CAE0u;
    // 0x29cae0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29cae4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x29cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29cae8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x29cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29caec: 0xc0a1c20  jal         func_287080
    ctx->pc = 0x29CAECu;
    SET_GPR_U32(ctx, 31, 0x29CAF4u);
    ctx->pc = 0x29CAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAECu;
            // 0x29caf0: 0x8c650014  lw          $a1, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (runtime->hasFunction(0x287080u)) {
        auto targetFn = runtime->lookupFunction(0x287080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAF4u; }
        if (ctx->pc != 0x29CAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287080_0x287080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAF4u; }
        if (ctx->pc != 0x29CAF4u) { return; }
    }
    ctx->pc = 0x29CAF4u;
label_29caf4:
    // 0x29caf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CAF4u;
    {
        const bool branch_taken_0x29caf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAF4u;
            // 0x29caf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29caf4) {
            ctx->pc = 0x29CB08u;
            goto label_29cb08;
        }
    }
    ctx->pc = 0x29CAFCu;
    // 0x29cafc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29CAFCu;
    {
        const bool branch_taken_0x29cafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAFCu;
            // 0x29cb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cafc) {
            ctx->pc = 0x29CB08u;
            goto label_29cb08;
        }
    }
    ctx->pc = 0x29CB04u;
label_29cb04:
    // 0x29cb04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cb08:
    // 0x29cb08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29cb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cb0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29cb0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cb14: 0x3e00008  jr          $ra
    ctx->pc = 0x29CB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB14u;
            // 0x29cb18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CB1Cu;
    // 0x29cb1c: 0x0  nop
    ctx->pc = 0x29cb1cu;
    // NOP
    ctx->pc = 0x29cb20u;
}
