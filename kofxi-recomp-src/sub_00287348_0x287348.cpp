#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287348
// Address: 0x287348 - 0x2874f0
void sub_00287348_0x287348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287348_0x287348");
#endif

    switch (ctx->pc) {
        case 0x2873a8u: goto label_2873a8;
        case 0x287420u: goto label_287420;
        case 0x287460u: goto label_287460;
        case 0x2874b0u: goto label_2874b0;
        case 0x2874c8u: goto label_2874c8;
        case 0x2874e8u: goto label_2874e8;
        default: break;
    }

    ctx->pc = 0x287348u;

    // 0x287348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x287348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28734c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287350: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x287350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x287354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287358: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x287358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28735c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x287360: 0x2630003f  addiu       $s0, $s1, 0x3F
    ctx->pc = 0x287360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x287364: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x287364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x287368: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x287368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28736c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28736cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x287370: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x287370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287374: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x287374u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287378: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x287378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28737c: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x28737cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x287380: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x287380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x287384: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x287384u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x287388: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x287388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28738c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x28738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x287390: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x287390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x287394: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x287394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x287398: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287398u;
    {
        const bool branch_taken_0x287398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287398) {
            ctx->pc = 0x2873B8u;
            goto label_2873b8;
        }
    }
    ctx->pc = 0x2873A0u;
    // 0x2873a0: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x2873A0u;
    SET_GPR_U32(ctx, 31, 0x2873A8u);
    ctx->pc = 0x286B68u;
    if (runtime->hasFunction(0x286B68u)) {
        auto targetFn = runtime->lookupFunction(0x286B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2873A8u; }
        if (ctx->pc != 0x2873A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286B68_0x286b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2873A8u; }
        if (ctx->pc != 0x2873A8u) { return; }
    }
    ctx->pc = 0x2873A8u;
label_2873a8:
    // 0x2873a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2873A8u;
    {
        const bool branch_taken_0x2873a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2873a8) {
            ctx->pc = 0x2873ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2873A8u;
            // 0x2873ac: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2873C8u;
            goto label_2873c8;
        }
    }
    ctx->pc = 0x2873B0u;
    // 0x2873b0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2873B0u;
    {
        const bool branch_taken_0x2873b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873B0u;
            // 0x2873b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873b0) {
            ctx->pc = 0x2874CCu;
            goto label_2874cc;
        }
    }
    ctx->pc = 0x2873B8u;
label_2873b8:
    // 0x2873b8: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2873B8u;
    {
        const bool branch_taken_0x2873b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2873b8) {
            ctx->pc = 0x2873BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2873B8u;
            // 0x2873bc: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2873C8u;
            goto label_2873c8;
        }
    }
    ctx->pc = 0x2873C0u;
    // 0x2873c0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2873C0u;
    {
        const bool branch_taken_0x2873c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873C0u;
            // 0x2873c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873c0) {
            ctx->pc = 0x2874CCu;
            goto label_2874cc;
        }
    }
    ctx->pc = 0x2873C8u;
label_2873c8:
    // 0x2873c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2873c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2873cc: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2873ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2873d0: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x2873d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2873d4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2873d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x2873d8: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x2873d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x2873dc: 0x108183  sra         $s0, $s0, 6
    ctx->pc = 0x2873dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
    // 0x2873e0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2873e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2873e4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2873e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2873e8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2873e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2873ec: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x2873ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2873f0: 0x2234023  subu        $t0, $s1, $v1
    ctx->pc = 0x2873f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2873f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2873f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2873f8: 0x885823  subu        $t3, $a0, $t0
    ctx->pc = 0x2873f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2873fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2873fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x287400: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x287400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x287404: 0x15000011  bnez        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x287404u;
    {
        const bool branch_taken_0x287404 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x287408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287404u;
            // 0x287408: 0xfc400000  sd          $zero, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287404) {
            ctx->pc = 0x28744Cu;
            goto label_28744c;
        }
    }
    ctx->pc = 0x28740Cu;
    // 0x28740c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x287410: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x287410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x287414: 0x4e00022  bltz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x287414u;
    {
        const bool branch_taken_0x287414 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x287418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287414u;
            // 0x287418: 0x1030c0  sll         $a2, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287414) {
            ctx->pc = 0x2874A0u;
            goto label_2874a0;
        }
    }
    ctx->pc = 0x28741Cu;
    // 0x28741c: 0x0  nop
    ctx->pc = 0x28741cu;
    // NOP
