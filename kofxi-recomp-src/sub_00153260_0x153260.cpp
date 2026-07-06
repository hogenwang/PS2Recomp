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

// Function: sub_00153260
// Address: 0x153260 - 0x153340
void sub_00153260_0x153260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153260_0x153260");
#endif

    switch (ctx->pc) {
        case 0x153288u: goto label_153288;
        case 0x1532b4u: goto label_1532b4;
        default: break;
    }

    ctx->pc = 0x153260u;

    // 0x153260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x153260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x153264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x153264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x153268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15326c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153270: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x153270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153278: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x153278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15327c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15327cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153280: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x153280u;
    SET_GPR_U32(ctx, 31, 0x153288u);
    ctx->pc = 0x153284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153280u;
    // 0x153284: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AE0u, 0x153280u, 0x153288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153288u;
label_153288:
    // 0x153288: 0x94490000  lhu         $t1, 0x0($v0)
    ctx->pc = 0x153288u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15328c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15328cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153290: 0x19200023  blez        $t1, . + 4 + (0x23 << 2)
    ctx->pc = 0x153290u;
    {
        const bool branch_taken_0x153290 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x153294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153290u;
        // 0x153294: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153290) {
            ctx->pc = 0x153320u;
            goto label_153320;
        }
    }
    ctx->pc = 0x153298u;
    // 0x153298: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x153298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x15329c: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x15329cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1532a0: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1532a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1532a4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1532a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1532a8: 0x248a004c  addiu       $t2, $a0, 0x4C
    ctx->pc = 0x1532a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x1532ac: 0x9467f102  lhu         $a3, -0xEFE($v1)
    ctx->pc = 0x1532acu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963458)));
    // 0x1532b0: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x1532b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1532b4:
    // 0x1532b4: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x1532b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1532b8: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x1532b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1532bc: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x1532bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1532c0: 0x106082a  slt         $at, $t0, $a2
    ctx->pc = 0x1532c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1532c4: 0xa7a4004c  sh          $a0, 0x4C($sp)
    ctx->pc = 0x1532c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 4));
    // 0x1532c8: 0xa7a3004e  sh          $v1, 0x4E($sp)
    ctx->pc = 0x1532c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 3));
    // 0x1532cc: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1532CCu;
    {
        const bool branch_taken_0x1532cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532CCu;
        // 0x1532d0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532cc) {
            ctx->pc = 0x15330Cu;
            goto label_15330c;
        }
    }
    ctx->pc = 0x1532D4u;
    // 0x1532d4: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x1532d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1532d8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1532d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1532dc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1532dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1532e0: 0x5420000b  bnel        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1532E0u;
    {
        const bool branch_taken_0x1532e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1532e0) {
            ctx->pc = 0x1532E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1532E0u;
            // 0x1532e4: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153310u;
            goto label_153310;
        }
    }
    ctx->pc = 0x1532E8u;
    // 0x1532e8: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x1532e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1532ec: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1532f0: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1532f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1532f4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1532f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1532f8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1532f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1532fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1532FCu;
    {
        const bool branch_taken_0x1532fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1532fc) {
            ctx->pc = 0x15330Cu;
            goto label_15330c;
        }
    }
    ctx->pc = 0x153304u;
    // 0x153304: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153304u;
    {
        const bool branch_taken_0x153304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153304u;
        // 0x153308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153304) {
            ctx->pc = 0x153324u;
            goto label_153324;
        }
    }
    ctx->pc = 0x15330Cu;
label_15330c:
    // 0x15330c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x15330cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_153310:
    // 0x153310: 0x169182a  slt         $v1, $t3, $t1
    ctx->pc = 0x153310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x153314: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x153314u;
    {
        const bool branch_taken_0x153314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x153314) {
            ctx->pc = 0x153318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153314u;
            // 0x153318: 0x94460000  lhu         $a2, 0x0($v0) (Delay Slot)
            SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1532B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1532b4;
        }
    }
    ctx->pc = 0x15331Cu;
    // 0x15331c: 0x0  nop
    ctx->pc = 0x15331cu;
    // NOP
label_153320:
    // 0x153320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153324:
    // 0x153324: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x153324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15332c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15332cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153334: 0x3e00008  jr          $ra
    ctx->pc = 0x153334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153334u;
        // 0x153338: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15333Cu;
    // 0x15333c: 0x0  nop
    ctx->pc = 0x15333cu;
    // NOP
    if (ctx->pc == 0x15333cu) { ctx->pc = 0x153340u; }
}
