#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD1F0
// Address: 0x1bd1f0 - 0x1bd3f8
void sub_001BD1F0_0x1bd1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD1F0_0x1bd1f0");
#endif

    switch (ctx->pc) {
        case 0x1bd1f0u: goto label_1bd1f0;
        case 0x1bd1f4u: goto label_1bd1f4;
        case 0x1bd1f8u: goto label_1bd1f8;
        case 0x1bd1fcu: goto label_1bd1fc;
        case 0x1bd200u: goto label_1bd200;
        case 0x1bd204u: goto label_1bd204;
        case 0x1bd208u: goto label_1bd208;
        case 0x1bd20cu: goto label_1bd20c;
        case 0x1bd210u: goto label_1bd210;
        case 0x1bd214u: goto label_1bd214;
        case 0x1bd218u: goto label_1bd218;
        case 0x1bd21cu: goto label_1bd21c;
        case 0x1bd220u: goto label_1bd220;
        case 0x1bd224u: goto label_1bd224;
        case 0x1bd228u: goto label_1bd228;
        case 0x1bd22cu: goto label_1bd22c;
        case 0x1bd230u: goto label_1bd230;
        case 0x1bd234u: goto label_1bd234;
        case 0x1bd238u: goto label_1bd238;
        case 0x1bd23cu: goto label_1bd23c;
        case 0x1bd240u: goto label_1bd240;
        case 0x1bd244u: goto label_1bd244;
        case 0x1bd248u: goto label_1bd248;
        case 0x1bd24cu: goto label_1bd24c;
        case 0x1bd250u: goto label_1bd250;
        case 0x1bd254u: goto label_1bd254;
        case 0x1bd258u: goto label_1bd258;
        case 0x1bd25cu: goto label_1bd25c;
        case 0x1bd260u: goto label_1bd260;
        case 0x1bd264u: goto label_1bd264;
        case 0x1bd268u: goto label_1bd268;
        case 0x1bd26cu: goto label_1bd26c;
        case 0x1bd270u: goto label_1bd270;
        case 0x1bd274u: goto label_1bd274;
        case 0x1bd278u: goto label_1bd278;
        case 0x1bd27cu: goto label_1bd27c;
        case 0x1bd280u: goto label_1bd280;
        case 0x1bd284u: goto label_1bd284;
        case 0x1bd288u: goto label_1bd288;
        case 0x1bd28cu: goto label_1bd28c;
        case 0x1bd290u: goto label_1bd290;
        case 0x1bd294u: goto label_1bd294;
        case 0x1bd298u: goto label_1bd298;
        case 0x1bd29cu: goto label_1bd29c;
        case 0x1bd2a0u: goto label_1bd2a0;
        case 0x1bd2a4u: goto label_1bd2a4;
        case 0x1bd2a8u: goto label_1bd2a8;
        case 0x1bd2acu: goto label_1bd2ac;
        case 0x1bd2b0u: goto label_1bd2b0;
        case 0x1bd2b4u: goto label_1bd2b4;
        case 0x1bd2b8u: goto label_1bd2b8;
        case 0x1bd2bcu: goto label_1bd2bc;
        case 0x1bd2c0u: goto label_1bd2c0;
        case 0x1bd2c4u: goto label_1bd2c4;
        case 0x1bd2c8u: goto label_1bd2c8;
        case 0x1bd2ccu: goto label_1bd2cc;
        case 0x1bd2d0u: goto label_1bd2d0;
        case 0x1bd2d4u: goto label_1bd2d4;
        case 0x1bd2d8u: goto label_1bd2d8;
        case 0x1bd2dcu: goto label_1bd2dc;
        case 0x1bd2e0u: goto label_1bd2e0;
        case 0x1bd2e4u: goto label_1bd2e4;
        case 0x1bd2e8u: goto label_1bd2e8;
        case 0x1bd2ecu: goto label_1bd2ec;
        case 0x1bd2f0u: goto label_1bd2f0;
        case 0x1bd2f4u: goto label_1bd2f4;
        case 0x1bd2f8u: goto label_1bd2f8;
        case 0x1bd2fcu: goto label_1bd2fc;
        case 0x1bd300u: goto label_1bd300;
        case 0x1bd304u: goto label_1bd304;
        case 0x1bd308u: goto label_1bd308;
        case 0x1bd30cu: goto label_1bd30c;
        case 0x1bd310u: goto label_1bd310;
        case 0x1bd314u: goto label_1bd314;
        case 0x1bd318u: goto label_1bd318;
        case 0x1bd31cu: goto label_1bd31c;
        case 0x1bd320u: goto label_1bd320;
        case 0x1bd324u: goto label_1bd324;
        case 0x1bd328u: goto label_1bd328;
        case 0x1bd32cu: goto label_1bd32c;
        case 0x1bd330u: goto label_1bd330;
        case 0x1bd334u: goto label_1bd334;
        case 0x1bd338u: goto label_1bd338;
        case 0x1bd33cu: goto label_1bd33c;
        case 0x1bd340u: goto label_1bd340;
        case 0x1bd344u: goto label_1bd344;
        case 0x1bd348u: goto label_1bd348;
        case 0x1bd34cu: goto label_1bd34c;
        case 0x1bd350u: goto label_1bd350;
        case 0x1bd354u: goto label_1bd354;
        case 0x1bd358u: goto label_1bd358;
        case 0x1bd35cu: goto label_1bd35c;
        case 0x1bd360u: goto label_1bd360;
        case 0x1bd364u: goto label_1bd364;
        case 0x1bd368u: goto label_1bd368;
        case 0x1bd36cu: goto label_1bd36c;
        case 0x1bd370u: goto label_1bd370;
        case 0x1bd374u: goto label_1bd374;
        case 0x1bd378u: goto label_1bd378;
        case 0x1bd37cu: goto label_1bd37c;
        case 0x1bd380u: goto label_1bd380;
        case 0x1bd384u: goto label_1bd384;
        case 0x1bd388u: goto label_1bd388;
        case 0x1bd38cu: goto label_1bd38c;
        case 0x1bd390u: goto label_1bd390;
        case 0x1bd394u: goto label_1bd394;
        case 0x1bd398u: goto label_1bd398;
        case 0x1bd39cu: goto label_1bd39c;
        case 0x1bd3a0u: goto label_1bd3a0;
        case 0x1bd3a4u: goto label_1bd3a4;
        case 0x1bd3a8u: goto label_1bd3a8;
        case 0x1bd3acu: goto label_1bd3ac;
        case 0x1bd3b0u: goto label_1bd3b0;
        case 0x1bd3b4u: goto label_1bd3b4;
        case 0x1bd3b8u: goto label_1bd3b8;
        case 0x1bd3bcu: goto label_1bd3bc;
        case 0x1bd3c0u: goto label_1bd3c0;
        case 0x1bd3c4u: goto label_1bd3c4;
        case 0x1bd3c8u: goto label_1bd3c8;
        case 0x1bd3ccu: goto label_1bd3cc;
        case 0x1bd3d0u: goto label_1bd3d0;
        case 0x1bd3d4u: goto label_1bd3d4;
        case 0x1bd3d8u: goto label_1bd3d8;
        case 0x1bd3dcu: goto label_1bd3dc;
        case 0x1bd3e0u: goto label_1bd3e0;
        case 0x1bd3e4u: goto label_1bd3e4;
        case 0x1bd3e8u: goto label_1bd3e8;
        case 0x1bd3ecu: goto label_1bd3ec;
        case 0x1bd3f0u: goto label_1bd3f0;
        case 0x1bd3f4u: goto label_1bd3f4;
        default: break;
    }

    ctx->pc = 0x1bd1f0u;