label_287420:
    // 0x287420: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x287420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x287424: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x287424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x287428: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x287428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x28742c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28742cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x287430: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x287430u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287434: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x287434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x287438: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x287438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28743c: 0x4e1fff8  bgez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28743Cu;
    {
        const bool branch_taken_0x28743c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x287440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28743Cu;
            // 0x287440: 0xfc640000  sd          $a0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28743c) {
            ctx->pc = 0x287420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287420;
        }
    }
    ctx->pc = 0x287444u;
    // 0x287444: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x287444u;
    {
        const bool branch_taken_0x287444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287444u;
            // 0x287448: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287444) {
            ctx->pc = 0x2874A8u;
            goto label_2874a8;
        }
    }
    ctx->pc = 0x28744Cu;
label_28744c:
    // 0x28744c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x287450: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x287450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x287454: 0x4e00012  bltz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x287454u;
    {
        const bool branch_taken_0x287454 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x287458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287454u;
            // 0x287458: 0x1030c0  sll         $a2, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287454) {
            ctx->pc = 0x2874A0u;
            goto label_2874a0;
        }
    }
    ctx->pc = 0x28745Cu;
    // 0x28745c: 0x0  nop
    ctx->pc = 0x28745cu;
    // NOP
label_287460:
    // 0x287460: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x287460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x287464: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x287464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x287468: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x287468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x28746c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28746cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x287470: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x287470u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287474: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x287474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x287478: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x287478u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28747c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28747cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x287480: 0x1642816  dsrlv       $a1, $a0, $t3
    ctx->pc = 0x287480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x287484: 0x1042014  dsllv       $a0, $a0, $t0
    ctx->pc = 0x287484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x287488: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x287488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x28748c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x28748cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x287490: 0x4e1fff3  bgez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x287490u;
    {
        const bool branch_taken_0x287490 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x287494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287490u;
            // 0x287494: 0xfc620008  sd          $v0, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287490) {
            ctx->pc = 0x287460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287460;
        }
    }
    ctx->pc = 0x287498u;
    // 0x287498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x287498u;
    {
        const bool branch_taken_0x287498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287498u;
            // 0x28749c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287498) {
            ctx->pc = 0x2874A8u;
            goto label_2874a8;
        }
    }
    ctx->pc = 0x2874A0u;
label_2874a0:
    // 0x2874a0: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x2874a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2874a4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2874a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2874a8:
    // 0x2874a8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2874A8u;
    SET_GPR_U32(ctx, 31, 0x2874B0u);
    ctx->pc = 0x2874ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2874A8u;
            // 0x2874ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874B0u; }
        if (ctx->pc != 0x2874B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874B0u; }
        if (ctx->pc != 0x2874B0u) { return; }
    }
    ctx->pc = 0x2874B0u;
label_2874b0:
    // 0x2874b0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2874b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2874b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2874b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2874b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2874b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2874bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2874bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2874c0: 0xc0a1a72  jal         func_2869C8
    ctx->pc = 0x2874C0u;
    SET_GPR_U32(ctx, 31, 0x2874C8u);
    ctx->pc = 0x2874C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2874C0u;
            // 0x2874c4: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (runtime->hasFunction(0x2869C8u)) {
        auto targetFn = runtime->lookupFunction(0x2869C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874C8u; }
        if (ctx->pc != 0x2874C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002869C8_0x2869c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874C8u; }
        if (ctx->pc != 0x2874C8u) { return; }
    }
    ctx->pc = 0x2874C8u;
label_2874c8:
    // 0x2874c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2874c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2874cc:
    // 0x2874cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2874ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2874d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2874d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2874d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2874d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2874d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2874d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2874dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2874dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2874e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2874E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2874E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2874E0u;
            // 0x2874e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2874E8u;
label_2874e8:
    // 0x2874e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2874E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2874ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2874E8u;
            // 0x2874ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2874F0u;
    ctx->pc = 0x2874f0u;
}
