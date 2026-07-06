#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE330
// Address: 0x2fe330 - 0x2fe3d0
void sub_002FE330_0x2fe330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE330_0x2fe330");
#endif

    switch (ctx->pc) {
        case 0x2fe350u: goto label_2fe350;
        case 0x2fe3bcu: goto label_2fe3bc;
        default: break;
    }

    ctx->pc = 0x2fe330u;

    // 0x2fe330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe334: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2fe334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2fe338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe344: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fe344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe348: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x2FE348u;
    SET_GPR_U32(ctx, 31, 0x2FE350u);
    ctx->pc = 0x2FE34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE348u;
            // 0x2fe34c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (runtime->hasFunction(0x1A4740u)) {
        auto targetFn = runtime->lookupFunction(0x1A4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE350u; }
        if (ctx->pc != 0x2FE350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4740_0x1a4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE350u; }
        if (ctx->pc != 0x2FE350u) { return; }
    }
    ctx->pc = 0x2FE350u;
label_2fe350:
    // 0x2fe350: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE350u;
    {
        const bool branch_taken_0x2fe350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe350) {
            ctx->pc = 0x2FE364u;
            goto label_2fe364;
        }
    }
    ctx->pc = 0x2FE358u;
    // 0x2fe358: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe35c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE35Cu;
    {
        const bool branch_taken_0x2fe35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE35Cu;
            // 0x2fe360: 0xac51be80  sw          $s1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe35c) {
            ctx->pc = 0x2FE374u;
            goto label_2fe374;
        }
    }
    ctx->pc = 0x2FE364u;
label_2fe364:
    // 0x2fe364: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe368: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe36c: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe370: 0xac43be80  sw          $v1, -0x4180($v0)
    ctx->pc = 0x2fe370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
label_2fe374:
    // 0x2fe374: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE374u;
    {
        const bool branch_taken_0x2fe374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe374) {
            ctx->pc = 0x2FE388u;
            goto label_2fe388;
        }
    }
    ctx->pc = 0x2FE37Cu;
    // 0x2fe37c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe380: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE380u;
    {
        const bool branch_taken_0x2fe380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE380u;
            // 0x2fe384: 0xac50be84  sw          $s0, -0x417C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe380) {
            ctx->pc = 0x2FE398u;
            goto label_2fe398;
        }
    }
    ctx->pc = 0x2FE388u;
label_2fe388:
    // 0x2fe388: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe38c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe390: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe394: 0xac43be84  sw          $v1, -0x417C($v0)
    ctx->pc = 0x2fe394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 3));
label_2fe398:
    // 0x2fe398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fe398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe39c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe3a0: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x2fe3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
    // 0x2fe3a4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe3a8: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x2fe3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x2fe3ac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe3b0: 0x2484de60  addiu       $a0, $a0, -0x21A0
    ctx->pc = 0x2fe3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958688));
    // 0x2fe3b4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE3B4u;
    SET_GPR_U32(ctx, 31, 0x2FE3BCu);
    ctx->pc = 0x2FE3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3B4u;
            // 0x2fe3b8: 0xa443be92  sh          $v1, -0x416E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3BCu; }
        if (ctx->pc != 0x2FE3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3BCu; }
        if (ctx->pc != 0x2FE3BCu) { return; }
    }
    ctx->pc = 0x2FE3BCu;
label_2fe3bc:
    // 0x2fe3bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe3c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe3c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3C8u;
            // 0x2fe3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE3D0u;
    ctx->pc = 0x2fe3d0u;
}
