#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E200
// Address: 0x11e200 - 0x11e6d8
void sub_0011E200_0x11e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E200_0x11e200");
#endif

    switch (ctx->pc) {
        case 0x11e250u: goto label_11e250;
        case 0x11e27cu: goto label_11e27c;
        case 0x11e294u: goto label_11e294;
        case 0x11e2b0u: goto label_11e2b0;
        case 0x11e2b8u: goto label_11e2b8;
        case 0x11e2c0u: goto label_11e2c0;
        case 0x11e2c8u: goto label_11e2c8;
        case 0x11e2d0u: goto label_11e2d0;
        case 0x11e2f0u: goto label_11e2f0;
        case 0x11e304u: goto label_11e304;
        case 0x11e308u: goto label_11e308;
        case 0x11e338u: goto label_11e338;
        case 0x11e354u: goto label_11e354;
        case 0x11e360u: goto label_11e360;
        case 0x11e3a4u: goto label_11e3a4;
        case 0x11e3c0u: goto label_11e3c0;
        case 0x11e3ccu: goto label_11e3cc;
        case 0x11e3f4u: goto label_11e3f4;
        case 0x11e400u: goto label_11e400;
        case 0x11e40cu: goto label_11e40c;
        case 0x11e438u: goto label_11e438;
        case 0x11e444u: goto label_11e444;
        case 0x11e450u: goto label_11e450;
        case 0x11e464u: goto label_11e464;
        case 0x11e474u: goto label_11e474;
        case 0x11e4ccu: goto label_11e4cc;
        case 0x11e4e0u: goto label_11e4e0;
        case 0x11e4e8u: goto label_11e4e8;
        case 0x11e504u: goto label_11e504;
        case 0x11e50cu: goto label_11e50c;
        case 0x11e514u: goto label_11e514;
        case 0x11e528u: goto label_11e528;
        case 0x11e594u: goto label_11e594;
        case 0x11e5d8u: goto label_11e5d8;
        case 0x11e5e8u: goto label_11e5e8;
        case 0x11e658u: goto label_11e658;
        case 0x11e698u: goto label_11e698;
        case 0x11e6a8u: goto label_11e6a8;
        case 0x11e6b8u: goto label_11e6b8;
        default: break;
    }

    ctx->pc = 0x11e200u;

    // 0x11e200: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11e204: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x11e204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x11e208: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x11e208u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x11e20c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x11e20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x11e210: 0x8e42b9dc  lw          $v0, -0x4624($s2)
    ctx->pc = 0x11e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    // 0x11e214: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11e214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e218: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11e218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11e21c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x11e21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x11e220: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x11e220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x11e224: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11E224u;
    {
        const bool branch_taken_0x11e224 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E224u;
        // 0x11e228: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e224) {
            ctx->pc = 0x11E2A0u;
            goto label_11e2a0;
        }
    }
    ctx->pc = 0x11E22Cu;
    // 0x11e22c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x11e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x11e230: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11e230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e234: 0x2442b548  addiu       $v0, $v0, -0x4AB8
    ctx->pc = 0x11e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948168));
    // 0x11e238: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x11e238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x11e23c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x11e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x11e240: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11e240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11e244: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x11e244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x11e248: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11E248u;
    SET_GPR_U32(ctx, 31, 0x11E250u);
    ctx->pc = 0x11E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E248u;
    // 0x11e24c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x11E248u, 0x11E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E250u;
label_11e250:
    // 0x11e250: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E250u;
    {
        const bool branch_taken_0x11e250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x11E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E250u;
        // 0x11e254: 0xae42b9dc  sw          $v0, -0x4624($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294949340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e250) {
            ctx->pc = 0x11E260u;
            goto label_11e260;
        }
    }
    ctx->pc = 0x11E258u;
    // 0x11e258: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x11E258u;
    {
        const bool branch_taken_0x11e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E258u;
        // 0x11e25c: 0x2402ff9b  addiu       $v0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e258) {
            ctx->pc = 0x11E478u;
            goto label_11e478;
        }
    }
    ctx->pc = 0x11E260u;