label_1bd1f0:
    // 0x1bd1f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bd1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1bd1f4:
    // 0x1bd1f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1bd1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1bd1f8:
    // 0x1bd1f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bd1f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd1fc:
    // 0x1bd1fc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1bd1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1bd200:
    // 0x1bd200: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1bd200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1bd204:
    // 0x1bd204: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1bd204u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd208:
    // 0x1bd208: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1bd208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1bd20c:
    // 0x1bd20c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bd20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1bd210:
    // 0x1bd210: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bd210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1bd214:
    // 0x1bd214: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1bd214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1bd218:
    // 0x1bd218: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1bd218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1bd21c:
    // 0x1bd21c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1bd21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1bd220:
    // 0x1bd220: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1bd220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1bd224:
    // 0x1bd224: 0xc06d2f8  jal         func_1B4BE0
label_1bd228:
    if (ctx->pc == 0x1BD228u) {
        ctx->pc = 0x1BD228u;
            // 0x1bd228: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->pc = 0x1BD22Cu;
        goto label_1bd22c;
    }
    ctx->pc = 0x1BD224u;
    SET_GPR_U32(ctx, 31, 0x1BD22Cu);
    ctx->pc = 0x1BD228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD224u;
            // 0x1bd228: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BE0u;
    if (runtime->hasFunction(0x1B4BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD22Cu; }
        if (ctx->pc != 0x1BD22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4BE0_0x1b4be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD22Cu; }
        if (ctx->pc != 0x1BD22Cu) { return; }
    }
    ctx->pc = 0x1BD22Cu;
