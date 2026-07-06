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

// Function: sub_001253D0
// Address: 0x1253d0 - 0x125530
void sub_001253D0_0x1253d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001253D0_0x1253d0");
#endif

    switch (ctx->pc) {
        case 0x125400u: goto label_125400;
        case 0x12544cu: goto label_12544c;
        case 0x125478u: goto label_125478;
        case 0x1254a4u: goto label_1254a4;
        case 0x1254e4u: goto label_1254e4;
        case 0x1254e8u: goto label_1254e8;
        case 0x125524u: goto label_125524;
        default: break;
    }

    ctx->pc = 0x1253d0u;

    // 0x1253d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1253d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1253d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1253d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1253d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1253d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1253dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1253dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1253e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1253e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1253e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1253e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1253e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1253ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1253f0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1253f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1253f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1253f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1253f8: 0xc049ce6  jal         func_127398
    ctx->pc = 0x1253F8u;
    SET_GPR_U32(ctx, 31, 0x125400u);
    ctx->pc = 0x1253FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1253F8u;
    // 0x1253fc: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127398u, 0x1253F8u, 0x125400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125400u;
label_125400:
    // 0x125400: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x125400u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x125404: 0x240efffc  addiu       $t6, $zero, -0x4
    ctx->pc = 0x125404u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x125408: 0x25f3bdf8  addiu       $s3, $t7, -0x4208
    ctx->pc = 0x125408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950392));
    // 0x12540c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125410: 0x8e6d0008  lw          $t5, 0x8($s3)
    ctx->pc = 0x125410u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x125414: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x125414u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x125418: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x125418u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x12541c: 0xf883c  dsll32      $s1, $t7, 0
    ctx->pc = 0x12541cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 15) << (32 + 0));
    // 0x125420: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x125420u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x125424: 0x230802f  dsubu       $s0, $s1, $s0
    ctx->pc = 0x125424u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x125428: 0x66100fef  daddiu      $s0, $s0, 0xFEF
    ctx->pc = 0x125428u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
    // 0x12542c: 0x10833a  dsrl        $s0, $s0, 12
    ctx->pc = 0x12542cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 12);
    // 0x125430: 0x6610ffff  daddiu      $s0, $s0, -0x1
    ctx->pc = 0x125430u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
    // 0x125434: 0x108338  dsll        $s0, $s0, 12
    ctx->pc = 0x125434u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 12);
    // 0x125438: 0x2a0f1000  slti        $t7, $s0, 0x1000
    ctx->pc = 0x125438u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x12543c: 0x15e00027  bnez        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x12543Cu;
    {
        const bool branch_taken_0x12543c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12543Cu;
        // 0x125440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12543c) {
            ctx->pc = 0x1254DCu;
            goto label_1254dc;
        }
    }
    ctx->pc = 0x125444u;
    // 0x125444: 0xc04a5c2  jal         func_129708
    ctx->pc = 0x125444u;
    SET_GPR_U32(ctx, 31, 0x12544Cu);
    ctx->pc = 0x129708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129708u, 0x125444u, 0x12544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12544Cu;
label_12544c:
    // 0x12544c: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x12544cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x125450: 0x11703c  dsll32      $t6, $s1, 0
    ctx->pc = 0x125450u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) << (32 + 0));
    // 0x125454: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x125454u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x125458: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x125458u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12545c: 0x144f001f  bne         $v0, $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x12545Cu;
    {
        const bool branch_taken_0x12545c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x125460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12545Cu;
        // 0x125460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12545c) {
            ctx->pc = 0x1254DCu;
            goto label_1254dc;
        }
    }
    ctx->pc = 0x125464u;
    // 0x125464: 0x10a03c  dsll32      $s4, $s0, 0
    ctx->pc = 0x125464u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << (32 + 0));
    // 0x125468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12546c: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x12546cu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x125470: 0xc04a5c2  jal         func_129708
    ctx->pc = 0x125470u;
    SET_GPR_U32(ctx, 31, 0x125478u);
    ctx->pc = 0x125474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125470u;
    // 0x125474: 0x142823  negu        $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129708u, 0x125470u, 0x125478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125478u;
