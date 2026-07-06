#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE270
// Address: 0x2fe270 - 0x2fe330
void sub_002FE270_0x2fe270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE270_0x2fe270");
#endif

    switch (ctx->pc) {
        case 0x2fe290u: goto label_2fe290;
        case 0x2fe304u: goto label_2fe304;
        case 0x2fe318u: goto label_2fe318;
        default: break;
    }

    ctx->pc = 0x2fe270u;

    // 0x2fe270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe274: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2fe274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2fe278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe27c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe284: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fe284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe288: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x2FE288u;
    SET_GPR_U32(ctx, 31, 0x2FE290u);
    ctx->pc = 0x2FE28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE288u;
            // 0x2fe28c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (runtime->hasFunction(0x1A4740u)) {
        auto targetFn = runtime->lookupFunction(0x1A4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE290u; }
        if (ctx->pc != 0x2FE290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4740_0x1a4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE290u; }
        if (ctx->pc != 0x2FE290u) { return; }
    }
    ctx->pc = 0x2FE290u;
label_2fe290:
    // 0x2fe290: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE290u;
    {
        const bool branch_taken_0x2fe290 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe290) {
            ctx->pc = 0x2FE2A4u;
            goto label_2fe2a4;
        }
    }
    ctx->pc = 0x2FE298u;
    // 0x2fe298: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe29c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE29Cu;
    {
        const bool branch_taken_0x2fe29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE29Cu;
            // 0x2fe2a0: 0xac51be80  sw          $s1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe29c) {
            ctx->pc = 0x2FE2B4u;
            goto label_2fe2b4;
        }
    }
    ctx->pc = 0x2FE2A4u;
label_2fe2a4:
    // 0x2fe2a4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe2a8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe2ac: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe2b0: 0xac43be80  sw          $v1, -0x4180($v0)
    ctx->pc = 0x2fe2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
label_2fe2b4:
    // 0x2fe2b4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE2B4u;
    {
        const bool branch_taken_0x2fe2b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe2b4) {
            ctx->pc = 0x2FE2C8u;
            goto label_2fe2c8;
        }
    }
    ctx->pc = 0x2FE2BCu;
    // 0x2fe2bc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe2c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE2C0u;
    {
        const bool branch_taken_0x2fe2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2C0u;
            // 0x2fe2c4: 0xac50be84  sw          $s0, -0x417C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2c0) {
            ctx->pc = 0x2FE2D8u;
            goto label_2fe2d8;
        }
    }
    ctx->pc = 0x2FE2C8u;
label_2fe2c8:
    // 0x2fe2c8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe2cc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe2d0: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe2d4: 0xac43be84  sw          $v1, -0x417C($v0)
    ctx->pc = 0x2fe2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 3));
label_2fe2d8:
    // 0x2fe2d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fe2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe2dc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe2e0: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x2fe2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
    // 0x2fe2e4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fe2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fe2e8: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x2fe2e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x2fe2ec: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2fe2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fe2f0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE2F0u;
    {
        const bool branch_taken_0x2fe2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fe2f0) {
            ctx->pc = 0x2FE30Cu;
            goto label_2fe30c;
        }
    }
    ctx->pc = 0x2FE2F8u;
    // 0x2fe2f8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe2fc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE2FCu;
    SET_GPR_U32(ctx, 31, 0x2FE304u);
    ctx->pc = 0x2FE300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2FCu;
            // 0x2fe300: 0x2484dba0  addiu       $a0, $a0, -0x2460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE304u; }
        if (ctx->pc != 0x2FE304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE304u; }
        if (ctx->pc != 0x2FE304u) { return; }
    }
    ctx->pc = 0x2FE304u;
label_2fe304:
    // 0x2fe304: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE304u;
    {
        const bool branch_taken_0x2fe304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE304u;
            // 0x2fe308: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe304) {
            ctx->pc = 0x2FE31Cu;
            goto label_2fe31c;
        }
    }
    ctx->pc = 0x2FE30Cu;
label_2fe30c:
    // 0x2fe30c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe310: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE310u;
    SET_GPR_U32(ctx, 31, 0x2FE318u);
    ctx->pc = 0x2FE314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE310u;
            // 0x2fe314: 0x2484dd60  addiu       $a0, $a0, -0x22A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE318u; }
        if (ctx->pc != 0x2FE318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE318u; }
        if (ctx->pc != 0x2FE318u) { return; }
    }
    ctx->pc = 0x2FE318u;
label_2fe318:
    // 0x2fe318: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe31c:
    // 0x2fe31c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe324: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE324u;
            // 0x2fe328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE32Cu;
    // 0x2fe32c: 0x0  nop
    ctx->pc = 0x2fe32cu;
    // NOP
    ctx->pc = 0x2fe330u;
}
