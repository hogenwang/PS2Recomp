#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C230
// Address: 0x26c230 - 0x26c428
void sub_0026C230_0x26c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C230_0x26c230");
#endif

    switch (ctx->pc) {
        case 0x26c270u: goto label_26c270;
        case 0x26c28cu: goto label_26c28c;
        case 0x26c2a4u: goto label_26c2a4;
        case 0x26c2b4u: goto label_26c2b4;
        case 0x26c2c0u: goto label_26c2c0;
        case 0x26c2d4u: goto label_26c2d4;
        case 0x26c2ecu: goto label_26c2ec;
        case 0x26c308u: goto label_26c308;
        case 0x26c320u: goto label_26c320;
        case 0x26c344u: goto label_26c344;
        case 0x26c35cu: goto label_26c35c;
        case 0x26c370u: goto label_26c370;
        case 0x26c388u: goto label_26c388;
        case 0x26c3acu: goto label_26c3ac;
        case 0x26c3d4u: goto label_26c3d4;
        case 0x26c3e8u: goto label_26c3e8;
        case 0x26c3f0u: goto label_26c3f0;
        case 0x26c400u: goto label_26c400;
        default: break;
    }

    ctx->pc = 0x26c230u;

    // 0x26c230: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x26c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x26c234: 0x24020224  addiu       $v0, $zero, 0x224
    ctx->pc = 0x26c234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
    // 0x26c238: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x26c238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x26c23c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c240: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x26c240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x26c244: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26c244u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c248: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26c248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c24c: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x26c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x26c250: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x26c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x26c254: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c258: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x26c258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x26c25c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c260: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x26c260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x26c264: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x26c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x26c268: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x26C268u;
    SET_GPR_U32(ctx, 31, 0x26C270u);
    ctx->pc = 0x26C26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C268u;
            // 0x26c26c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C270u; }
        if (ctx->pc != 0x26C270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C270u; }
        if (ctx->pc != 0x26C270u) { return; }
    }
    ctx->pc = 0x26C270u;
label_26c270:
    // 0x26c270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c274: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C274u;
    {
        const bool branch_taken_0x26c274 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x26C278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C274u;
            // 0x26c278: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c274) {
            ctx->pc = 0x26C294u;
            goto label_26c294;
        }
    }
    ctx->pc = 0x26C27Cu;
    // 0x26c27c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c280: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c284: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C284u;
    SET_GPR_U32(ctx, 31, 0x26C28Cu);
    ctx->pc = 0x26C288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C284u;
            // 0x26c288: 0x24a58ab0  addiu       $a1, $a1, -0x7550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C28Cu; }
        if (ctx->pc != 0x26C28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C28Cu; }
        if (ctx->pc != 0x26C28Cu) { return; }
    }
    ctx->pc = 0x26C28Cu;
label_26c28c:
    // 0x26c28c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x26C28Cu;
    {
        const bool branch_taken_0x26c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C28Cu;
            // 0x26c290: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c28c) {
            ctx->pc = 0x26C404u;
            goto label_26c404;
        }
    }
    ctx->pc = 0x26C294u;
label_26c294:
    // 0x26c294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c29c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26C29Cu;
    SET_GPR_U32(ctx, 31, 0x26C2A4u);
    ctx->pc = 0x26C2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C29Cu;
            // 0x26c2a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2A4u; }
        if (ctx->pc != 0x26C2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2A4u; }
        if (ctx->pc != 0x26C2A4u) { return; }
    }
    ctx->pc = 0x26C2A4u;
label_26c2a4:
    // 0x26c2a4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x26c2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c2a8: 0xa3b30041  sb          $s3, 0x41($sp)
    ctx->pc = 0x26c2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 19));
    // 0x26c2ac: 0xc08a254  jal         func_228950
    ctx->pc = 0x26C2ACu;
    SET_GPR_U32(ctx, 31, 0x26C2B4u);
    ctx->pc = 0x26C2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2ACu;
            // 0x26c2b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2B4u; }
        if (ctx->pc != 0x26C2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2B4u; }
        if (ctx->pc != 0x26C2B4u) { return; }
    }
    ctx->pc = 0x26C2B4u;
label_26c2b4:
    // 0x26c2b4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x26c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x26c2b8: 0xc08a262  jal         func_228988
    ctx->pc = 0x26C2B8u;
    SET_GPR_U32(ctx, 31, 0x26C2C0u);
    ctx->pc = 0x26C2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2B8u;
            // 0x26c2bc: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2C0u; }
        if (ctx->pc != 0x26C2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2C0u; }
        if (ctx->pc != 0x26C2C0u) { return; }
    }
    ctx->pc = 0x26C2C0u;
