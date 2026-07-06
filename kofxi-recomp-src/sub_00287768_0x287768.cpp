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

// Function: sub_00287768
// Address: 0x287768 - 0x287970
void sub_00287768_0x287768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287768_0x287768");
#endif

    switch (ctx->pc) {
        case 0x287804u: goto label_287804;
        case 0x287834u: goto label_287834;
        case 0x28786cu: goto label_28786c;
        case 0x287898u: goto label_287898;
        case 0x2878b4u: goto label_2878b4;
        case 0x2878d0u: goto label_2878d0;
        case 0x287918u: goto label_287918;
        case 0x28792cu: goto label_28792c;
        default: break;
    }

    ctx->pc = 0x287768u;

    // 0x287768: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x287768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28776c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x28776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x287770: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x287770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x287774: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x287774u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287778: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x287778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x28777c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x28777cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287780: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x287780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x287784: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x287784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x287788: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x287788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28778c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x28778cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287790: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x287790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x287794: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x287794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287798: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x287798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28779c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28779cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877a0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2877a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2877a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2877a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2877a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2877a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2877ac: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x2877acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2877b0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2877b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2877b4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2877b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2877b8: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x2877b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2877bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2877bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2877c0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2877c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2877c4: 0x484018  mult        $t0, $v0, $t0
    ctx->pc = 0x2877c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2877c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2877c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2877cc: 0x48840  sll         $s1, $a0, 1
    ctx->pc = 0x2877ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2877d0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2877d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2877d4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2877d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2877d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2877d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2877dc: 0x2e38021  addu        $s0, $s7, $v1
    ctx->pc = 0x2877dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2877e0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2877e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2877e4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x2877e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2877e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2877ec: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2877ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2877f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2877F0u;
    {
        const bool branch_taken_0x2877f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877F0u;
        // 0x2877f4: 0x2e89021  addu        $s2, $s7, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877f0) {
            ctx->pc = 0x287814u;
            goto label_287814;
        }
    }
    ctx->pc = 0x2877F8u;
    // 0x2877f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2877f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877fc: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x2877FCu;
    SET_GPR_U32(ctx, 31, 0x287804u);
    ctx->pc = 0x287800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877FCu;
    // 0x287800: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x2877FCu, 0x287804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287804u;
label_287804:
    // 0x287804: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x287804u;
    {
        const bool branch_taken_0x287804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287804) {
            ctx->pc = 0x287808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287804u;
            // 0x287808: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287820u;
            goto label_287820;
        }
    }
    ctx->pc = 0x28780Cu;
    // 0x28780c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x28780Cu;
    {
        const bool branch_taken_0x28780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28780Cu;
        // 0x287810: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28780c) {
            ctx->pc = 0x287930u;
            goto label_287930;
        }
    }
    ctx->pc = 0x287814u;
label_287814:
    // 0x287814: 0x52000046  beql        $s0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x287814u;
    {
        const bool branch_taken_0x287814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x287814) {
            ctx->pc = 0x287818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287814u;
            // 0x287818: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287930u;
            goto label_287930;
        }
    }
    ctx->pc = 0x28781Cu;
    // 0x28781c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x28781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_287820:
    // 0x287820: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x287820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x287824: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287824u;
    {
        const bool branch_taken_0x287824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287824u;
        // 0x287828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287824) {
            ctx->pc = 0x287844u;
            goto label_287844;
        }
    }
    ctx->pc = 0x28782Cu;
    // 0x28782c: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x28782Cu;
    SET_GPR_U32(ctx, 31, 0x287834u);
    ctx->pc = 0x287830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28782Cu;
    // 0x287830: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x28782Cu, 0x287834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287834u;
label_287834:
    // 0x287834: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287834u;
    {
        const bool branch_taken_0x287834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287834) {
            ctx->pc = 0x28784Cu;
            goto label_28784c;
        }
    }
    ctx->pc = 0x28783Cu;
    // 0x28783c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x28783Cu;
    {
        const bool branch_taken_0x28783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28783Cu;
        // 0x287840: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28783c) {
            ctx->pc = 0x287930u;
            goto label_287930;
        }
    }
    ctx->pc = 0x287844u;
label_287844:
    // 0x287844: 0x5260003a  beql        $s3, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x287844u;
    {
        const bool branch_taken_0x287844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x287844) {
            ctx->pc = 0x287848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287844u;
            // 0x287848: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287930u;
            goto label_287930;
        }
    }
    ctx->pc = 0x28784Cu;
label_28784c:
    // 0x28784c: 0x56950014  bnel        $s4, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x28784Cu;
    {
        const bool branch_taken_0x28784c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        if (branch_taken_0x28784c) {
            ctx->pc = 0x287850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28784Cu;
            // 0x287850: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2878A0u;
            goto label_2878a0;
        }
    }
    ctx->pc = 0x287854u;
    // 0x287854: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x287854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x287858: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x287858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28785c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28785Cu;
    {
        const bool branch_taken_0x28785c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28785Cu;
        // 0x287860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28785c) {
            ctx->pc = 0x28787Cu;
            goto label_28787c;
        }
    }
    ctx->pc = 0x287864u;
    // 0x287864: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x287864u;
    SET_GPR_U32(ctx, 31, 0x28786Cu);
    ctx->pc = 0x287868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287864u;
    // 0x287868: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x287864u, 0x28786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28786Cu;