label_1bd22c:
    // 0x1bd22c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1bd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1bd230:
    // 0x1bd230: 0x0  nop
    ctx->pc = 0x1bd230u;
    // NOP
label_1bd234:
    // 0x1bd234: 0xc06d89c  jal         func_1B6270
label_1bd238:
    if (ctx->pc == 0x1BD238u) {
        ctx->pc = 0x1BD238u;
            // 0x1bd238: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x1BD23Cu;
        goto label_1bd23c;
    }
    ctx->pc = 0x1BD234u;
    SET_GPR_U32(ctx, 31, 0x1BD23Cu);
    ctx->pc = 0x1BD238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD234u;
            // 0x1bd238: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6270u;
    if (runtime->hasFunction(0x1B6270u)) {
        auto targetFn = runtime->lookupFunction(0x1B6270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD23Cu; }
        if (ctx->pc != 0x1BD23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6270_0x1b6270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD23Cu; }
        if (ctx->pc != 0x1BD23Cu) { return; }
    }
    ctx->pc = 0x1BD23Cu;
label_1bd23c:
    // 0x1bd23c: 0xc06b48e  jal         func_1AD238
label_1bd240:
    if (ctx->pc == 0x1BD240u) {
        ctx->pc = 0x1BD240u;
            // 0x1bd240: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD244u;
        goto label_1bd244;
    }
    ctx->pc = 0x1BD23Cu;
    SET_GPR_U32(ctx, 31, 0x1BD244u);
    ctx->pc = 0x1BD240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD23Cu;
            // 0x1bd240: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD244u; }
        if (ctx->pc != 0x1BD244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD244u; }
        if (ctx->pc != 0x1BD244u) { return; }
    }
    ctx->pc = 0x1BD244u;
label_1bd244:
    // 0x1bd244: 0x1ae00014  blez        $s7, . + 4 + (0x14 << 2)
label_1bd248:
    if (ctx->pc == 0x1BD248u) {
        ctx->pc = 0x1BD248u;
            // 0x1bd248: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->pc = 0x1BD24Cu;
        goto label_1bd24c;
    }
    ctx->pc = 0x1BD244u;
    {
        const bool branch_taken_0x1bd244 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x1BD248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD244u;
            // 0x1bd248: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd244) {
            ctx->pc = 0x1BD298u;
            goto label_1bd298;
        }
    }
    ctx->pc = 0x1BD24Cu;