label_125478:
    // 0x125478: 0x230782f  dsubu       $t7, $s1, $s0
    ctx->pc = 0x125478u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x12547c: 0x3c0d0036  lui         $t5, 0x36
    ctx->pc = 0x12547cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)54 << 16));
    // 0x125480: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x125480u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x125484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125488: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x125488u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12548c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12548cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125490: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x125490u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125494: 0x144e001c  bne         $v0, $t6, . + 4 + (0x1C << 2)
    ctx->pc = 0x125494u;
    {
        const bool branch_taken_0x125494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x125498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125494u;
        // 0x125498: 0xf783f  dsra32      $t7, $t7, 0 (Delay Slot)
        SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125494) {
            ctx->pc = 0x125508u;
            goto label_125508;
        }
    }
    ctx->pc = 0x12549Cu;
    // 0x12549c: 0xc04a5c2  jal         func_129708
    ctx->pc = 0x12549Cu;
    SET_GPR_U32(ctx, 31, 0x1254A4u);
    ctx->pc = 0x129708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129708u, 0x12549Cu, 0x1254A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254A4u;
label_1254a4:
    // 0x1254a4: 0x8e6d0008  lw          $t5, 0x8($s3)
    ctx->pc = 0x1254a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1254a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1254a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254ac: 0x4d8823  subu        $s1, $v0, $t5
    ctx->pc = 0x1254acu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1254b0: 0x362f0001  ori         $t7, $s1, 0x1
    ctx->pc = 0x1254b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1254b4: 0x2a2e0010  slti        $t6, $s1, 0x10
    ctx->pc = 0x1254b4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1254b8: 0xf603c  dsll32      $t4, $t7, 0
    ctx->pc = 0x1254b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1254bc: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1254BCu;
    {
        const bool branch_taken_0x1254bc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1254C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254BCu;
        // 0x1254c0: 0xc603f  dsra32      $t4, $t4, 0 (Delay Slot)
        SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254bc) {
            ctx->pc = 0x1254DCu;
            goto label_1254dc;
        }
    }
    ctx->pc = 0x1254C4u;
    // 0x1254c4: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1254c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x1254c8: 0x8deec210  lw          $t6, -0x3DF0($t7)
    ctx->pc = 0x1254c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951440)));
    // 0x1254cc: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1254ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x1254d0: 0x4e7023  subu        $t6, $v0, $t6
    ctx->pc = 0x1254d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x1254d4: 0xadeec228  sw          $t6, -0x3DD8($t7)
    ctx->pc = 0x1254d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294951464), GPR_U32(ctx, 14));
    // 0x1254d8: 0xadac0004  sw          $t4, 0x4($t5)
    ctx->pc = 0x1254d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 12));
label_1254dc:
    // 0x1254dc: 0xc049cfc  jal         func_1273F0
    ctx->pc = 0x1254DCu;
    SET_GPR_U32(ctx, 31, 0x1254E4u);
    ctx->pc = 0x1273F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273F0u, 0x1254DCu, 0x1254E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254E4u;
label_1254e4:
    // 0x1254e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1254e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1254e8:
    // 0x1254e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1254e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1254ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1254ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1254f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1254f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1254f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1254f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1254f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1254f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1254fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1254fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125500: 0x3e00008  jr          $ra
    ctx->pc = 0x125500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125500u;
        // 0x125504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125508u;
label_125508:
    // 0x125508: 0x8e6e0008  lw          $t6, 0x8($s3)
    ctx->pc = 0x125508u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12550c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125510: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x125510u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x125514: 0x8dafc228  lw          $t7, -0x3DD8($t5)
    ctx->pc = 0x125514u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294951464)));
    // 0x125518: 0x1f47823  subu        $t7, $t7, $s4
    ctx->pc = 0x125518u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
    // 0x12551c: 0xc049cfc  jal         func_1273F0
    ctx->pc = 0x12551Cu;
    SET_GPR_U32(ctx, 31, 0x125524u);
    ctx->pc = 0x125520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12551Cu;
    // 0x125520: 0xadafc228  sw          $t7, -0x3DD8($t5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294951464), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273F0u, 0x12551Cu, 0x125524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125524u;
label_125524:
    // 0x125524: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x125524u;
    {
        const bool branch_taken_0x125524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125524u;
        // 0x125528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125524) {
            ctx->pc = 0x1254E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1254e8;
        }
    }
    ctx->pc = 0x12552Cu;
    // 0x12552c: 0x0  nop
    ctx->pc = 0x12552cu;
    // NOP
    if (ctx->pc == 0x12552cu) { ctx->pc = 0x125530u; }
}
