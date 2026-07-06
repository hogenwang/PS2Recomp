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

// Function: sub_002CF0A0
// Address: 0x2cf0a0 - 0x2cf198
void sub_002CF0A0_0x2cf0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF0A0_0x2cf0a0");
#endif

    switch (ctx->pc) {
        case 0x2cf0a0u: goto label_2cf0a0;
        case 0x2cf0a4u: goto label_2cf0a4;
        case 0x2cf0a8u: goto label_2cf0a8;
        case 0x2cf0acu: goto label_2cf0ac;
        case 0x2cf0b0u: goto label_2cf0b0;
        case 0x2cf0b4u: goto label_2cf0b4;
        case 0x2cf0b8u: goto label_2cf0b8;
        case 0x2cf0bcu: goto label_2cf0bc;
        case 0x2cf0c0u: goto label_2cf0c0;
        case 0x2cf0c4u: goto label_2cf0c4;
        case 0x2cf0c8u: goto label_2cf0c8;
        case 0x2cf0ccu: goto label_2cf0cc;
        case 0x2cf0d0u: goto label_2cf0d0;
        case 0x2cf0d4u: goto label_2cf0d4;
        case 0x2cf0d8u: goto label_2cf0d8;
        case 0x2cf0dcu: goto label_2cf0dc;
        case 0x2cf0e0u: goto label_2cf0e0;
        case 0x2cf0e4u: goto label_2cf0e4;
        case 0x2cf0e8u: goto label_2cf0e8;
        case 0x2cf0ecu: goto label_2cf0ec;
        case 0x2cf0f0u: goto label_2cf0f0;
        case 0x2cf0f4u: goto label_2cf0f4;
        case 0x2cf0f8u: goto label_2cf0f8;
        case 0x2cf0fcu: goto label_2cf0fc;
        case 0x2cf100u: goto label_2cf100;
        case 0x2cf104u: goto label_2cf104;
        case 0x2cf108u: goto label_2cf108;
        case 0x2cf10cu: goto label_2cf10c;
        case 0x2cf110u: goto label_2cf110;
        case 0x2cf114u: goto label_2cf114;
        case 0x2cf118u: goto label_2cf118;
        case 0x2cf11cu: goto label_2cf11c;
        case 0x2cf120u: goto label_2cf120;
        case 0x2cf124u: goto label_2cf124;
        case 0x2cf128u: goto label_2cf128;
        case 0x2cf12cu: goto label_2cf12c;
        case 0x2cf130u: goto label_2cf130;
        case 0x2cf134u: goto label_2cf134;
        case 0x2cf138u: goto label_2cf138;
        case 0x2cf13cu: goto label_2cf13c;
        case 0x2cf140u: goto label_2cf140;
        case 0x2cf144u: goto label_2cf144;
        case 0x2cf148u: goto label_2cf148;
        case 0x2cf14cu: goto label_2cf14c;
        case 0x2cf150u: goto label_2cf150;
        case 0x2cf154u: goto label_2cf154;
        case 0x2cf158u: goto label_2cf158;
        case 0x2cf15cu: goto label_2cf15c;
        case 0x2cf160u: goto label_2cf160;
        case 0x2cf164u: goto label_2cf164;
        case 0x2cf168u: goto label_2cf168;
        case 0x2cf16cu: goto label_2cf16c;
        case 0x2cf170u: goto label_2cf170;
        case 0x2cf174u: goto label_2cf174;
        case 0x2cf178u: goto label_2cf178;
        case 0x2cf17cu: goto label_2cf17c;
        case 0x2cf180u: goto label_2cf180;
        case 0x2cf184u: goto label_2cf184;
        case 0x2cf188u: goto label_2cf188;
        case 0x2cf18cu: goto label_2cf18c;
        case 0x2cf190u: goto label_2cf190;
        case 0x2cf194u: goto label_2cf194;
        default: break;
    }

    ctx->pc = 0x2cf0a0u;