label_1bd24c:
    // 0x1bd24c: 0x26d10018  addiu       $s1, $s6, 0x18
    ctx->pc = 0x1bd24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_1bd250:
    // 0x1bd250: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bd250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bd254:
    // 0x1bd254: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1bd254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1bd258:
    // 0x1bd258: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x1bd258u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_1bd25c:
    // 0x1bd25c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bd25cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1bd260:
    // 0x1bd260: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd264:
    // 0x1bd264: 0x153040  sll         $a2, $s5, 1
    ctx->pc = 0x1bd264u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_1bd268:
    // 0x1bd268: 0x3b03821  addu        $a3, $sp, $s0
    ctx->pc = 0x1bd268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_1bd26c:
    // 0x1bd26c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1bd270:
    // 0x1bd270: 0x40f809  jalr        $v0
label_1bd274:
    if (ctx->pc == 0x1BD274u) {
        ctx->pc = 0x1BD274u;
            // 0x1bd274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD278u;
        goto label_1bd278;
    }
    ctx->pc = 0x1BD270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD278u);
        ctx->pc = 0x1BD274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD270u;
            // 0x1bd274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD278u; }
            if (ctx->pc != 0x1BD278u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD278u;
label_1bd278:
    // 0x1bd278: 0x297202a  slt         $a0, $s4, $s7
    ctx->pc = 0x1bd278u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1bd27c:
    // 0x1bd27c: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1bd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1bd280:
    // 0x1bd280: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x1bd280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1bd284:
    // 0x1bd284: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bd288:
    // 0x1bd288: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1bd288u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1bd28c:
    // 0x1bd28c: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x1bd28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_1bd290:
    // 0x1bd290: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
label_1bd294:
    if (ctx->pc == 0x1BD294u) {
        ctx->pc = 0x1BD294u;
            // 0x1bd294: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->pc = 0x1BD298u;
        goto label_1bd298;
    }
    ctx->pc = 0x1BD290u;
    {
        const bool branch_taken_0x1bd290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD290u;
            // 0x1bd294: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd290) {
            ctx->pc = 0x1BD250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bd250;
        }
    }
    ctx->pc = 0x1BD298u;
label_1bd298:
    // 0x1bd298: 0x1ae00024  blez        $s7, . + 4 + (0x24 << 2)
label_1bd29c:
    if (ctx->pc == 0x1BD29Cu) {
        ctx->pc = 0x1BD29Cu;
            // 0x1bd29c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD2A0u;
        goto label_1bd2a0;
    }
    ctx->pc = 0x1BD298u;
    {
        const bool branch_taken_0x1bd298 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x1BD29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD298u;
            // 0x1bd29c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd298) {
            ctx->pc = 0x1BD32Cu;
            goto label_1bd32c;
        }
    }
    ctx->pc = 0x1BD2A0u;
label_1bd2a0:
    // 0x1bd2a0: 0x15f040  sll         $fp, $s5, 1
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_1bd2a4:
    // 0x1bd2a4: 0x26d30018  addiu       $s3, $s6, 0x18
    ctx->pc = 0x1bd2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_1bd2a8:
    // 0x1bd2a8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1bd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bd2ac:
    // 0x1bd2ac: 0x0  nop
    ctx->pc = 0x1bd2acu;
    // NOP
label_1bd2b0:
    // 0x1bd2b0: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_1bd2b4:
    // 0x1bd2b4: 0x3b08821  addu        $s1, $sp, $s0
    ctx->pc = 0x1bd2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_1bd2b8:
    // 0x1bd2b8: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x1bd2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1bd2bc:
    // 0x1bd2bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bd2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bd2c0:
    // 0x1bd2c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bd2c4:
    // 0x1bd2c4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1bd2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1bd2c8:
    // 0x1bd2c8: 0xc07337e  jal         func_1CCDF8
label_1bd2cc:
    if (ctx->pc == 0x1BD2CCu) {
        ctx->pc = 0x1BD2CCu;
            // 0x1bd2cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD2D0u;
        goto label_1bd2d0;
    }
    ctx->pc = 0x1BD2C8u;
    SET_GPR_U32(ctx, 31, 0x1BD2D0u);
    ctx->pc = 0x1BD2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2C8u;
            // 0x1bd2cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2D0u; }
        if (ctx->pc != 0x1BD2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2D0u; }
        if (ctx->pc != 0x1BD2D0u) { return; }
    }
    ctx->pc = 0x1BD2D0u;