label_11e260:
    // 0x11e260: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x11e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x11e264: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x11e264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x11e268: 0x2442b558  addiu       $v0, $v0, -0x4AA8
    ctx->pc = 0x11e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948184));
    // 0x11e26c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x11e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11e270: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x11e270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x11e274: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11E274u;
    SET_GPR_U32(ctx, 31, 0x11E27Cu);
    ctx->pc = 0x11E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E274u;
    // 0x11e278: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x11E274u, 0x11E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E27Cu;
label_11e27c:
    // 0x11e27c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e280: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11e280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11e284: 0x16130006  bne         $s0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E284u;
    {
        const bool branch_taken_0x11e284 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x11e284) {
            ctx->pc = 0x11E2A0u;
            goto label_11e2a0;
        }
    }
    ctx->pc = 0x11E28Cu;
    // 0x11e28c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E28Cu;
    SET_GPR_U32(ctx, 31, 0x11E294u);
    ctx->pc = 0x11E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E28Cu;
    // 0x11e290: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E28Cu, 0x11E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E294u;
label_11e294:
    // 0x11e294: 0xae50b9dc  sw          $s0, -0x4624($s2)
    ctx->pc = 0x11e294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949340), GPR_U32(ctx, 16));
    // 0x11e298: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x11E298u;
    {
        const bool branch_taken_0x11e298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E298u;
        // 0x11e29c: 0x2402ff9b  addiu       $v0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e298) {
            ctx->pc = 0x11E478u;
            goto label_11e478;
        }
    }
    ctx->pc = 0x11E2A0u;
label_11e2a0:
    // 0x11e2a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2a8: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x11E2A8u;
    SET_GPR_U32(ctx, 31, 0x11E2B0u);
    ctx->pc = 0x11E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2A8u;
    // 0x11e2ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x11E2A8u, 0x11E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2B0u;
label_11e2b0:
    // 0x11e2b0: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x11E2B0u;
    SET_GPR_U32(ctx, 31, 0x11E2B8u);
    ctx->pc = 0x11E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2B0u;
    // 0x11e2b4: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x11E2B0u, 0x11E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2B8u;
label_11e2b8:
    // 0x11e2b8: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x11E2B8u;
    SET_GPR_U32(ctx, 31, 0x11E2C0u);
    ctx->pc = 0x11E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2B8u;
    // 0x11e2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103A8u, 0x11E2B8u, 0x11E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2C0u;
label_11e2c0:
    // 0x11e2c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11E2C0u;
    {
        const bool branch_taken_0x11e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2C0u;
        // 0x11e2c4: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2c0) {
            ctx->pc = 0x11E2DCu;
            goto label_11e2dc;
        }
    }
    ctx->pc = 0x11E2C8u;
label_11e2c8:
    // 0x11e2c8: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x11E2C8u;
    SET_GPR_U32(ctx, 31, 0x11E2D0u);
    ctx->pc = 0x11E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2C8u;
    // 0x11e2cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x11E2C8u, 0x11E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2D0u;
label_11e2d0:
    // 0x11e2d0: 0x2a230200  slti        $v1, $s1, 0x200
    ctx->pc = 0x11e2d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x11e2d4: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x11E2D4u;
    {
        const bool branch_taken_0x11e2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2D4u;
        // 0x11e2d8: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2d4) {
            ctx->pc = 0x11E45Cu;
            goto label_11e45c;
        }
    }
    ctx->pc = 0x11E2DCu;
label_11e2dc:
    // 0x11e2dc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11e2e0: 0x2604de00  addiu       $a0, $s0, -0x2200
    ctx->pc = 0x11e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958592));
    // 0x11e2e4: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x11e2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x11e2e8: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x11E2E8u;
    SET_GPR_U32(ctx, 31, 0x11E2F0u);
    ctx->pc = 0x11E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2E8u;
    // 0x11e2ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x11E2E8u, 0x11E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2F0u;
