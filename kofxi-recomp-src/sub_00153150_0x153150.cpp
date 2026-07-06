#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153150
// Address: 0x153150 - 0x1531f0
void sub_00153150_0x153150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153150_0x153150");
#endif

    switch (ctx->pc) {
        case 0x153170u: goto label_153170;
        default: break;
    }

    ctx->pc = 0x153150u;

    // 0x153150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x153154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x153158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15315c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153160: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x153160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153168: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x153168u;
    SET_GPR_U32(ctx, 31, 0x153170u);
    ctx->pc = 0x15316Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153168u;
            // 0x15316c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (runtime->hasFunction(0x152AE0u)) {
        auto targetFn = runtime->lookupFunction(0x152AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153170u; }
        if (ctx->pc != 0x153170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152AE0_0x152ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153170u; }
        if (ctx->pc != 0x153170u) { return; }
    }
    ctx->pc = 0x153170u;
label_153170:
    // 0x153170: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x153170u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153174: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x153174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x153178: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x153178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15317c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x15317Cu;
    {
        const bool branch_taken_0x15317c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15317c) {
            ctx->pc = 0x153180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15317Cu;
            // 0x153180: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1531DCu;
            goto label_1531dc;
        }
    }
    ctx->pc = 0x153184u;
    // 0x153184: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x153184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x153188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15318c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15318cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x153190: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x153190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153194: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x153194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153198: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x153198u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15319c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x15319cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1531a0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1531a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1531a4: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1531a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1531a8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1531a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1531ac: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1531acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1531b0: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x1531b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1531b4: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1531b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1531b8: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x1531b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1531bc: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x1531bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1531c0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1531c4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1531c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1531c8: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x1531c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x1531cc: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x1531ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1531d0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1531d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1531d4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1531d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1531d8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1531d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1531dc:
    // 0x1531dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1531dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1531e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1531e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1531e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1531e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1531e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1531E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1531ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1531E8u;
            // 0x1531ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1531F0u;
    ctx->pc = 0x1531f0u;
}
