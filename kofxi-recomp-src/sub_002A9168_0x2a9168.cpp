#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A9168
// Address: 0x2a9168 - 0x2a9200
void sub_002A9168_0x2a9168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9168_0x2a9168");
#endif

    switch (ctx->pc) {
        case 0x2a91a8u: goto label_2a91a8;
        case 0x2a91d0u: goto label_2a91d0;
        default: break;
    }

    ctx->pc = 0x2a9168u;

    // 0x2a9168: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a9168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a916c: 0x39080002  xori        $t0, $t0, 0x2
    ctx->pc = 0x2a916cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
    // 0x2a9170: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a9170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a9174: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a9174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a9178: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a9178u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a917c: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x2a917cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a9180: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a9180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a9184: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a9184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a9188: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a9188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a918c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a9190: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a9190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9194: 0x8800b  movn        $s0, $zero, $t0
    ctx->pc = 0x2a9194u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2a9198: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2a9198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a919c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a91a0: 0xc0aa588  jal         func_2A9620
    ctx->pc = 0x2A91A0u;
    SET_GPR_U32(ctx, 31, 0x2A91A8u);
    ctx->pc = 0x2A91A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A91A0u;
            // 0x2a91a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9620u;
    if (runtime->hasFunction(0x2A9620u)) {
        auto targetFn = runtime->lookupFunction(0x2A9620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A91A8u; }
        if (ctx->pc != 0x2A91A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9620_0x2a9620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A91A8u; }
        if (ctx->pc != 0x2A91A8u) { return; }
    }
    ctx->pc = 0x2A91A8u;
label_2a91a8:
    // 0x2a91a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A91A8u;
    {
        const bool branch_taken_0x2a91a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A91ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A91A8u;
            // 0x2a91ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a91a8) {
            ctx->pc = 0x2A91D8u;
            goto label_2a91d8;
        }
    }
    ctx->pc = 0x2A91B0u;
    // 0x2a91b0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2a91b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2a91b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a91b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91b8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a91b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91bc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2a91bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91c0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2a91c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a91c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91c8: 0xc0a8124  jal         func_2A0490
    ctx->pc = 0x2A91C8u;
    SET_GPR_U32(ctx, 31, 0x2A91D0u);
    ctx->pc = 0x2A91CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A91C8u;
            // 0x2a91cc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0490u;
    if (runtime->hasFunction(0x2A0490u)) {
        auto targetFn = runtime->lookupFunction(0x2A0490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A91D0u; }
        if (ctx->pc != 0x2A91D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0490_0x2a0490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A91D0u; }
        if (ctx->pc != 0x2A91D0u) { return; }
    }
    ctx->pc = 0x2A91D0u;
label_2a91d0:
    // 0x2a91d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a91d4: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2a91d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2a91d8:
    // 0x2a91d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a91d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a91dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a91e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a91e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a91e4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a91e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a91e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a91e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a91ec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a91ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a91f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a91f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a91f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A91F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A91F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A91F4u;
            // 0x2a91f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A91FCu;
    // 0x2a91fc: 0x0  nop
    ctx->pc = 0x2a91fcu;
    // NOP
    ctx->pc = 0x2a9200u;
}