label_11e2f0:
    // 0x11e2f0: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11E2F0u;
    {
        const bool branch_taken_0x11e2f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2F0u;
        // 0x11e2f4: 0x2613de00  addiu       $s3, $s0, -0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2f0) {
            ctx->pc = 0x11E324u;
            goto label_11e324;
        }
    }
    ctx->pc = 0x11E2F8u;
    // 0x11e2f8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11e2fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11E2FCu;
    SET_GPR_U32(ctx, 31, 0x11E304u);
    ctx->pc = 0x11E300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2FCu;
    // 0x11e300: 0x2484b570  addiu       $a0, $a0, -0x4A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11E2FCu, 0x11E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E304u;
label_11e304:
    // 0x11e304: 0x0  nop
    ctx->pc = 0x11e304u;
    // NOP
label_11e308:
    // 0x11e308: 0x0  nop
    ctx->pc = 0x11e308u;
    // NOP
    // 0x11e30c: 0x0  nop
    ctx->pc = 0x11e30cu;
    // NOP
    // 0x11e310: 0x0  nop
    ctx->pc = 0x11e310u;
    // NOP
    // 0x11e314: 0x0  nop
    ctx->pc = 0x11e314u;
    // NOP
    // 0x11e318: 0x0  nop
    ctx->pc = 0x11e318u;
    // NOP
    // 0x11e31c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11E31Cu;
    {
        const bool branch_taken_0x11e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e31c) {
            ctx->pc = 0x11E308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e308;
        }
    }
    ctx->pc = 0x11E324u;
label_11e324:
    // 0x11e324: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x11e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x11e328: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x11E328u;
    {
        const bool branch_taken_0x11e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E328u;
        // 0x11e32c: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e328) {
            ctx->pc = 0x11E2C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e2c8;
        }
    }
    ctx->pc = 0x11E330u;
    // 0x11e330: 0xc047eda  jal         func_11FB68
    ctx->pc = 0x11E330u;
    SET_GPR_U32(ctx, 31, 0x11E338u);
    ctx->pc = 0x11FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB68u, 0x11E330u, 0x11E338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E338u;
label_11e338:
    // 0x11e338: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e33c: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E33Cu;
    {
        const bool branch_taken_0x11e33c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E33Cu;
        // 0x11e340: 0xac62b9e4  sw          $v0, -0x461C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e33c) {
            ctx->pc = 0x11E36Cu;
            goto label_11e36c;
        }
    }
    ctx->pc = 0x11E344u;
    // 0x11e344: 0x8e44b9dc  lw          $a0, -0x4624($s2)
    ctx->pc = 0x11e344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    // 0x11e348: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11e348u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11e34c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E34Cu;
    SET_GPR_U32(ctx, 31, 0x11E354u);
    ctx->pc = 0x11E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E34Cu;
    // 0x11e350: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E34Cu, 0x11E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E354u;
label_11e354:
    // 0x11e354: 0x8e24b9e0  lw          $a0, -0x4620($s1)
    ctx->pc = 0x11e354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949344)));
    // 0x11e358: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E358u;
    SET_GPR_U32(ctx, 31, 0x11E360u);
    ctx->pc = 0x11E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E358u;
    // 0x11e35c: 0xae50b9dc  sw          $s0, -0x4624($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949340), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E358u, 0x11E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E360u;
label_11e360:
    // 0x11e360: 0xae30b9e0  sw          $s0, -0x4620($s1)
    ctx->pc = 0x11e360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949344), GPR_U32(ctx, 16));
    // 0x11e364: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x11E364u;
    {
        const bool branch_taken_0x11e364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E364u;
        // 0x11e368: 0x2402ff9b  addiu       $v0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e364) {
            ctx->pc = 0x11E478u;
            goto label_11e478;
        }
    }
    ctx->pc = 0x11E36Cu;
