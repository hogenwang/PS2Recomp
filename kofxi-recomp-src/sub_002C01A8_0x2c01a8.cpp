#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C01A8
// Address: 0x2c01a8 - 0x2c0360
void sub_002C01A8_0x2c01a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C01A8_0x2c01a8");
#endif

    switch (ctx->pc) {
        case 0x2c01b0u: goto label_2c01b0;
        case 0x2c01b8u: goto label_2c01b8;
        case 0x2c01c0u: goto label_2c01c0;
        case 0x2c01c8u: goto label_2c01c8;
        case 0x2c01d0u: goto label_2c01d0;
        case 0x2c01fcu: goto label_2c01fc;
        case 0x2c0208u: goto label_2c0208;
        case 0x2c0214u: goto label_2c0214;
        case 0x2c026cu: goto label_2c026c;
        case 0x2c0290u: goto label_2c0290;
        case 0x2c02b4u: goto label_2c02b4;
        case 0x2c02d0u: goto label_2c02d0;
        case 0x2c02ecu: goto label_2c02ec;
        case 0x2c0310u: goto label_2c0310;
        case 0x2c032cu: goto label_2c032c;
        default: break;
    }

    ctx->pc = 0x2c01a8u;

    // 0x2c01a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C01A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C01ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01A8u;
            // 0x2c01ac: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C01B0u;
label_2c01b0:
    // 0x2c01b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C01B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C01B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01B0u;
            // 0x2c01b4: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C01B8u;
label_2c01b8:
    // 0x2c01b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C01B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C01BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01B8u;
            // 0x2c01bc: 0xac850024  sw          $a1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C01C0u;
label_2c01c0:
    // 0x2c01c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C01C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C01C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01C0u;
            // 0x2c01c4: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C01C8u;
label_2c01c8:
    // 0x2c01c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C01C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C01CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01C8u;
            // 0x2c01cc: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C01D0u;
label_2c01d0:
    // 0x2c01d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c01d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c01d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c01d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c01d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2c01d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2c01dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c01dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c01e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c01e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c01e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c01e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c01ec: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c01ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c01f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2c01f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2c01f4: 0xc0afcf8  jal         func_2BF3E0
    ctx->pc = 0x2C01F4u;
    SET_GPR_U32(ctx, 31, 0x2C01FCu);
    ctx->pc = 0x2C01F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01F4u;
            // 0x2c01f8: 0xffb30040  sd          $s3, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF3E0u;
    if (runtime->hasFunction(0x2BF3E0u)) {
        auto targetFn = runtime->lookupFunction(0x2BF3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C01FCu; }
        if (ctx->pc != 0x2C01FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF3E0_0x2bf3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C01FCu; }
        if (ctx->pc != 0x2C01FCu) { return; }
    }
    ctx->pc = 0x2C01FCu;
label_2c01fc:
    // 0x2c01fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c01fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0200: 0xc0a7304  jal         func_29CC10
    ctx->pc = 0x2C0200u;
    SET_GPR_U32(ctx, 31, 0x2C0208u);
    ctx->pc = 0x2C0204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0200u;
            // 0x2c0204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CC10u;
    if (runtime->hasFunction(0x29CC10u)) {
        auto targetFn = runtime->lookupFunction(0x29CC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0208u; }
        if (ctx->pc != 0x2C0208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CC10_0x29cc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0208u; }
        if (ctx->pc != 0x2C0208u) { return; }
    }
    ctx->pc = 0x2C0208u;
label_2c0208:
    // 0x2c0208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c020c: 0xc0a7304  jal         func_29CC10
    ctx->pc = 0x2C020Cu;
    SET_GPR_U32(ctx, 31, 0x2C0214u);
    ctx->pc = 0x2C0210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C020Cu;
            // 0x2c0210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CC10u;
    if (runtime->hasFunction(0x29CC10u)) {
        auto targetFn = runtime->lookupFunction(0x29CC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0214u; }
        if (ctx->pc != 0x2C0214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CC10_0x29cc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0214u; }
        if (ctx->pc != 0x2C0214u) { return; }
    }
    ctx->pc = 0x2C0214u;
