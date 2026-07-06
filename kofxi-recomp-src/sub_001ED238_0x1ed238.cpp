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

// Function: sub_001ED238
// Address: 0x1ed238 - 0x1ed3d0
void sub_001ED238_0x1ed238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED238_0x1ed238");
#endif

    switch (ctx->pc) {
        case 0x1ed27cu: goto label_1ed27c;
        case 0x1ed294u: goto label_1ed294;
        case 0x1ed2acu: goto label_1ed2ac;
        case 0x1ed2d4u: goto label_1ed2d4;
        case 0x1ed2e8u: goto label_1ed2e8;
        case 0x1ed318u: goto label_1ed318;
        case 0x1ed330u: goto label_1ed330;
        case 0x1ed348u: goto label_1ed348;
        case 0x1ed360u: goto label_1ed360;
        case 0x1ed378u: goto label_1ed378;
        case 0x1ed390u: goto label_1ed390;
        case 0x1ed3a8u: goto label_1ed3a8;
        default: break;
    }

    ctx->pc = 0x1ed238u;

    // 0x1ed238: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ed238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ed23c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1ed23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1ed240: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ed240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ed244: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ed244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed248: 0x2446fdf8  addiu       $a2, $v0, -0x208
    ctx->pc = 0x1ed248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x1ed24c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ed24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ed250: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ed250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ed254: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ed254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed258: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ed258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ed25c: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x1ed25cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ed260: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ed260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1ed264: 0x2614000c  addiu       $s4, $s0, 0xC
    ctx->pc = 0x1ed264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ed268: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1ed268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1ed26c: 0x325500ff  andi        $s5, $s2, 0xFF
    ctx->pc = 0x1ed26cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1ed270: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ed270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ed274: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED274u;
    SET_GPR_U32(ctx, 31, 0x1ED27Cu);
    ctx->pc = 0x1ED278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED274u;
    // 0x1ed278: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED274u, 0x1ED27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED27Cu;
label_1ed27c:
    // 0x1ed27c: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed27cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed280: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ed280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ed284: 0x24c6fe68  addiu       $a2, $a2, -0x198
    ctx->pc = 0x1ed284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966888));
    // 0x1ed288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed28c: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED28Cu;
    SET_GPR_U32(ctx, 31, 0x1ED294u);
    ctx->pc = 0x1ED290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED28Cu;
    // 0x1ed290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED28Cu, 0x1ED294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED294u;
label_1ed294:
    // 0x1ed294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed298: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ed298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ed29c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ed29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ed2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2a4: 0xc07ffb8  jal         func_1FFEE0
    ctx->pc = 0x1ED2A4u;
    SET_GPR_U32(ctx, 31, 0x1ED2ACu);
    ctx->pc = 0x1ED2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2A4u;
    // 0x1ed2a8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFEE0u, 0x1ED2A4u, 0x1ED2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2ACu;
label_1ed2ac:
    // 0x1ed2ac: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed2b0: 0x24c6ff90  addiu       $a2, $a2, -0x70
    ctx->pc = 0x1ed2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967184));
    // 0x1ed2b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ed2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED2BCu;
    {
        const bool branch_taken_0x1ed2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2BCu;
        // 0x1ed2c0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2bc) {
            ctx->pc = 0x1ED2CCu;
            goto label_1ed2cc;
        }
    }
    ctx->pc = 0x1ED2C4u;
    // 0x1ed2c4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ed2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ed2c8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1ed2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1ed2cc:
    // 0x1ed2cc: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED2CCu;
    SET_GPR_U32(ctx, 31, 0x1ED2D4u);
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED2CCu, 0x1ED2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2D4u;
label_1ed2d4:
    // 0x1ed2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2d8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ed2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1ed2dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ed2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2e0: 0xc07fc5e  jal         func_1FF178
    ctx->pc = 0x1ED2E0u;
    SET_GPR_U32(ctx, 31, 0x1ED2E8u);
    ctx->pc = 0x1ED2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2E0u;
    // 0x1ed2e4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF178u, 0x1ED2E0u, 0x1ED2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2E8u;
label_1ed2e8:
    // 0x1ed2e8: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed2ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ed2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed2f0: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x1ed2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x1ed2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ed2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2fc: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1ed2fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ed300: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x1ed300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ed304: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ed304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1ed308: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1ED308u;
    {
        const bool branch_taken_0x1ed308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED308u;
        // 0x1ed30c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed308) {
            ctx->pc = 0x1ED3ACu;
            goto label_1ed3ac;
        }
    }
    ctx->pc = 0x1ED310u;
    // 0x1ed310: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED310u;
    SET_GPR_U32(ctx, 31, 0x1ED318u);
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED310u, 0x1ED318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED318u;
label_1ed318:
    // 0x1ed318: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed31c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1ed31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1ed320: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x1ed320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x1ed324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed328: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED328u;
    SET_GPR_U32(ctx, 31, 0x1ED330u);
    ctx->pc = 0x1ED32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED328u;
    // 0x1ed32c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED328u, 0x1ED330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED330u;
label_1ed330:
    // 0x1ed330: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed334: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1ed334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1ed338: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x1ed338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x1ed33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed340: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED340u;
    SET_GPR_U32(ctx, 31, 0x1ED348u);
    ctx->pc = 0x1ED344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED340u;
    // 0x1ed344: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED340u, 0x1ED348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED348u;
label_1ed348:
    // 0x1ed348: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed34c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ed34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1ed350: 0x24c60150  addiu       $a2, $a2, 0x150
    ctx->pc = 0x1ed350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
    // 0x1ed354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed358: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED358u;
    SET_GPR_U32(ctx, 31, 0x1ED360u);
    ctx->pc = 0x1ED35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED358u;
    // 0x1ed35c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED358u, 0x1ED360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED360u;
label_1ed360:
    // 0x1ed360: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed364: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ed364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1ed368: 0x24c601c8  addiu       $a2, $a2, 0x1C8
    ctx->pc = 0x1ed368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 456));
    // 0x1ed36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed370: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED370u;
    SET_GPR_U32(ctx, 31, 0x1ED378u);
    ctx->pc = 0x1ED374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED370u;
    // 0x1ed374: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED370u, 0x1ED378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED378u;
label_1ed378:
    // 0x1ed378: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed37c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1ed37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1ed380: 0x24c60238  addiu       $a2, $a2, 0x238
    ctx->pc = 0x1ed380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 568));
    // 0x1ed384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed388: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED388u;
    SET_GPR_U32(ctx, 31, 0x1ED390u);
    ctx->pc = 0x1ED38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED388u;
    // 0x1ed38c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED388u, 0x1ED390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED390u;
label_1ed390:
    // 0x1ed390: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed394: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1ed394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1ed398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed39c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ed39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed3a0: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED3A0u;
    SET_GPR_U32(ctx, 31, 0x1ED3A8u);
    ctx->pc = 0x1ED3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3A0u;
    // 0x1ed3a4: 0x24c602c0  addiu       $a2, $a2, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED408u, 0x1ED3A0u, 0x1ED3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3A8u;
label_1ed3a8:
    // 0x1ed3a8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1ed3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1ed3ac:
    // 0x1ed3ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ed3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed3b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ed3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ed3b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed3b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed3b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ed3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed3bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ed3bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed3c0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ed3c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ed3c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ed3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3C8u;
        // 0x1ed3cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED3D0u;
}