label_1bd2d0:
    // 0x1bd2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd2d4:
    // 0x1bd2d4: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1bd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1bd2d8:
    // 0x1bd2d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bd2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bd2dc:
    // 0x1bd2dc: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x1bd2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1bd2e0:
    // 0x1bd2e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bd2e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1bd2e4:
    // 0x1bd2e4: 0xc049cb6  jal         func_1272D8
label_1bd2e8:
    if (ctx->pc == 0x1BD2E8u) {
        ctx->pc = 0x1BD2E8u;
            // 0x1bd2e8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1BD2ECu;
        goto label_1bd2ec;
    }
    ctx->pc = 0x1BD2E4u;
    SET_GPR_U32(ctx, 31, 0x1BD2ECu);
    ctx->pc = 0x1BD2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2E4u;
            // 0x1bd2e8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2ECu; }
        if (ctx->pc != 0x1BD2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2ECu; }
        if (ctx->pc != 0x1BD2ECu) { return; }
    }
    ctx->pc = 0x1BD2ECu;
label_1bd2ec:
    // 0x1bd2ec: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1bd2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1bd2f0:
    // 0x1bd2f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bd2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bd2f4:
    // 0x1bd2f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd2f8:
    // 0x1bd2f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bd2fc:
    // 0x1bd2fc: 0x40f809  jalr        $v0
label_1bd300:
    if (ctx->pc == 0x1BD300u) {
        ctx->pc = 0x1BD300u;
            // 0x1bd300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BD304u;
        goto label_1bd304;
    }
    ctx->pc = 0x1BD2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD304u);
        ctx->pc = 0x1BD300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2FCu;
            // 0x1bd300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD304u; }
            if (ctx->pc != 0x1BD304u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD304u;
label_1bd304:
    // 0x1bd304: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1bd308:
    // 0x1bd308: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bd30c:
    // 0x1bd30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd310:
    // 0x1bd310: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd314:
    // 0x1bd314: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bd314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bd318:
    // 0x1bd318: 0x40f809  jalr        $v0
label_1bd31c:
    if (ctx->pc == 0x1BD31Cu) {
        ctx->pc = 0x1BD31Cu;
            // 0x1bd31c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x1BD320u;
        goto label_1bd320;
    }
    ctx->pc = 0x1BD318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD320u);
        ctx->pc = 0x1BD31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD318u;
            // 0x1bd31c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD320u; }
            if (ctx->pc != 0x1BD320u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD320u;
label_1bd320:
    // 0x1bd320: 0x297182a  slt         $v1, $s4, $s7
    ctx->pc = 0x1bd320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1bd324:
    // 0x1bd324: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_1bd328:
    if (ctx->pc == 0x1BD328u) {
        ctx->pc = 0x1BD328u;
            // 0x1bd328: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BD32Cu;
        goto label_1bd32c;
    }
    ctx->pc = 0x1BD324u;
    {
        const bool branch_taken_0x1bd324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD324u;
            // 0x1bd328: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd324) {
            ctx->pc = 0x1BD2B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bd2b0;
        }
    }
    ctx->pc = 0x1BD32Cu;
label_1bd32c:
    // 0x1bd32c: 0x8ec200a8  lw          $v0, 0xA8($s6)
    ctx->pc = 0x1bd32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_1bd330:
    // 0x1bd330: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bd330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd334:
    // 0x1bd334: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1bd334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1bd338:
    // 0x1bd338: 0xc06b494  jal         func_1AD250
label_1bd33c:
    if (ctx->pc == 0x1BD33Cu) {
        ctx->pc = 0x1BD33Cu;
            // 0x1bd33c: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
        ctx->pc = 0x1BD340u;
        goto label_1bd340;
    }
    ctx->pc = 0x1BD338u;
    SET_GPR_U32(ctx, 31, 0x1BD340u);
    ctx->pc = 0x1BD33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD338u;
            // 0x1bd33c: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD340u; }
        if (ctx->pc != 0x1BD340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD340u; }
        if (ctx->pc != 0x1BD340u) { return; }
    }
    ctx->pc = 0x1BD340u;