label_2c0214:
    // 0x2c0214: 0x16020048  bne         $s0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2C0214u;
    {
        const bool branch_taken_0x2c0214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0214u;
            // 0x2c0218: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0214) {
            ctx->pc = 0x2C0338u;
            goto label_2c0338;
        }
    }
    ctx->pc = 0x2C021Cu;
    // 0x2c021c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c021cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c0220: 0x12020044  beq         $s0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C0220u;
    {
        const bool branch_taken_0x2c0220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0220u;
            // 0x2c0224: 0x2a02001d  slti        $v0, $s0, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0220) {
            ctx->pc = 0x2C0334u;
            goto label_2c0334;
        }
    }
    ctx->pc = 0x2C0228u;
    // 0x2c0228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0228u;
    {
        const bool branch_taken_0x2c0228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0228u;
            // 0x2c022c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0228) {
            ctx->pc = 0x2C0240u;
            goto label_2c0240;
        }
    }
    ctx->pc = 0x2C0230u;
    // 0x2c0230: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0230u;
    {
        const bool branch_taken_0x2c0230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0230u;
            // 0x2c0234: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0230) {
            ctx->pc = 0x2C0254u;
            goto label_2c0254;
        }
    }
    ctx->pc = 0x2C0238u;
    // 0x2c0238: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2C0238u;
    {
        const bool branch_taken_0x2c0238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C023Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0238u;
            // 0x2c023c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0238) {
            ctx->pc = 0x2C033Cu;
            goto label_2c033c;
        }
    }
    ctx->pc = 0x2C0240u;
label_2c0240:
    // 0x2c0240: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x2c0240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2c0244: 0x12020034  beq         $s0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C0244u;
    {
        const bool branch_taken_0x2c0244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0244u;
            // 0x2c0248: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0244) {
            ctx->pc = 0x2C0318u;
            goto label_2c0318;
        }
    }
    ctx->pc = 0x2C024Cu;
    // 0x2c024c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2C024Cu;
    {
        const bool branch_taken_0x2c024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C024Cu;
            // 0x2c0250: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c024c) {
            ctx->pc = 0x2C033Cu;
            goto label_2c033c;
        }
    }
    ctx->pc = 0x2C0254u;
label_2c0254:
    // 0x2c0254: 0x27b40004  addiu       $s4, $sp, 0x4
    ctx->pc = 0x2c0254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2c0258: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2c0258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c025c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c0260: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c0260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0264: 0xc0aa36a  jal         func_2A8DA8
    ctx->pc = 0x2C0264u;
    SET_GPR_U32(ctx, 31, 0x2C026Cu);
    ctx->pc = 0x2C0268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0264u;
            // 0x2c0268: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8DA8u;
    if (runtime->hasFunction(0x2A8DA8u)) {
        auto targetFn = runtime->lookupFunction(0x2A8DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C026Cu; }
        if (ctx->pc != 0x2C026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8DA8_0x2a8da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C026Cu; }
        if (ctx->pc != 0x2C026Cu) { return; }
    }
    ctx->pc = 0x2C026Cu;
label_2c026c:
    // 0x2c026c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C026Cu;
    {
        const bool branch_taken_0x2c026c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C026Cu;
            // 0x2c0270: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c026c) {
            ctx->pc = 0x2C0338u;
            goto label_2c0338;
        }
    }
    ctx->pc = 0x2C0274u;
    // 0x2c0274: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x2c0274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2c0278: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x2c0278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2c027c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2c027cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2c0280: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c0280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c0284: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c0284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0288: 0xc0aa36a  jal         func_2A8DA8
    ctx->pc = 0x2C0288u;
    SET_GPR_U32(ctx, 31, 0x2C0290u);
    ctx->pc = 0x2C028Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0288u;
            // 0x2c028c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8DA8u;
    if (runtime->hasFunction(0x2A8DA8u)) {
        auto targetFn = runtime->lookupFunction(0x2A8DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0290u; }
        if (ctx->pc != 0x2C0290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8DA8_0x2a8da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0290u; }
        if (ctx->pc != 0x2C0290u) { return; }
    }
    ctx->pc = 0x2C0290u;
label_2c0290:
    // 0x2c0290: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C0290u;
    {
        const bool branch_taken_0x2c0290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0290u;
            // 0x2c0294: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0290) {
            ctx->pc = 0x2C0338u;
            goto label_2c0338;
        }
    }
    ctx->pc = 0x2C0298u;
    // 0x2c0298: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2c0298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c029c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2c029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2c02a0: 0x14c20025  bne         $a2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C02A0u;
    {
        const bool branch_taken_0x2c02a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C02A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02A0u;
            // 0x2c02a4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02a0) {
            ctx->pc = 0x2C0338u;
            goto label_2c0338;
        }
    }
    ctx->pc = 0x2C02A8u;
    // 0x2c02a8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2c02a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c02ac: 0xc049c22  jal         func_127088
    ctx->pc = 0x2C02ACu;
    SET_GPR_U32(ctx, 31, 0x2C02B4u);
    ctx->pc = 0x2C02B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02ACu;
            // 0x2c02b0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02B4u; }
        if (ctx->pc != 0x2C02B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02B4u; }
        if (ctx->pc != 0x2C02B4u) { return; }
    }
    ctx->pc = 0x2C02B4u;