label_11e36c:
    // 0x11e36c: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x11e36cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x11e370: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x11e370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e374: 0x2630f3c0  addiu       $s0, $s1, -0xC40
    ctx->pc = 0x11e374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964160));
    // 0x11e378: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x11e378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x11e37c: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x11e37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
    // 0x11e380: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e384: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11e384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e388: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x11e388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x11e38c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e390: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11e390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11e394: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11e394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e398: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x11e398u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11e39c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E39Cu;
    SET_GPR_U32(ctx, 31, 0x11E3A4u);
    ctx->pc = 0x11E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E39Cu;
    // 0x11e3a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11E39Cu, 0x11E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3A4u;
label_11e3a4:
    // 0x11e3a4: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11E3A4u;
    {
        const bool branch_taken_0x11e3a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11e3a4) {
            ctx->pc = 0x11E3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E3A4u;
            // 0x11e3a8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E3ACu;
    // 0x11e3ac: 0x8e44b9dc  lw          $a0, -0x4624($s2)
    ctx->pc = 0x11e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    // 0x11e3b0: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11e3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11e3b4: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x11e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x11e3b8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E3B8u;
    SET_GPR_U32(ctx, 31, 0x11E3C0u);
    ctx->pc = 0x11E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3B8u;
    // 0x11e3bc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E3B8u, 0x11E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3C0u;
label_11e3c0:
    // 0x11e3c0: 0x8e24b9e0  lw          $a0, -0x4620($s1)
    ctx->pc = 0x11e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949344)));
    // 0x11e3c4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E3C4u;
    SET_GPR_U32(ctx, 31, 0x11E3CCu);
    ctx->pc = 0x11E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3C4u;
    // 0x11e3c8: 0xae50b9dc  sw          $s0, -0x4624($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949340), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E3C4u, 0x11E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3CCu;
label_11e3cc:
    // 0x11e3cc: 0xae30b9e0  sw          $s0, -0x4620($s1)
    ctx->pc = 0x11e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949344), GPR_U32(ctx, 16));
    // 0x11e3d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11E3D0u;
    {
        const bool branch_taken_0x11e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3D0u;
        // 0x11e3d4: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3d0) {
            ctx->pc = 0x11E478u;
            goto label_11e478;
        }
    }
    ctx->pc = 0x11E3D8u;
label_11e3d8:
    // 0x11e3d8: 0x2842020a  slti        $v0, $v0, 0x20A
    ctx->pc = 0x11e3d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)522) ? 1 : 0);
    // 0x11e3dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11E3DCu;
    {
        const bool branch_taken_0x11e3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3DCu;
        // 0x11e3e0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3dc) {
            ctx->pc = 0x11E418u;
            goto label_11e418;
        }
    }
    ctx->pc = 0x11E3E4u;
    // 0x11e3e4: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11e3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11e3e8: 0x2484b5a8  addiu       $a0, $a0, -0x4A58
    ctx->pc = 0x11e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948264));
    // 0x11e3ec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11E3ECu;
    SET_GPR_U32(ctx, 31, 0x11E3F4u);
    ctx->pc = 0x11E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3ECu;
    // 0x11e3f0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11E3ECu, 0x11E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3F4u;
label_11e3f4:
    // 0x11e3f4: 0x8e44b9dc  lw          $a0, -0x4624($s2)
    ctx->pc = 0x11e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    // 0x11e3f8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E3F8u;
    SET_GPR_U32(ctx, 31, 0x11E400u);
    ctx->pc = 0x11E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3F8u;
    // 0x11e3fc: 0xae800024  sw          $zero, 0x24($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E3F8u, 0x11E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E400u;
label_11e400:
    // 0x11e400: 0x8e24b9e0  lw          $a0, -0x4620($s1)
    ctx->pc = 0x11e400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949344)));
    // 0x11e404: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E404u;
    SET_GPR_U32(ctx, 31, 0x11E40Cu);
    ctx->pc = 0x11E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E404u;
    // 0x11e408: 0xae50b9dc  sw          $s0, -0x4624($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949340), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E404u, 0x11E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E40Cu;