label_26c2c0:
    // 0x26c2c0: 0xa7a20042  sh          $v0, 0x42($sp)
    ctx->pc = 0x26c2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x26c2c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2cc: 0xc0973ee  jal         func_25CFB8
    ctx->pc = 0x26C2CCu;
    SET_GPR_U32(ctx, 31, 0x26C2D4u);
    ctx->pc = 0x26C2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2CCu;
            // 0x26c2d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CFB8u;
    if (runtime->hasFunction(0x25CFB8u)) {
        auto targetFn = runtime->lookupFunction(0x25CFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2D4u; }
        if (ctx->pc != 0x26C2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CFB8_0x25cfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2D4u; }
        if (ctx->pc != 0x26C2D4u) { return; }
    }
    ctx->pc = 0x26C2D4u;
label_26c2d4:
    // 0x26c2d4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C2D4u;
    {
        const bool branch_taken_0x26c2d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26C2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2D4u;
            // 0x26c2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2d4) {
            ctx->pc = 0x26C2F4u;
            goto label_26c2f4;
        }
    }
    ctx->pc = 0x26C2DCu;
    // 0x26c2dc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c2e0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c2e4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C2E4u;
    SET_GPR_U32(ctx, 31, 0x26C2ECu);
    ctx->pc = 0x26C2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2E4u;
            // 0x26c2e8: 0x24a58af0  addiu       $a1, $a1, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2ECu; }
        if (ctx->pc != 0x26C2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2ECu; }
        if (ctx->pc != 0x26C2ECu) { return; }
    }
    ctx->pc = 0x26C2ECu;
label_26c2ec:
    // 0x26c2ec: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x26C2ECu;
    {
        const bool branch_taken_0x26c2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c2ec) {
            ctx->pc = 0x26C3F8u;
            goto label_26c3f8;
        }
    }
    ctx->pc = 0x26C2F4u;
label_26c2f4:
    // 0x26c2f4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x26c2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26c2f8: 0x24061001  addiu       $a2, $zero, 0x1001
    ctx->pc = 0x26c2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x26c2fc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x26c2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26c300: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x26C300u;
    SET_GPR_U32(ctx, 31, 0x26C308u);
    ctx->pc = 0x26C304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C300u;
            // 0x26c304: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (runtime->hasFunction(0x25DF38u)) {
        auto targetFn = runtime->lookupFunction(0x25DF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C308u; }
        if (ctx->pc != 0x26C308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025DF38_0x25df38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C308u; }
        if (ctx->pc != 0x26C308u) { return; }
    }
    ctx->pc = 0x26C308u;
label_26c308:
    // 0x26c308: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C308u;
    {
        const bool branch_taken_0x26c308 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26C30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C308u;
            // 0x26c30c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c308) {
            ctx->pc = 0x26C328u;
            goto label_26c328;
        }
    }
    ctx->pc = 0x26C310u;
    // 0x26c310: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c314: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c318: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C318u;
    SET_GPR_U32(ctx, 31, 0x26C320u);
    ctx->pc = 0x26C31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C318u;
            // 0x26c31c: 0x24a58b18  addiu       $a1, $a1, -0x74E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C320u; }
        if (ctx->pc != 0x26C320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C320u; }
        if (ctx->pc != 0x26C320u) { return; }
    }
    ctx->pc = 0x26C320u;
label_26c320:
    // 0x26c320: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x26C320u;
    {
        const bool branch_taken_0x26c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c320) {
            ctx->pc = 0x26C3F8u;
            goto label_26c3f8;
        }
    }
    ctx->pc = 0x26C328u;
label_26c328:
    // 0x26c328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c32c: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x26c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
    // 0x26c330: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x26c330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26c334: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x26c334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x26c338: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x26c338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x26c33c: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x26C33Cu;
    SET_GPR_U32(ctx, 31, 0x26C344u);
    ctx->pc = 0x26C340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C33Cu;
            // 0x26c340: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (runtime->hasFunction(0x25DF38u)) {
        auto targetFn = runtime->lookupFunction(0x25DF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C344u; }
        if (ctx->pc != 0x26C344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025DF38_0x25df38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C344u; }
        if (ctx->pc != 0x26C344u) { return; }
    }
    ctx->pc = 0x26C344u;
label_26c344:
    // 0x26c344: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C344u;
    {
        const bool branch_taken_0x26c344 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C344u;
            // 0x26c348: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c344) {
            ctx->pc = 0x26C364u;
            goto label_26c364;
        }
    }
    ctx->pc = 0x26C34Cu;
    // 0x26c34c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c350: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c354: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C354u;
    SET_GPR_U32(ctx, 31, 0x26C35Cu);
    ctx->pc = 0x26C358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C354u;
            // 0x26c358: 0x24a58b50  addiu       $a1, $a1, -0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C35Cu; }
        if (ctx->pc != 0x26C35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C35Cu; }
        if (ctx->pc != 0x26C35Cu) { return; }
    }
    ctx->pc = 0x26C35Cu;
label_26c35c:
    // 0x26c35c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x26C35Cu;
    {
        const bool branch_taken_0x26c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c35c) {
            ctx->pc = 0x26C3F8u;
            goto label_26c3f8;
        }
    }
    ctx->pc = 0x26C364u;