label_2c02b4:
    // 0x2c02b4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C02B4u;
    {
        const bool branch_taken_0x2c02b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C02B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02B4u;
            // 0x2c02b8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02b4) {
            ctx->pc = 0x2C0338u;
            goto label_2c0338;
        }
    }
    ctx->pc = 0x2C02BCu;
    // 0x2c02bc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2c02bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c02c0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2c02c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02c4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2c02c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2c02c8: 0xc0aa36a  jal         func_2A8DA8
    ctx->pc = 0x2C02C8u;
    SET_GPR_U32(ctx, 31, 0x2C02D0u);
    ctx->pc = 0x2C02CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02C8u;
            // 0x2c02cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8DA8u;
    if (runtime->hasFunction(0x2A8DA8u)) {
        auto targetFn = runtime->lookupFunction(0x2A8DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02D0u; }
        if (ctx->pc != 0x2C02D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8DA8_0x2a8da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02D0u; }
        if (ctx->pc != 0x2C02D0u) { return; }
    }
    ctx->pc = 0x2C02D0u;
label_2c02d0:
    // 0x2c02d0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C02D0u;
    {
        const bool branch_taken_0x2c02d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C02D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02D0u;
            // 0x2c02d4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02d0) {
            ctx->pc = 0x2C0338u;
            goto label_2c0338;
        }
    }
    ctx->pc = 0x2C02D8u;
    // 0x2c02d8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2c02d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2c02dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c02dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c02e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02e4: 0xc0aa36a  jal         func_2A8DA8
    ctx->pc = 0x2C02E4u;
    SET_GPR_U32(ctx, 31, 0x2C02ECu);
    ctx->pc = 0x2C02E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02E4u;
            // 0x2c02e8: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8DA8u;
    if (runtime->hasFunction(0x2A8DA8u)) {
        auto targetFn = runtime->lookupFunction(0x2A8DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02ECu; }
        if (ctx->pc != 0x2C02ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8DA8_0x2a8da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02ECu; }
        if (ctx->pc != 0x2C02ECu) { return; }
    }
    ctx->pc = 0x2C02ECu;
label_2c02ec:
    // 0x2c02ec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C02ECu;
    {
        const bool branch_taken_0x2c02ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C02F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02ECu;
            // 0x2c02f0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02ec) {
            ctx->pc = 0x2C0338u;
            goto label_2c0338;
        }
    }
    ctx->pc = 0x2C02F4u;
    // 0x2c02f4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2c02f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c02f8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2c02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2c02fc: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C02FCu;
    {
        const bool branch_taken_0x2c02fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02FCu;
            // 0x2c0300: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02fc) {
            ctx->pc = 0x2C0338u;
            goto label_2c0338;
        }
    }
    ctx->pc = 0x2C0304u;
    // 0x2c0304: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2c0304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0308: 0xc049c22  jal         func_127088
    ctx->pc = 0x2C0308u;
    SET_GPR_U32(ctx, 31, 0x2C0310u);
    ctx->pc = 0x2C030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0308u;
            // 0x2c030c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0310u; }
        if (ctx->pc != 0x2C0310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0310u; }
        if (ctx->pc != 0x2C0310u) { return; }
    }
    ctx->pc = 0x2C0310u;
label_2c0310:
    // 0x2c0310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0310u;
    {
        const bool branch_taken_0x2c0310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0310) {
            ctx->pc = 0x2C032Cu;
            goto label_2c032c;
        }
    }
    ctx->pc = 0x2C0318u;
label_2c0318:
    // 0x2c0318: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c031c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2c031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2c0320: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2c0320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c0324: 0xc0a1c20  jal         func_287080
    ctx->pc = 0x2C0324u;
    SET_GPR_U32(ctx, 31, 0x2C032Cu);
    ctx->pc = 0x2C0328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0324u;
            // 0x2c0328: 0x8c650018  lw          $a1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (runtime->hasFunction(0x287080u)) {
        auto targetFn = runtime->lookupFunction(0x287080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C032Cu; }
        if (ctx->pc != 0x2C032Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287080_0x287080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C032Cu; }
        if (ctx->pc != 0x2C032Cu) { return; }
    }
    ctx->pc = 0x2C032Cu;
label_2c032c:
    // 0x2c032c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C032Cu;
    {
        const bool branch_taken_0x2c032c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c032c) {
            ctx->pc = 0x2C0330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C032Cu;
            // 0x2c0330: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0334u;
            goto label_2c0334;
        }
    }
    ctx->pc = 0x2C0334u;
label_2c0334:
    // 0x2c0334: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2c0334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c0338:
    // 0x2c0338: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c0338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2c033c:
    // 0x2c033c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2c033cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0340: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2c0340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0344: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c0344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0348: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c0348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c034c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c034cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0350: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c0350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0354: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0354u;
            // 0x2c0358: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C035Cu;
    // 0x2c035c: 0x0  nop
    ctx->pc = 0x2c035cu;
    // NOP
    ctx->pc = 0x2c0360u;
}