label_11e40c:
    // 0x11e40c: 0xae30b9e0  sw          $s0, -0x4620($s1)
    ctx->pc = 0x11e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949344), GPR_U32(ctx, 16));
    // 0x11e410: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11E410u;
    {
        const bool branch_taken_0x11e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E410u;
        // 0x11e414: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e410) {
            ctx->pc = 0x11E478u;
            goto label_11e478;
        }
    }
    ctx->pc = 0x11E418u;
label_11e418:
    // 0x11e418: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11e418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11e41c: 0x2842020e  slti        $v0, $v0, 0x20E
    ctx->pc = 0x11e41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)526) ? 1 : 0);
    // 0x11e420: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E420u;
    {
        const bool branch_taken_0x11e420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E420u;
        // 0x11e424: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e420) {
            ctx->pc = 0x11E46Cu;
            goto label_11e46c;
        }
    }
    ctx->pc = 0x11E428u;
    // 0x11e428: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11e428u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11e42c: 0x2484b5d0  addiu       $a0, $a0, -0x4A30
    ctx->pc = 0x11e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948304));
    // 0x11e430: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11E430u;
    SET_GPR_U32(ctx, 31, 0x11E438u);
    ctx->pc = 0x11E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E430u;
    // 0x11e434: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11E430u, 0x11E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E438u;
label_11e438:
    // 0x11e438: 0x8e44b9dc  lw          $a0, -0x4624($s2)
    ctx->pc = 0x11e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    // 0x11e43c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E43Cu;
    SET_GPR_U32(ctx, 31, 0x11E444u);
    ctx->pc = 0x11E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E43Cu;
    // 0x11e440: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E43Cu, 0x11E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E444u;
label_11e444:
    // 0x11e444: 0x8e24b9e0  lw          $a0, -0x4620($s1)
    ctx->pc = 0x11e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949344)));
    // 0x11e448: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E448u;
    SET_GPR_U32(ctx, 31, 0x11E450u);
    ctx->pc = 0x11E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E448u;
    // 0x11e44c: 0xae50b9dc  sw          $s0, -0x4624($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949340), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E448u, 0x11E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E450u;
label_11e450:
    // 0x11e450: 0xae30b9e0  sw          $s0, -0x4620($s1)
    ctx->pc = 0x11e450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949344), GPR_U32(ctx, 16));
    // 0x11e454: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11E454u;
    {
        const bool branch_taken_0x11e454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E454u;
        // 0x11e458: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e454) {
            ctx->pc = 0x11E478u;
            goto label_11e478;
        }
    }
    ctx->pc = 0x11E45Cu;
label_11e45c:
    // 0x11e45c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11E45Cu;
    SET_GPR_U32(ctx, 31, 0x11E464u);
    ctx->pc = 0x11E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E45Cu;
    // 0x11e460: 0x2484b588  addiu       $a0, $a0, -0x4A78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11E45Cu, 0x11E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E464u;
label_11e464:
    // 0x11e464: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E464u;
    {
        const bool branch_taken_0x11e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E464u;
        // 0x11e468: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e464) {
            ctx->pc = 0x11E478u;
            goto label_11e478;
        }
    }
    ctx->pc = 0x11E46Cu;
label_11e46c:
    // 0x11e46c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11E46Cu;
    SET_GPR_U32(ctx, 31, 0x11E474u);
    ctx->pc = 0x11E470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E46Cu;
    // 0x11e470: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11E46Cu, 0x11E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E474u;
label_11e474:
    // 0x11e474: 0x8e22f3c0  lw          $v0, -0xC40($s1)
    ctx->pc = 0x11e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964160)));