label_2cf0a0:
    // 0x2cf0a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2cf0a4:
    // 0x2cf0a4: 0x24e30032  addiu       $v1, $a3, 0x32
    ctx->pc = 0x2cf0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 50));
label_2cf0a8:
    // 0x2cf0a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cf0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2cf0ac:
    // 0x2cf0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf0b0:
    // 0x2cf0b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cf0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2cf0b4:
    // 0x2cf0b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cf0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cf0b8:
    // 0x2cf0b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2cf0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2cf0bc:
    // 0x2cf0bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cf0bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cf0c0:
    // 0x2cf0c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cf0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2cf0c4:
    // 0x2cf0c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2cf0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2cf0c8:
    // 0x2cf0c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cf0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2cf0cc:
    // 0x2cf0cc: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
label_2cf0d0:
    if (ctx->pc == 0x2CF0D0u) {
        ctx->pc = 0x2CF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0CCu;
        // 0x2cf0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0D4u;
        goto label_2cf0d4;
    }
    ctx->pc = 0x2CF0CCu;
    {
        const bool branch_taken_0x2cf0cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0CCu;
        // 0x2cf0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0cc) {
            ctx->pc = 0x2CF178u;
            goto label_2cf178;
        }
    }
    ctx->pc = 0x2CF0D4u;
label_2cf0d4:
    // 0x2cf0d4: 0xc0b60b8  jal         func_2D82E0
label_2cf0d8:
    if (ctx->pc == 0x2CF0D8u) {
        ctx->pc = 0x2CF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0D4u;
        // 0x2cf0d8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0DCu;
        goto label_2cf0dc;
    }
    ctx->pc = 0x2CF0D4u;
    SET_GPR_U32(ctx, 31, 0x2CF0DCu);
    ctx->pc = 0x2CF0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0D4u;
    // 0x2cf0d8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2CF0D4u, 0x2CF0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0DCu;
label_2cf0dc:
    // 0x2cf0dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cf0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf0e0:
    // 0x2cf0e0: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x2cf0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_2cf0e4:
    // 0x2cf0e4: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_2cf0e8:
    if (ctx->pc == 0x2CF0E8u) {
        ctx->pc = 0x2CF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0E4u;
        // 0x2cf0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0ECu;
        goto label_2cf0ec;
    }
    ctx->pc = 0x2CF0E4u;
    {
        const bool branch_taken_0x2cf0e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0E4u;
        // 0x2cf0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0e4) {
            ctx->pc = 0x2CF178u;
            goto label_2cf178;
        }
    }
    ctx->pc = 0x2CF0ECu;
label_2cf0ec:
    // 0x2cf0ec: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2cf0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf0f0:
    // 0x2cf0f0: 0xc0b6098  jal         func_2D8260
label_2cf0f4:
    if (ctx->pc == 0x2CF0F4u) {
        ctx->pc = 0x2CF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0F0u;
        // 0x2cf0f4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0F8u;
        goto label_2cf0f8;
    }
    ctx->pc = 0x2CF0F0u;
    SET_GPR_U32(ctx, 31, 0x2CF0F8u);
    ctx->pc = 0x2CF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0F0u;
    // 0x2cf0f4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2CF0F0u, 0x2CF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0F8u;
label_2cf0f8:
    // 0x2cf0f8: 0xc0b60dc  jal         func_2D8370
label_2cf0fc:
    if (ctx->pc == 0x2CF0FCu) {
        ctx->pc = 0x2CF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0F8u;
        // 0x2cf0fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF100u;
        goto label_2cf100;
    }
    ctx->pc = 0x2CF0F8u;
    SET_GPR_U32(ctx, 31, 0x2CF100u);
    ctx->pc = 0x2CF0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0F8u;
    // 0x2cf0fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2CF0F8u, 0x2CF100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF100u;