label_28786c:
    // 0x28786c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28786Cu;
    {
        const bool branch_taken_0x28786c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28786c) {
            ctx->pc = 0x287870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28786Cu;
            // 0x287870: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287888u;
            goto label_287888;
        }
    }
    ctx->pc = 0x287874u;
    // 0x287874: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x287874u;
    {
        const bool branch_taken_0x287874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287874u;
        // 0x287878: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287874) {
            ctx->pc = 0x287930u;
            goto label_287930;
        }
    }
    ctx->pc = 0x28787Cu;
label_28787c:
    // 0x28787c: 0x5240002c  beql        $s2, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x28787Cu;
    {
        const bool branch_taken_0x28787c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28787c) {
            ctx->pc = 0x287880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28787Cu;
            // 0x287880: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287930u;
            goto label_287930;
        }
    }
    ctx->pc = 0x287884u;
    // 0x287884: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x287884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_287888:
    // 0x287888: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x287888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28788c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x28788cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x287890: 0xc0a207c  jal         func_2881F0
    ctx->pc = 0x287890u;
    SET_GPR_U32(ctx, 31, 0x287898u);
    ctx->pc = 0x287894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287890u;
    // 0x287894: 0x8e860004  lw          $a2, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2881F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2881F0u, 0x287890u, 0x287898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287898u;
label_287898:
    // 0x287898: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x287898u;
    {
        const bool branch_taken_0x287898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287898u;
        // 0x28789c: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287898) {
            ctx->pc = 0x2878B8u;
            goto label_2878b8;
        }
    }
    ctx->pc = 0x2878A0u;
label_2878a0:
    // 0x2878a0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2878a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2878a4: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2878a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2878a8: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x2878a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2878ac: 0xc0a1f6c  jal         func_287DB0
    ctx->pc = 0x2878ACu;
    SET_GPR_U32(ctx, 31, 0x2878B4u);
    ctx->pc = 0x2878B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2878ACu;
    // 0x2878b0: 0x8ea80004  lw          $t0, 0x4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x2878ACu, 0x2878B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878B4u;
label_2878b4:
    // 0x2878b4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2878b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2878b8:
    // 0x2878b8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2878b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2878bc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2878bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2878c0: 0xb1202a  slt         $a0, $a1, $s1
    ctx->pc = 0x2878c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2878c4: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2878C4u;
    {
        const bool branch_taken_0x2878c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2878c4) {
            ctx->pc = 0x2878C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2878C4u;
            // 0x2878c8: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2878F4u;
            goto label_2878f4;
        }
    }
    ctx->pc = 0x2878CCu;
    // 0x2878cc: 0x0  nop
    ctx->pc = 0x2878ccu;
    // NOP
label_2878d0:
    // 0x2878d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2878d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2878d4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2878d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2878d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2878d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2878dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2878dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2878e0: 0xb6202a  slt         $a0, $a1, $s6
    ctx->pc = 0x2878e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2878e4: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2878e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2878e8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2878E8u;
    {
        const bool branch_taken_0x2878e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2878e8) {
            ctx->pc = 0x2878D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2878d0;
        }
    }
    ctx->pc = 0x2878F0u;
    // 0x2878f0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2878f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_2878f4:
    // 0x2878f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2878f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2878f8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2878f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2878fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2878fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x287900: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x287900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x287904: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x287904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x287908: 0xdfc80048  ld          $t0, 0x48($fp)
    ctx->pc = 0x287908u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x28790c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x28790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x287910: 0xc0a2848  jal         func_28A120
    ctx->pc = 0x287910u;
    SET_GPR_U32(ctx, 31, 0x287918u);
    ctx->pc = 0x287914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287910u;
    // 0x287914: 0x8fc60020  lw          $a2, 0x20($fp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x287910u, 0x287918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287918u;
label_287918:
    // 0x287918: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x287918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28791c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287920: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x287920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x287924: 0xc0a1a72  jal         func_2869C8
    ctx->pc = 0x287924u;
    SET_GPR_U32(ctx, 31, 0x28792Cu);
    ctx->pc = 0x287928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287924u;
    // 0x287928: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2869C8u, 0x287924u, 0x28792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28792Cu;
label_28792c:
    // 0x28792c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x28792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_287930:
    // 0x287930: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x287930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287934: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x287934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x287938: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x287938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28793c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x28793cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x287940: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x287940u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x287944: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x287944u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x287948: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x287948u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28794c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x28794cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287950: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x287950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287954: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x287954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287958: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x287958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28795c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28795cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287960: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x287960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287964: 0x3e00008  jr          $ra
    ctx->pc = 0x287964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287964u;
        // 0x287968: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28796Cu;
    // 0x28796c: 0x0  nop
    ctx->pc = 0x28796cu;
    // NOP
    if (ctx->pc == 0x28796cu) { ctx->pc = 0x287970u; }
}