label_11e478:
    // 0x11e478: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11e478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e47c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x11e47cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e480: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x11e480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e484: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x11e484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e488: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x11e488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e48c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11e48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e490: 0x3e00008  jr          $ra
    ctx->pc = 0x11E490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E490u;
        // 0x11e494: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E498u;
    // 0x11e498: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11e49c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11e49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11e4a0: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x11e4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x11e4a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11e4a8: 0x8e42b9dc  lw          $v0, -0x4624($s2)
    ctx->pc = 0x11e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    // 0x11e4ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11e4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11e4b0: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x11E4B0u;
    {
        const bool branch_taken_0x11e4b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4B0u;
        // 0x11e4b4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4b0) {
            ctx->pc = 0x11E528u;
            goto label_11e528;
        }
    }
    ctx->pc = 0x11E4B8u;
    // 0x11e4b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e4bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e4c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e4c4: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x11E4C4u;
    SET_GPR_U32(ctx, 31, 0x11E4CCu);
    ctx->pc = 0x11E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4C4u;
    // 0x11e4c8: 0x3c110036  lui         $s1, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x11E4C4u, 0x11E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4CCu;
label_11e4cc:
    // 0x11e4cc: 0x8e24b9e4  lw          $a0, -0x461C($s1)
    ctx->pc = 0x11e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949348)));
    // 0x11e4d0: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x11E4D0u;
    {
        const bool branch_taken_0x11e4d0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x11e4d0) {
            ctx->pc = 0x11E50Cu;
            goto label_11e50c;
        }
    }
    ctx->pc = 0x11E4D8u;
    // 0x11e4d8: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x11E4D8u;
    SET_GPR_U32(ctx, 31, 0x11E4E0u);
    ctx->pc = 0x11E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4D8u;
    // 0x11e4dc: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x11E4D8u, 0x11E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4E0u;
label_11e4e0:
    // 0x11e4e0: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x11E4E0u;
    SET_GPR_U32(ctx, 31, 0x11E4E8u);
    ctx->pc = 0x11E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4E0u;
    // 0x11e4e4: 0x8e24b9e4  lw          $a0, -0x461C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x11E4E0u, 0x11E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4E8u;
label_11e4e8:
    // 0x11e4e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e4ec: 0x2610f400  addiu       $s0, $s0, -0xC00
    ctx->pc = 0x11e4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964224));
    // 0x11e4f0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11e4f4: 0xae22b9e4  sw          $v0, -0x461C($s1)
    ctx->pc = 0x11e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949348), GPR_U32(ctx, 2));
    // 0x11e4f8: 0x2484f418  addiu       $a0, $a0, -0xBE8
    ctx->pc = 0x11e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964248));
    // 0x11e4fc: 0xc044436  jal         func_1110D8
    ctx->pc = 0x11E4FCu;
    SET_GPR_U32(ctx, 31, 0x11E504u);
    ctx->pc = 0x11E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4FCu;
    // 0x11e500: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110D8u, 0x11E4FCu, 0x11E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E504u;
label_11e504:
    // 0x11e504: 0xc04445c  jal         func_111170
    ctx->pc = 0x11E504u;
    SET_GPR_U32(ctx, 31, 0x11E50Cu);
    ctx->pc = 0x11E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E504u;
    // 0x11e508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111170u, 0x11E504u, 0x11E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E50Cu;
label_11e50c:
    // 0x11e50c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E50Cu;
    SET_GPR_U32(ctx, 31, 0x11E514u);
    ctx->pc = 0x11E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E50Cu;
    // 0x11e510: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E50Cu, 0x11E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E514u;
label_11e514:
    // 0x11e514: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e518: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e51c: 0x8c64b9e0  lw          $a0, -0x4620($v1)
    ctx->pc = 0x11e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949344)));
    // 0x11e520: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11E520u;
    SET_GPR_U32(ctx, 31, 0x11E528u);
    ctx->pc = 0x11E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E520u;
    // 0x11e524: 0xae42b9dc  sw          $v0, -0x4624($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11E520u, 0x11E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E528u;
