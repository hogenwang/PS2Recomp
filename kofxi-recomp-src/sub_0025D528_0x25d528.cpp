#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025D528
// Address: 0x25d528 - 0x25d5d8
void sub_0025D528_0x25d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D528_0x25d528");
#endif

    switch (ctx->pc) {
        case 0x25d558u: goto label_25d558;
        case 0x25d59cu: goto label_25d59c;
        case 0x25d5a8u: goto label_25d5a8;
        default: break;
    }

    ctx->pc = 0x25d528u;

    // 0x25d528: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25d528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25d52c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x25d52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x25d530: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x25d530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x25d534: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25d534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d538: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x25d53c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25d53cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d540: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x25d540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x25d544: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25d544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d548: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x25d548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x25d54c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25d54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25d550: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25D550u;
    SET_GPR_U32(ctx, 31, 0x25D558u);
    ctx->pc = 0x25D554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D550u;
            // 0x25d554: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (runtime->hasFunction(0x25CA38u)) {
        auto targetFn = runtime->lookupFunction(0x25CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D558u; }
        if (ctx->pc != 0x25D558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CA38_0x25ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D558u; }
        if (ctx->pc != 0x25D558u) { return; }
    }
    ctx->pc = 0x25D558u;
label_25d558:
    // 0x25d558: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d55c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25D55Cu;
    {
        const bool branch_taken_0x25d55c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D55Cu;
            // 0x25d560: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d55c) {
            ctx->pc = 0x25D5B0u;
            goto label_25d5b0;
        }
    }
    ctx->pc = 0x25D564u;
    // 0x25d564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d568: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x25d568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x25d56c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d570: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x25d570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x25d574: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25d574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d578: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x25d578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x25d57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d580: 0xafb40024  sw          $s4, 0x24($sp)
    ctx->pc = 0x25d580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
    // 0x25d584: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25d584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d588: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25d588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x25d58c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x25d58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d590: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x25d590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x25d594: 0xc0975ea  jal         func_25D7A8
    ctx->pc = 0x25D594u;
    SET_GPR_U32(ctx, 31, 0x25D59Cu);
    ctx->pc = 0x25D598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D594u;
            // 0x25d598: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D7A8u;
    if (runtime->hasFunction(0x25D7A8u)) {
        auto targetFn = runtime->lookupFunction(0x25D7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D59Cu; }
        if (ctx->pc != 0x25D59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D7A8_0x25d7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D59Cu; }
        if (ctx->pc != 0x25D59Cu) { return; }
    }
    ctx->pc = 0x25D59Cu;
label_25d59c:
    // 0x25d59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5a0: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25D5A0u;
    SET_GPR_U32(ctx, 31, 0x25D5A8u);
    ctx->pc = 0x25D5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D5A0u;
            // 0x25d5a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (runtime->hasFunction(0x25CB68u)) {
        auto targetFn = runtime->lookupFunction(0x25CB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D5A8u; }
        if (ctx->pc != 0x25D5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB68_0x25cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D5A8u; }
        if (ctx->pc != 0x25D5A8u) { return; }
    }
    ctx->pc = 0x25D5A8u;
label_25d5a8:
    // 0x25d5a8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D5A8u;
    {
        const bool branch_taken_0x25d5a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D5A8u;
            // 0x25d5ac: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5a8) {
            ctx->pc = 0x25D5B4u;
            goto label_25d5b4;
        }
    }
    ctx->pc = 0x25D5B0u;
label_25d5b0:
    // 0x25d5b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25d5b4:
    // 0x25d5b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25d5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25d5b8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x25d5b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25d5bc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x25d5bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d5c0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25d5c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d5c4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x25d5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d5c8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25d5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D5CCu;
            // 0x25d5d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D5D4u;
    // 0x25d5d4: 0x0  nop
    ctx->pc = 0x25d5d4u;
    // NOP
    ctx->pc = 0x25d5d8u;
}