label_2cf100:
    // 0x2cf100: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2cf100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_2cf104:
    // 0x2cf104: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cf104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cf108:
    // 0x2cf108: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2cf10c:
    if (ctx->pc == 0x2CF10Cu) {
        ctx->pc = 0x2CF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF108u;
        // 0x2cf10c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF110u;
        goto label_2cf110;
    }
    ctx->pc = 0x2CF108u;
    {
        const bool branch_taken_0x2cf108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF108u;
        // 0x2cf10c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf108) {
            ctx->pc = 0x2CF160u;
            goto label_2cf160;
        }
    }
    ctx->pc = 0x2CF110u;
label_2cf110:
    // 0x2cf110: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2cf110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2cf114:
    // 0x2cf114: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2cf114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf118:
    // 0x2cf118: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cf118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cf11c:
    // 0x2cf11c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cf11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf120:
    // 0x2cf120: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2cf120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cf124:
    // 0x2cf124: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2cf124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2cf128:
    // 0x2cf128: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x2cf128u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2cf12c:
    // 0x2cf12c: 0x40f809  jalr        $v0
label_2cf130:
    if (ctx->pc == 0x2CF130u) {
        ctx->pc = 0x2CF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF12Cu;
        // 0x2cf130: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF134u;
        goto label_2cf134;
    }
    ctx->pc = 0x2CF12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF134u);
        ctx->pc = 0x2CF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF12Cu;
        // 0x2cf130: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF12Cu, 0x2CF134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF134u;
label_2cf134:
    // 0x2cf134: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2cf138:
    if (ctx->pc == 0x2CF138u) {
        ctx->pc = 0x2CF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF134u;
        // 0x2cf138: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF13Cu;
        goto label_2cf13c;
    }
    ctx->pc = 0x2CF134u;
    {
        const bool branch_taken_0x2cf134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf134) {
            ctx->pc = 0x2CF138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF134u;
            // 0x2cf138: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF17Cu;
            goto label_2cf17c;
        }
    }
    ctx->pc = 0x2CF13Cu;
label_2cf13c:
    // 0x2cf13c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf140:
    // 0x2cf140: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2cf140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf144:
    // 0x2cf144: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2cf144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cf148:
    // 0x2cf148: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cf148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2cf14c:
    // 0x2cf14c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x2cf14cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2cf150:
    // 0x2cf150: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2cf154:
    if (ctx->pc == 0x2CF154u) {
        ctx->pc = 0x2CF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF150u;
        // 0x2cf154: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF158u;
        goto label_2cf158;
    }
    ctx->pc = 0x2CF150u;
    {
        const bool branch_taken_0x2cf150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF150u;
        // 0x2cf154: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf150) {
            ctx->pc = 0x2CF160u;
            goto label_2cf160;
        }
    }
    ctx->pc = 0x2CF158u;
label_2cf158:
    // 0x2cf158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf15c:
    // 0x2cf15c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cf15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2cf160:
    // 0x2cf160: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2cf160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cf164:
    // 0x2cf164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf168:
    // 0x2cf168: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2cf168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2cf16c:
    // 0x2cf16c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2cf16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2cf170:
    // 0x2cf170: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2cf170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf174:
    // 0x2cf174: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cf174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2cf178:
    // 0x2cf178: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cf178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf17c:
    // 0x2cf17c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cf17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cf180:
    // 0x2cf180: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cf180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf184:
    // 0x2cf184: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2cf184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2cf188:
    // 0x2cf188: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cf188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cf18c:
    // 0x2cf18c: 0x3e00008  jr          $ra
label_2cf190:
    if (ctx->pc == 0x2CF190u) {
        ctx->pc = 0x2CF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF18Cu;
        // 0x2cf190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF194u;
        goto label_2cf194;
    }
    ctx->pc = 0x2CF18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF18Cu;
        // 0x2cf190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF194u;
label_2cf194:
    // 0x2cf194: 0x0  nop
    ctx->pc = 0x2cf194u;
    // NOP
}