label_11e528:
    // 0x11e528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11e528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e52c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e530: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11e530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e534: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11e534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e53c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E53Cu;
        // 0x11e540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E544u;
    // 0x11e544: 0x0  nop
    ctx->pc = 0x11e544u;
    // NOP
    // 0x11e548: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11e548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11e54c: 0x8043324  j           func_10CC90
    ctx->pc = 0x11E54Cu;
    ctx->pc = 0x11E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E54Cu;
    // 0x11e550: 0x8c44b9e0  lw          $a0, -0x4620($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime); return;
    ctx->pc = 0x11E554u;
    // 0x11e554: 0x0  nop
    ctx->pc = 0x11e554u;
    // NOP
    // 0x11e558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11e558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11e55c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11e560: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11e564: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11e568: 0x2471de00  addiu       $s1, $v1, -0x2200
    ctx->pc = 0x11e568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958592));
    // 0x11e56c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11e570: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11e574: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x11e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11e578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E578u;
    {
        const bool branch_taken_0x11e578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E578u;
        // 0x11e57c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e578) {
            ctx->pc = 0x11E588u;
            goto label_11e588;
        }
    }
    ctx->pc = 0x11E580u;
    // 0x11e580: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11E580u;
    {
        const bool branch_taken_0x11e580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E580u;
        // 0x11e584: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e580) {
            ctx->pc = 0x11E5FCu;
            goto label_11e5fc;
        }
    }
    ctx->pc = 0x11E588u;
label_11e588:
    // 0x11e588: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x11e588u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x11e58c: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11E58Cu;
    SET_GPR_U32(ctx, 31, 0x11E594u);
    ctx->pc = 0x11E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E58Cu;
    // 0x11e590: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11E58Cu, 0x11E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E594u;
label_11e594:
    // 0x11e594: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E594u;
    {
        const bool branch_taken_0x11e594 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E594u;
        // 0x11e598: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e594) {
            ctx->pc = 0x11E5A4u;
            goto label_11e5a4;
        }
    }
    ctx->pc = 0x11E59Cu;
    // 0x11e59c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11E59Cu;
    {
        const bool branch_taken_0x11e59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E59Cu;
        // 0x11e5a0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e59c) {
            ctx->pc = 0x11E5FCu;
            goto label_11e5fc;
        }
    }
    ctx->pc = 0x11E5A4u;
label_11e5a4:
    // 0x11e5a4: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11e5a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11e5a8: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x11e5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
    // 0x11e5ac: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11e5acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11e5b0: 0xacf00014  sw          $s0, 0x14($a3)
    ctx->pc = 0x11e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 16));
    // 0x11e5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5b8: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11e5b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11e5bc: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11e5bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11e5c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e5c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x11e5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11e5c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11e5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e5cc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11e5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11e5d0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E5D0u;
    SET_GPR_U32(ctx, 31, 0x11E5D8u);
    ctx->pc = 0x11E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5D0u;
    // 0x11e5d4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11E5D0u, 0x11E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5D8u;
label_11e5d8:
    // 0x11e5d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E5D8u;
    {
        const bool branch_taken_0x11e5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D8u;
        // 0x11e5dc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d8) {
            ctx->pc = 0x11E5F0u;
            goto label_11e5f0;
        }
    }
    ctx->pc = 0x11E5E0u;
    // 0x11e5e0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11E5E0u;
    SET_GPR_U32(ctx, 31, 0x11E5E8u);
    ctx->pc = 0x11E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5E0u;
    // 0x11e5e4: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11E5E0u, 0x11E5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5E8u;
label_11e5e8:
    // 0x11e5e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E5E8u;
    {
        const bool branch_taken_0x11e5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5E8u;
        // 0x11e5ec: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5e8) {
            ctx->pc = 0x11E5FCu;
            goto label_11e5fc;
        }
    }
    ctx->pc = 0x11E5F0u;
