#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118058
// Address: 0x118058 - 0x1180d8
void sub_00118058_0x118058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118058_0x118058");
#endif

    switch (ctx->pc) {
        case 0x11806cu: goto label_11806c;
        case 0x1180c0u: goto label_1180c0;
        default: break;
    }

    ctx->pc = 0x118058u;

    // 0x118058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11805c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118064: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118064u;
    SET_GPR_U32(ctx, 31, 0x11806Cu);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11806Cu; }
        if (ctx->pc != 0x11806Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11806Cu; }
        if (ctx->pc != 0x11806Cu) { return; }
    }
    ctx->pc = 0x11806Cu;
label_11806c:
    // 0x11806c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11806cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x118070: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x118070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x118074: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x118074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x118078: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x118078u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11807c: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x11807cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 16))); // MMIO: 0x10000010
    // 0x118080: 0xdc8a9d48  ld          $t2, -0x62B8($a0)
    ctx->pc = 0x118080u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 4294942024)));
    // 0x118084: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x118084u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x118088: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118088u;
    {
        const bool branch_taken_0x118088 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x11808Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118088u;
            // 0x11808c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118088) {
            ctx->pc = 0x118098u;
            goto label_118098;
        }
    }
    ctx->pc = 0x118090u;
    // 0x118090: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x118090u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118094: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x118094u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_118098:
    // 0x118098: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x118098u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x11809c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x11809cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1180a0: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1180a0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1180a4: 0x20a8025  or          $s0, $s0, $t2
    ctx->pc = 0x1180a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 10));
    // 0x1180a8: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1180a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1180ac: 0x1308014  dsllv       $s0, $s0, $t1
    ctx->pc = 0x1180acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1180b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1180B0u;
    {
        const bool branch_taken_0x1180b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1180B0u;
            // 0x1180b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180b0) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x1180B8u;
    // 0x1180b8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1180B8u;
    SET_GPR_U32(ctx, 31, 0x1180C0u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180C0u; }
        if (ctx->pc != 0x1180C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180C0u; }
        if (ctx->pc != 0x1180C0u) { return; }
    }
    ctx->pc = 0x1180C0u;
label_1180c0:
    // 0x1180c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1180c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1180c4:
    // 0x1180c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1180c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1180c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1180c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1180cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1180CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1180D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1180CCu;
            // 0x1180d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1180D4u;
    // 0x1180d4: 0x0  nop
    ctx->pc = 0x1180d4u;
    // NOP
    ctx->pc = 0x1180d8u;
}