label_26c364:
    // 0x26c364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c368: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26C368u;
    SET_GPR_U32(ctx, 31, 0x26C370u);
    ctx->pc = 0x26C36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C368u;
            // 0x26c36c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C370u; }
        if (ctx->pc != 0x26C370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C370u; }
        if (ctx->pc != 0x26C370u) { return; }
    }
    ctx->pc = 0x26C370u;
label_26c370:
    // 0x26c370: 0x8a830003  lwl         $v1, 0x3($s4)
    ctx->pc = 0x26c370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x26c374: 0x9a830000  lwr         $v1, 0x0($s4)
    ctx->pc = 0x26c374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x26c378: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x26c378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x26c37c: 0xa3b30001  sb          $s3, 0x1($sp)
    ctx->pc = 0x26c37cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x26c380: 0xc08a262  jal         func_228988
    ctx->pc = 0x26C380u;
    SET_GPR_U32(ctx, 31, 0x26C388u);
    ctx->pc = 0x26C384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C380u;
            // 0x26c384: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C388u; }
        if (ctx->pc != 0x26C388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C388u; }
        if (ctx->pc != 0x26C388u) { return; }
    }
    ctx->pc = 0x26C388u;
label_26c388:
    // 0x26c388: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x26c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c38c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x26c38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c390: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x26c390u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x26c394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c398: 0xafb50030  sw          $s5, 0x30($sp)
    ctx->pc = 0x26c398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
    // 0x26c39c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3a0: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x26c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x26c3a4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26C3A4u;
    SET_GPR_U32(ctx, 31, 0x26C3ACu);
    ctx->pc = 0x26C3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3A4u;
            // 0x26c3a8: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3ACu; }
        if (ctx->pc != 0x26C3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3ACu; }
        if (ctx->pc != 0x26C3ACu) { return; }
    }
    ctx->pc = 0x26C3ACu;
label_26c3ac:
    // 0x26c3ac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x26c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26c3b0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26c3b4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x26c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x26c3b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3bc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x26c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x26c3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3c4: 0xafb2001c  sw          $s2, 0x1C($sp)
    ctx->pc = 0x26c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 18));
    // 0x26c3c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3cc: 0xc0975a8  jal         func_25D6A0
    ctx->pc = 0x26C3CCu;
    SET_GPR_U32(ctx, 31, 0x26C3D4u);
    ctx->pc = 0x26C3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3CCu;
            // 0x26c3d0: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D6A0u;
    if (runtime->hasFunction(0x25D6A0u)) {
        auto targetFn = runtime->lookupFunction(0x25D6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3D4u; }
        if (ctx->pc != 0x26C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D6A0_0x25d6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3D4u; }
        if (ctx->pc != 0x26C3D4u) { return; }
    }
    ctx->pc = 0x26C3D4u;
label_26c3d4:
    // 0x26c3d4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C3D4u;
    {
        const bool branch_taken_0x26c3d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3D4u;
            // 0x26c3d8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3d4) {
            ctx->pc = 0x26C3E8u;
            goto label_26c3e8;
        }
    }
    ctx->pc = 0x26C3DCu;
    // 0x26c3dc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c3e0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C3E0u;
    SET_GPR_U32(ctx, 31, 0x26C3E8u);
    ctx->pc = 0x26C3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3E0u;
            // 0x26c3e4: 0x24a58b88  addiu       $a1, $a1, -0x7478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3E8u; }
        if (ctx->pc != 0x26C3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3E8u; }
        if (ctx->pc != 0x26C3E8u) { return; }
    }
    ctx->pc = 0x26C3E8u;
label_26c3e8:
    // 0x26c3e8: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x26C3E8u;
    SET_GPR_U32(ctx, 31, 0x26C3F0u);
    ctx->pc = 0x26C3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3E8u;
            // 0x26c3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3F0u; }
        if (ctx->pc != 0x26C3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3F0u; }
        if (ctx->pc != 0x26C3F0u) { return; }
    }
    ctx->pc = 0x26C3F0u;
label_26c3f0:
    // 0x26c3f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26C3F0u;
    {
        const bool branch_taken_0x26c3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3F0u;
            // 0x26c3f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3f0) {
            ctx->pc = 0x26C404u;
            goto label_26c404;
        }
    }
    ctx->pc = 0x26C3F8u;
label_26c3f8:
    // 0x26c3f8: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x26C3F8u;
    SET_GPR_U32(ctx, 31, 0x26C400u);
    ctx->pc = 0x26C3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3F8u;
            // 0x26c3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C400u; }
        if (ctx->pc != 0x26C400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C400u; }
        if (ctx->pc != 0x26C400u) { return; }
    }
    ctx->pc = 0x26C400u;
label_26c400:
    // 0x26c400: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26c404:
    // 0x26c404: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x26c404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26c408: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x26c408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26c40c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x26c40cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c410: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x26c410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26c414: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x26c414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26c418: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x26c418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c41c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x26c41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c420: 0x3e00008  jr          $ra
    ctx->pc = 0x26C420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C420u;
            // 0x26c424: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C428u;
    ctx->pc = 0x26c428u;
}