label_11e5f0:
    // 0x11e5f0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e5f4: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11e5f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e5fc:
    // 0x11e5fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11e5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e600: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11e600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e604: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11e604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e608: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11e608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e60c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E60Cu;
        // 0x11e610: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E614u;
    // 0x11e614: 0x0  nop
    ctx->pc = 0x11e614u;
    // NOP
    // 0x11e618: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11e618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11e61c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11e620: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11e620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11e624: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11e628: 0x2472de00  addiu       $s2, $v1, -0x2200
    ctx->pc = 0x11e628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958592));
    // 0x11e62c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11e630: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11e630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11e634: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11e638: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x11e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x11e63c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E63Cu;
    {
        const bool branch_taken_0x11e63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E63Cu;
        // 0x11e640: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e63c) {
            ctx->pc = 0x11E64Cu;
            goto label_11e64c;
        }
    }
    ctx->pc = 0x11E644u;
    // 0x11e644: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11E644u;
    {
        const bool branch_taken_0x11e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E644u;
        // 0x11e648: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e644) {
            ctx->pc = 0x11E6BCu;
            goto label_11e6bc;
        }
    }
    ctx->pc = 0x11E64Cu;
label_11e64c:
    // 0x11e64c: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11e64cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x11e650: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11E650u;
    SET_GPR_U32(ctx, 31, 0x11E658u);
    ctx->pc = 0x11E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E650u;
    // 0x11e654: 0x8e04b9dc  lw          $a0, -0x4624($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11E650u, 0x11E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E658u;
label_11e658:
    // 0x11e658: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E658u;
    {
        const bool branch_taken_0x11e658 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E658u;
        // 0x11e65c: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e658) {
            ctx->pc = 0x11E668u;
            goto label_11e668;
        }
    }
    ctx->pc = 0x11E660u;
    // 0x11e660: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11E660u;
    {
        const bool branch_taken_0x11e660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E660u;
        // 0x11e664: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e660) {
            ctx->pc = 0x11E6BCu;
            goto label_11e6bc;
        }
    }
    ctx->pc = 0x11E668u;
label_11e668:
    // 0x11e668: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x11e668u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x11e66c: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x11e66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
    // 0x11e670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e674: 0xacf10004  sw          $s1, 0x4($a3)
    ctx->pc = 0x11e674u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 17));
    // 0x11e678: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x11e678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x11e67c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e684: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11e684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11e688: 0x2669f3c0  addiu       $t1, $s3, -0xC40
    ctx->pc = 0x11e688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964160));
    // 0x11e68c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11e68cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11e690: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E690u;
    SET_GPR_U32(ctx, 31, 0x11E698u);
    ctx->pc = 0x11E694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E690u;
    // 0x11e694: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11E690u, 0x11E698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E698u;
label_11e698:
    // 0x11e698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E698u;
    {
        const bool branch_taken_0x11e698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e698) {
            ctx->pc = 0x11E6B0u;
            goto label_11e6b0;
        }
    }
    ctx->pc = 0x11E6A0u;
    // 0x11e6a0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11E6A0u;
    SET_GPR_U32(ctx, 31, 0x11E6A8u);
    ctx->pc = 0x11E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6A0u;
    // 0x11e6a4: 0x8e04b9dc  lw          $a0, -0x4624($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11E6A0u, 0x11E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6A8u;
label_11e6a8:
    // 0x11e6a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E6A8u;
    {
        const bool branch_taken_0x11e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6A8u;
        // 0x11e6ac: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6a8) {
            ctx->pc = 0x11E6BCu;
            goto label_11e6bc;
        }
    }
    ctx->pc = 0x11E6B0u;
label_11e6b0:
    // 0x11e6b0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11E6B0u;
    SET_GPR_U32(ctx, 31, 0x11E6B8u);
    ctx->pc = 0x11E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6B0u;
    // 0x11e6b4: 0x8e04b9dc  lw          $a0, -0x4624($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11E6B0u, 0x11E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6B8u;
label_11e6b8:
    // 0x11e6b8: 0x8e62f3c0  lw          $v0, -0xC40($s3)
    ctx->pc = 0x11e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294964160)));
label_11e6bc:
    // 0x11e6bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11e6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e6c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11e6c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e6c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11e6c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e6c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11e6c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e6cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11e6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6D0u;
        // 0x11e6d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E6D8u;
}
