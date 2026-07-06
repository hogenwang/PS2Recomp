#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0270
// Address: 0x1b0270 - 0x1b0348
void sub_001B0270_0x1b0270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0270_0x1b0270");
#endif

    switch (ctx->pc) {
        case 0x1b02a8u: goto label_1b02a8;
        case 0x1b02ccu: goto label_1b02cc;
        case 0x1b02fcu: goto label_1b02fc;
        case 0x1b0304u: goto label_1b0304;
        case 0x1b0318u: goto label_1b0318;
        default: break;
    }

    ctx->pc = 0x1b0270u;

    // 0x1b0270: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1b0270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1b0274: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x1b0274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x1b0278: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b027c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x1b027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x1b0280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b0280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0284: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b0284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0288: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b0288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b028c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b028cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0290: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1b0290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b0294: 0x27a80104  addiu       $t0, $sp, 0x104
    ctx->pc = 0x1b0294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1b0298: 0x27a90108  addiu       $t1, $sp, 0x108
    ctx->pc = 0x1b0298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1b029c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1b029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1b02a0: 0xc06c550  jal         func_1B1540
    ctx->pc = 0x1B02A0u;
    SET_GPR_U32(ctx, 31, 0x1B02A8u);
    ctx->pc = 0x1B02A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02A0u;
            // 0x1b02a4: 0x27aa010c  addiu       $t2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1540u;
    if (runtime->hasFunction(0x1B1540u)) {
        auto targetFn = runtime->lookupFunction(0x1B1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02A8u; }
        if (ctx->pc != 0x1B02A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1540_0x1b1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02A8u; }
        if (ctx->pc != 0x1B02A8u) { return; }
    }
    ctx->pc = 0x1B02A8u;
label_1b02a8:
    // 0x1b02a8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B02A8u;
    {
        const bool branch_taken_0x1b02a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B02ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02A8u;
            // 0x1b02ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02a8) {
            ctx->pc = 0x1B02B8u;
            goto label_1b02b8;
        }
    }
    ctx->pc = 0x1B02B0u;
    // 0x1b02b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B02B0u;
    {
        const bool branch_taken_0x1b02b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02B0u;
            // 0x1b02b4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02b0) {
            ctx->pc = 0x1B0330u;
            goto label_1b0330;
        }
    }
    ctx->pc = 0x1B02B8u;
label_1b02b8:
    // 0x1b02b8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1b02b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b02bc: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1b02bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1b02c0: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x1b02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x1b02c4: 0xc06c5c2  jal         func_1B1708
    ctx->pc = 0x1B02C4u;
    SET_GPR_U32(ctx, 31, 0x1B02CCu);
    ctx->pc = 0x1B02C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02C4u;
            // 0x1b02c8: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1708u;
    if (runtime->hasFunction(0x1B1708u)) {
        auto targetFn = runtime->lookupFunction(0x1B1708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02CCu; }
        if (ctx->pc != 0x1B02CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1708_0x1b1708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02CCu; }
        if (ctx->pc != 0x1B02CCu) { return; }
    }
    ctx->pc = 0x1B02CCu;
label_1b02cc:
    // 0x1b02cc: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1b02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1b02d0: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x1b02d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1b02d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b02d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02d8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b02d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b02dc: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x1b02dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1b02e0: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1b02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x1b02e4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1b02e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b02e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02ec: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1b02ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1b02f0: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x1b02f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
    // 0x1b02f4: 0xc06dab0  jal         func_1B6AC0
    ctx->pc = 0x1B02F4u;
    SET_GPR_U32(ctx, 31, 0x1B02FCu);
    ctx->pc = 0x1B02F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02F4u;
            // 0x1b02f8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AC0u;
    if (runtime->hasFunction(0x1B6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B6AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02FCu; }
        if (ctx->pc != 0x1B02FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6AC0_0x1b6ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02FCu; }
        if (ctx->pc != 0x1B02FCu) { return; }
    }
    ctx->pc = 0x1B02FCu;
label_1b02fc:
    // 0x1b02fc: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1B02FCu;
    SET_GPR_U32(ctx, 31, 0x1B0304u);
    ctx->pc = 0x1B0300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02FCu;
            // 0x1b0300: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (runtime->hasFunction(0x1B6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0304u; }
        if (ctx->pc != 0x1B0304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C60_0x1b6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0304u; }
        if (ctx->pc != 0x1B0304u) { return; }
    }
    ctx->pc = 0x1B0304u;
label_1b0304:
    // 0x1b0304: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b0304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0308: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0308u;
    {
        const bool branch_taken_0x1b0308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0308) {
            ctx->pc = 0x1B030Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0308u;
            // 0x1b030c: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0320u;
            goto label_1b0320;
        }
    }
    ctx->pc = 0x1B0310u;
    // 0x1b0310: 0xc06daf6  jal         func_1B6BD8
    ctx->pc = 0x1B0310u;
    SET_GPR_U32(ctx, 31, 0x1B0318u);
    ctx->pc = 0x1B0314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0310u;
            // 0x1b0314: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BD8u;
    if (runtime->hasFunction(0x1B6BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0318u; }
        if (ctx->pc != 0x1B0318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6BD8_0x1b6bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0318u; }
        if (ctx->pc != 0x1B0318u) { return; }
    }
    ctx->pc = 0x1B0318u;
label_1b0318:
    // 0x1b0318: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0318u;
    {
        const bool branch_taken_0x1b0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0318u;
            // 0x1b031c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0318) {
            ctx->pc = 0x1B0330u;
            goto label_1b0330;
        }
    }
    ctx->pc = 0x1B0320u;
label_1b0320:
    // 0x1b0320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0324: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1b0324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1b0328: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x1b0328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x1b032c: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x1b032cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
label_1b0330:
    // 0x1b0330: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x1b0330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b0334: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x1b0334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b0338: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1b0338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b033c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B033Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B033Cu;
            // 0x1b0340: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0344u;
    // 0x1b0344: 0x0  nop
    ctx->pc = 0x1b0344u;
    // NOP
    ctx->pc = 0x1b0348u;
}
