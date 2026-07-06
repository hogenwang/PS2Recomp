#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B01B0
// Address: 0x1b01b0 - 0x1b0270
void sub_001B01B0_0x1b01b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B01B0_0x1b01b0");
#endif

    switch (ctx->pc) {
        case 0x1b01f4u: goto label_1b01f4;
        case 0x1b01fcu: goto label_1b01fc;
        case 0x1b0220u: goto label_1b0220;
        case 0x1b0234u: goto label_1b0234;
        case 0x1b024cu: goto label_1b024c;
        default: break;
    }

    ctx->pc = 0x1b01b0u;

    // 0x1b01b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b01b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b01b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1b01b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b01b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b01b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b01bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b01bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b01c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b01c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b01c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b01c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b01cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b01ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b01d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b01d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b01d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b01dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b01dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b01e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b01e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b01e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b01e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b01ec: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B01ECu;
    SET_GPR_U32(ctx, 31, 0x1B01F4u);
    ctx->pc = 0x1B01F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01ECu;
            // 0x1b01f0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B01F4u; }
        if (ctx->pc != 0x1B01F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC88_0x1aec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B01F4u; }
        if (ctx->pc != 0x1B01F4u) { return; }
    }
    ctx->pc = 0x1B01F4u;
label_1b01f4:
    // 0x1b01f4: 0xc06bfa6  jal         func_1AFE98
    ctx->pc = 0x1B01F4u;
    SET_GPR_U32(ctx, 31, 0x1B01FCu);
    ctx->pc = 0x1AFE98u;
    if (runtime->hasFunction(0x1AFE98u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B01FCu; }
        if (ctx->pc != 0x1B01FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFE98_0x1afe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B01FCu; }
        if (ctx->pc != 0x1B01FCu) { return; }
    }
    ctx->pc = 0x1B01FCu;
label_1b01fc:
    // 0x1b01fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b01fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0200: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b0200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0204: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1b0204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b020c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b020cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0210: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0210u;
    {
        const bool branch_taken_0x1b0210 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0210u;
            // 0x1b0214: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0210) {
            ctx->pc = 0x1B0234u;
            goto label_1b0234;
        }
    }
    ctx->pc = 0x1B0218u;
    // 0x1b0218: 0xc06c032  jal         func_1B00C8
    ctx->pc = 0x1B0218u;
    SET_GPR_U32(ctx, 31, 0x1B0220u);
    ctx->pc = 0x1B00C8u;
    if (runtime->hasFunction(0x1B00C8u)) {
        auto targetFn = runtime->lookupFunction(0x1B00C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0220u; }
        if (ctx->pc != 0x1B0220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00C8_0x1b00c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0220u; }
        if (ctx->pc != 0x1B0220u) { return; }
    }
    ctx->pc = 0x1B0220u;
label_1b0220:
    // 0x1b0220: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0220u;
    {
        const bool branch_taken_0x1b0220 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0220u;
            // 0x1b0224: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0220) {
            ctx->pc = 0x1B0238u;
            goto label_1b0238;
        }
    }
    ctx->pc = 0x1B0228u;
    // 0x1b0228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b022c: 0xc06c134  jal         func_1B04D0
    ctx->pc = 0x1B022Cu;
    SET_GPR_U32(ctx, 31, 0x1B0234u);
    ctx->pc = 0x1B0230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B022Cu;
            // 0x1b0230: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B04D0u;
    if (runtime->hasFunction(0x1B04D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0234u; }
        if (ctx->pc != 0x1B0234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04D0_0x1b04d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0234u; }
        if (ctx->pc != 0x1B0234u) { return; }
    }
    ctx->pc = 0x1B0234u;
label_1b0234:
    // 0x1b0234: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b0234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b0238:
    // 0x1b0238: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b0238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b023c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0244: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B0244u;
    SET_GPR_U32(ctx, 31, 0x1B024Cu);
    ctx->pc = 0x1B0248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0244u;
            // 0x1b0248: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B024Cu; }
        if (ctx->pc != 0x1B024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC88_0x1aec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B024Cu; }
        if (ctx->pc != 0x1B024Cu) { return; }
    }
    ctx->pc = 0x1B024Cu;
label_1b024c:
    // 0x1b024c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b024cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0258: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b025c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b025cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0260: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b0260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0264: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b0264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b0268: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0268u;
            // 0x1b026c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0270u;
    ctx->pc = 0x1b0270u;
}