label_1bd340:
    // 0x1bd340: 0x1ae0000e  blez        $s7, . + 4 + (0xE << 2)
label_1bd344:
    if (ctx->pc == 0x1BD344u) {
        ctx->pc = 0x1BD348u;
        goto label_1bd348;
    }
    ctx->pc = 0x1BD340u;
    {
        const bool branch_taken_0x1bd340 = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x1bd340) {
            ctx->pc = 0x1BD37Cu;
            goto label_1bd37c;
        }
    }
    ctx->pc = 0x1BD348u;
label_1bd348:
    // 0x1bd348: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1bd348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bd34c:
    // 0x1bd34c: 0x26d00018  addiu       $s0, $s6, 0x18
    ctx->pc = 0x1bd34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_1bd350:
    // 0x1bd350: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bd350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bd354:
    // 0x1bd354: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1bd354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1bd358:
    // 0x1bd358: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd35c:
    // 0x1bd35c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd360:
    // 0x1bd360: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1bd364:
    // 0x1bd364: 0x40f809  jalr        $v0
label_1bd368:
    if (ctx->pc == 0x1BD368u) {
        ctx->pc = 0x1BD368u;
            // 0x1bd368: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->pc = 0x1BD36Cu;
        goto label_1bd36c;
    }
    ctx->pc = 0x1BD364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD36Cu);
        ctx->pc = 0x1BD368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD364u;
            // 0x1bd368: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD36Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD36Cu; }
            if (ctx->pc != 0x1BD36Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD36Cu;
label_1bd36c:
    // 0x1bd36c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1bd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1bd370:
    // 0x1bd370: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x1bd370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1bd374:
    // 0x1bd374: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
label_1bd378:
    if (ctx->pc == 0x1BD378u) {
        ctx->pc = 0x1BD378u;
            // 0x1bd378: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->pc = 0x1BD37Cu;
        goto label_1bd37c;
    }
    ctx->pc = 0x1BD374u;
    {
        const bool branch_taken_0x1bd374 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD374u;
            // 0x1bd378: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd374) {
            ctx->pc = 0x1BD350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bd350;
        }
    }
    ctx->pc = 0x1BD37Cu;
label_1bd37c:
    // 0x1bd37c: 0xc06d2f8  jal         func_1B4BE0
label_1bd380:
    if (ctx->pc == 0x1BD380u) {
        ctx->pc = 0x1BD380u;
            // 0x1bd380: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->pc = 0x1BD384u;
        goto label_1bd384;
    }
    ctx->pc = 0x1BD37Cu;
    SET_GPR_U32(ctx, 31, 0x1BD384u);
    ctx->pc = 0x1BD380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD37Cu;
            // 0x1bd380: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BE0u;
    if (runtime->hasFunction(0x1B4BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD384u; }
        if (ctx->pc != 0x1BD384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4BE0_0x1b4be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD384u; }
        if (ctx->pc != 0x1BD384u) { return; }
    }
    ctx->pc = 0x1BD384u;
label_1bd384:
    // 0x1bd384: 0x8ec300a8  lw          $v1, 0xA8($s6)
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_1bd388:
    // 0x1bd388: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1bd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1bd38c:
    // 0x1bd38c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bd390:
    // 0x1bd390: 0x5c40000d  bgtzl       $v0, . + 4 + (0xD << 2)
label_1bd394:
    if (ctx->pc == 0x1BD394u) {
        ctx->pc = 0x1BD394u;
            // 0x1bd394: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1BD398u;
        goto label_1bd398;
    }
    ctx->pc = 0x1BD390u;
    {
        const bool branch_taken_0x1bd390 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1bd390) {
            ctx->pc = 0x1BD394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD390u;
            // 0x1bd394: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD3C8u;
            goto label_1bd3c8;
        }
    }
    ctx->pc = 0x1BD398u;
