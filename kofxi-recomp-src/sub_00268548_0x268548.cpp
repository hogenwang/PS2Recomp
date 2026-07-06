#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00268548
// Address: 0x268548 - 0x268620
void sub_00268548_0x268548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268548_0x268548");
#endif

    switch (ctx->pc) {
        case 0x268580u: goto label_268580;
        case 0x268594u: goto label_268594;
        case 0x2685a8u: goto label_2685a8;
        case 0x2685d4u: goto label_2685d4;
        case 0x2685f8u: goto label_2685f8;
        default: break;
    }

    ctx->pc = 0x268548u;

    // 0x268548: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x268548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26854c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268550: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x268550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x268554: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x268554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x268558: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x268558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26855c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x268560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268564: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x268564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x268568: 0x16020025  bne         $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x268568u;
    {
        const bool branch_taken_0x268568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26856Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268568u;
            // 0x26856c: 0xffb10040  sd          $s1, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268568) {
            ctx->pc = 0x268600u;
            goto label_268600;
        }
    }
    ctx->pc = 0x268570u;
    // 0x268570: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x268570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268578: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x268578u;
    SET_GPR_U32(ctx, 31, 0x268580u);
    ctx->pc = 0x26857Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268578u;
            // 0x26857c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268580u; }
        if (ctx->pc != 0x268580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268580u; }
        if (ctx->pc != 0x268580u) { return; }
    }
    ctx->pc = 0x268580u;
label_268580:
    // 0x268580: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x268580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x268584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26858c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26858Cu;
    SET_GPR_U32(ctx, 31, 0x268594u);
    ctx->pc = 0x268590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26858Cu;
            // 0x268590: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268594u; }
        if (ctx->pc != 0x268594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268594u; }
        if (ctx->pc != 0x268594u) { return; }
    }
    ctx->pc = 0x268594u;
label_268594:
    // 0x268594: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x268594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x268598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26859c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26859cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685a0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2685A0u;
    SET_GPR_U32(ctx, 31, 0x2685A8u);
    ctx->pc = 0x2685A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2685A0u;
            // 0x2685a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685A8u; }
        if (ctx->pc != 0x2685A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685A8u; }
        if (ctx->pc != 0x2685A8u) { return; }
    }
    ctx->pc = 0x2685A8u;
label_2685a8:
    // 0x2685a8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2685a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2685ac: 0xa3b00001  sb          $s0, 0x1($sp)
    ctx->pc = 0x2685acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x2685b0: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2685b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2685b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2685b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685b8: 0xa3b00021  sb          $s0, 0x21($sp)
    ctx->pc = 0x2685b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 16));
    // 0x2685bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2685bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2685c0: 0xa3b00011  sb          $s0, 0x11($sp)
    ctx->pc = 0x2685c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 16));
    // 0x2685c4: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2685c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2685c8: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x2685c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x2685cc: 0xc09913e  jal         func_2644F8
    ctx->pc = 0x2685CCu;
    SET_GPR_U32(ctx, 31, 0x2685D4u);
    ctx->pc = 0x2685D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2685CCu;
            // 0x2685d0: 0xa3a30010  sb          $v1, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2644F8u;
    if (runtime->hasFunction(0x2644F8u)) {
        auto targetFn = runtime->lookupFunction(0x2644F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685D4u; }
        if (ctx->pc != 0x2685D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002644F8_0x2644f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685D4u; }
        if (ctx->pc != 0x2685D4u) { return; }
    }
    ctx->pc = 0x2685D4u;
label_2685d4:
    // 0x2685d4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2685D4u;
    {
        const bool branch_taken_0x2685d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2685D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2685D4u;
            // 0x2685d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685d4) {
            ctx->pc = 0x2685E4u;
            goto label_2685e4;
        }
    }
    ctx->pc = 0x2685DCu;
    // 0x2685dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2685DCu;
    {
        const bool branch_taken_0x2685dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2685DCu;
            // 0x2685e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685dc) {
            ctx->pc = 0x268604u;
            goto label_268604;
        }
    }
    ctx->pc = 0x2685E4u;
label_2685e4:
    // 0x2685e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2685e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2685e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2685ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2685ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685f0: 0xc09a0dc  jal         func_268370
    ctx->pc = 0x2685F0u;
    SET_GPR_U32(ctx, 31, 0x2685F8u);
    ctx->pc = 0x2685F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2685F0u;
            // 0x2685f4: 0x24080803  addiu       $t0, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268370u;
    if (runtime->hasFunction(0x268370u)) {
        auto targetFn = runtime->lookupFunction(0x268370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685F8u; }
        if (ctx->pc != 0x2685F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268370_0x268370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685F8u; }
        if (ctx->pc != 0x2685F8u) { return; }
    }
    ctx->pc = 0x2685F8u;
label_2685f8:
    // 0x2685f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2685F8u;
    {
        const bool branch_taken_0x2685f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2685F8u;
            // 0x2685fc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685f8) {
            ctx->pc = 0x268608u;
            goto label_268608;
        }
    }
    ctx->pc = 0x268600u;
label_268600:
    // 0x268600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x268600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_268604:
    // 0x268604: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x268604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_268608:
    // 0x268608: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x268608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26860c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x26860cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268610: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x268610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268614: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x268614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268618: 0x3e00008  jr          $ra
    ctx->pc = 0x268618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268618u;
            // 0x26861c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268620u;
    ctx->pc = 0x268620u;
}