label_1bd398:
    // 0x1bd398: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x1bd398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1bd39c:
    // 0x1bd39c: 0xc06d2e6  jal         func_1B4B98
label_1bd3a0:
    if (ctx->pc == 0x1BD3A0u) {
        ctx->pc = 0x1BD3A0u;
            // 0x1bd3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD3A4u;
        goto label_1bd3a4;
    }
    ctx->pc = 0x1BD39Cu;
    SET_GPR_U32(ctx, 31, 0x1BD3A4u);
    ctx->pc = 0x1BD3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD39Cu;
            // 0x1bd3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B98u;
    if (runtime->hasFunction(0x1B4B98u)) {
        auto targetFn = runtime->lookupFunction(0x1B4B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3A4u; }
        if (ctx->pc != 0x1BD3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4B98_0x1b4b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3A4u; }
        if (ctx->pc != 0x1BD3A4u) { return; }
    }
    ctx->pc = 0x1BD3A4u;
label_1bd3a4:
    // 0x1bd3a4: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x1bd3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1bd3a8:
    // 0x1bd3a8: 0xc06d2ec  jal         func_1B4BB0
label_1bd3ac:
    if (ctx->pc == 0x1BD3ACu) {
        ctx->pc = 0x1BD3ACu;
            // 0x1bd3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD3B0u;
        goto label_1bd3b0;
    }
    ctx->pc = 0x1BD3A8u;
    SET_GPR_U32(ctx, 31, 0x1BD3B0u);
    ctx->pc = 0x1BD3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3A8u;
            // 0x1bd3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BB0u;
    if (runtime->hasFunction(0x1B4BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3B0u; }
        if (ctx->pc != 0x1BD3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4BB0_0x1b4bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3B0u; }
        if (ctx->pc != 0x1BD3B0u) { return; }
    }
    ctx->pc = 0x1BD3B0u;
label_1bd3b0:
    // 0x1bd3b0: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1bd3b4:
    // 0x1bd3b4: 0xc072778  jal         func_1C9DE0
label_1bd3b8:
    if (ctx->pc == 0x1BD3B8u) {
        ctx->pc = 0x1BD3B8u;
            // 0x1bd3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BD3BCu;
        goto label_1bd3bc;
    }
    ctx->pc = 0x1BD3B4u;
    SET_GPR_U32(ctx, 31, 0x1BD3BCu);
    ctx->pc = 0x1BD3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3B4u;
            // 0x1bd3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9DE0u;
    if (runtime->hasFunction(0x1C9DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C9DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3BCu; }
        if (ctx->pc != 0x1BD3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9DE0_0x1c9de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3BCu; }
        if (ctx->pc != 0x1BD3BCu) { return; }
    }
    ctx->pc = 0x1BD3BCu;
label_1bd3bc:
    // 0x1bd3bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bd3c0:
    // 0x1bd3c0: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x1bd3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
label_1bd3c4:
    // 0x1bd3c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bd3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd3c8:
    // 0x1bd3c8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bd3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bd3cc:
    // 0x1bd3cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bd3ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bd3d0:
    // 0x1bd3d0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1bd3d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1bd3d4:
    // 0x1bd3d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bd3d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bd3d8:
    // 0x1bd3d8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1bd3d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1bd3dc:
    // 0x1bd3dc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1bd3dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bd3e0:
    // 0x1bd3e0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1bd3e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1bd3e4:
    // 0x1bd3e4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1bd3e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bd3e8:
    // 0x1bd3e8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1bd3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd3ec:
    // 0x1bd3ec: 0x3e00008  jr          $ra
label_1bd3f0:
    if (ctx->pc == 0x1BD3F0u) {
        ctx->pc = 0x1BD3F0u;
            // 0x1bd3f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1BD3F4u;
        goto label_1bd3f4;
    }
    ctx->pc = 0x1BD3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3ECu;
            // 0x1bd3f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD3F4u;
label_1bd3f4:
    // 0x1bd3f4: 0x0  nop
    ctx->pc = 0x1bd3f4u;
    // NOP
    ctx->pc = 0x1bd3f8u;
}
