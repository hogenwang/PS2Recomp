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

// Function: sub_00280128
// Address: 0x280128 - 0x2802d8
void sub_00280128_0x280128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280128_0x280128");
#endif

    switch (ctx->pc) {
        case 0x2801d4u: goto label_2801d4;
        case 0x2801fcu: goto label_2801fc;
        case 0x280240u: goto label_280240;
        case 0x280254u: goto label_280254;
        case 0x280268u: goto label_280268;
        default: break;
    }

    ctx->pc = 0x280128u;

    // 0x280128: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x280128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28012c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x28012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x280130: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x280130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x280134: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x280134u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280138: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x280138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x28013c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28013cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280140: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x280140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x280144: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x280144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280148: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x280148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28014c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28014cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280150: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x280150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x280154: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x280154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x280158: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280158u;
    {
        const bool branch_taken_0x280158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280158u;
        // 0x28015c: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280158) {
            ctx->pc = 0x28016Cu;
            goto label_28016c;
        }
    }
    ctx->pc = 0x280160u;
    // 0x280160: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x280160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x280164: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x280164u;
    {
        const bool branch_taken_0x280164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280164) {
            ctx->pc = 0x280168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280164u;
            // 0x280168: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280174u;
            goto label_280174;
        }
    }
    ctx->pc = 0x28016Cu;
label_28016c:
    // 0x28016c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x28016Cu;
    {
        const bool branch_taken_0x28016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28016Cu;
        // 0x280170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28016c) {
            ctx->pc = 0x2802B0u;
            goto label_2802b0;
        }
    }
    ctx->pc = 0x280174u;
label_280174:
    // 0x280174: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x280174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280178: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x280178u;
    {
        const bool branch_taken_0x280178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280178u;
        // 0x28017c: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280178) {
            ctx->pc = 0x2801C4u;
            goto label_2801c4;
        }
    }
    ctx->pc = 0x280180u;
    // 0x280180: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x280180u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x280184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280188: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280188u;
    {
        const bool branch_taken_0x280188 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x28018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280188u;
        // 0x28018c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280188) {
            ctx->pc = 0x2801A4u;
            goto label_2801a4;
        }
    }
    ctx->pc = 0x280190u;
    // 0x280190: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x280190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x280194: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280194u;
    {
        const bool branch_taken_0x280194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280194u;
        // 0x280198: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280194) {
            ctx->pc = 0x2801A4u;
            goto label_2801a4;
        }
    }
    ctx->pc = 0x28019Cu;
    // 0x28019c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28019Cu;
    {
        const bool branch_taken_0x28019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2801A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28019Cu;
        // 0x2801a0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28019c) {
            ctx->pc = 0x2801C0u;
            goto label_2801c0;
        }
    }
    ctx->pc = 0x2801A4u;
label_2801a4:
    // 0x2801a4: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2801A4u;
    {
        const bool branch_taken_0x2801a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2801A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801A4u;
        // 0x2801a8: 0x748821  addu        $s1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801a4) {
            ctx->pc = 0x2801C4u;
            goto label_2801c4;
        }
    }
    ctx->pc = 0x2801ACu;
    // 0x2801ac: 0x28c20081  slti        $v0, $a2, 0x81
    ctx->pc = 0x2801acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2801b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2801B0u;
    {
        const bool branch_taken_0x2801b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2801B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801B0u;
        // 0x2801b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801b0) {
            ctx->pc = 0x2801C8u;
            goto label_2801c8;
        }
    }
    ctx->pc = 0x2801B8u;
    // 0x2801b8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2801b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2801bc: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x2801bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2801c0:
    // 0x2801c0: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x2801c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2801c4:
    // 0x2801c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2801c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2801c8:
    // 0x2801c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2801c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801cc: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2801CCu;
    SET_GPR_U32(ctx, 31, 0x2801D4u);
    ctx->pc = 0x2801D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801CCu;
    // 0x2801d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2801CCu, 0x2801D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801D4u;
label_2801d4:
    // 0x2801d4: 0x12600036  beqz        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x2801D4u;
    {
        const bool branch_taken_0x2801d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2801D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801D4u;
        // 0x2801d8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801d4) {
            ctx->pc = 0x2802B0u;
            goto label_2802b0;
        }
    }
    ctx->pc = 0x2801DCu;
    // 0x2801dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2801dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2801e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2801e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2801e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2801e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2801ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2801f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2801f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2801f4: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2801F4u;
    SET_GPR_U32(ctx, 31, 0x2801FCu);
    ctx->pc = 0x2801F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801F4u;
    // 0x2801f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2801F4u, 0x2801FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801FCu;
label_2801fc:
    // 0x2801fc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2801FCu;
    {
        const bool branch_taken_0x2801fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x280200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801FCu;
        // 0x280200: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801fc) {
            ctx->pc = 0x280210u;
            goto label_280210;
        }
    }
    ctx->pc = 0x280204u;
    // 0x280204: 0xa0560000  sb          $s6, 0x0($v0)
    ctx->pc = 0x280204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 22));
    // 0x280208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28020c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28020cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_280210:
    // 0x280210: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x280210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x280214: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x280214u;
    {
        const bool branch_taken_0x280214 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x280218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280214u;
        // 0x280218: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280214) {
            ctx->pc = 0x280230u;
            goto label_280230;
        }
    }
    ctx->pc = 0x28021Cu;
    // 0x28021c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280220: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x280220u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x280224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280228: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x280228u;
    {
        const bool branch_taken_0x280228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280228u;
        // 0x28022c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280228) {
            ctx->pc = 0x2802A4u;
            goto label_2802a4;
        }
    }
    ctx->pc = 0x280230u;
label_280230:
    // 0x280230: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280230u;
    {
        const bool branch_taken_0x280230 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x280234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280230u;
        // 0x280234: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280230) {
            ctx->pc = 0x280254u;
            goto label_280254;
        }
    }
    ctx->pc = 0x280238u;
    // 0x280238: 0xc049c48  jal         func_127120
    ctx->pc = 0x280238u;
    SET_GPR_U32(ctx, 31, 0x280240u);
    ctx->pc = 0x28023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280238u;
    // 0x28023c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x280238u, 0x280240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280240u;
label_280240:
    // 0x280240: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x280240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x280244: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x280244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28024c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28024Cu;
    {
        const bool branch_taken_0x28024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28024Cu;
        // 0x280250: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28024c) {
            ctx->pc = 0x2802A4u;
            goto label_2802a4;
        }
    }
    ctx->pc = 0x280254u;
label_280254:
    // 0x280254: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x280254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x280258: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x280258u;
    {
        const bool branch_taken_0x280258 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x28025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280258u;
        // 0x28025c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280258) {
            ctx->pc = 0x280290u;
            goto label_280290;
        }
    }
    ctx->pc = 0x280260u;
    // 0x280260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x280260u;
    {
        const bool branch_taken_0x280260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280260u;
        // 0x280264: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280260) {
            ctx->pc = 0x280270u;
            goto label_280270;
        }
    }
    ctx->pc = 0x280268u;
label_280268:
    // 0x280268: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x280268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28026c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x28026cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_280270:
    // 0x280270: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x280270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x280274: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x280274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x280278: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x280278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x28027c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28027cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x280280: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280284: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x280284u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x280288: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x280288u;
    {
        const bool branch_taken_0x280288 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x28028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280288u;
        // 0x28028c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280288) {
            ctx->pc = 0x280268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280268;
        }
    }
    ctx->pc = 0x280290u;
label_280290:
    // 0x280290: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x280290u;
    {
        const bool branch_taken_0x280290 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x280294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280290u;
        // 0x280294: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280290) {
            ctx->pc = 0x2802A8u;
            goto label_2802a8;
        }
    }
    ctx->pc = 0x280298u;
    // 0x280298: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x280298u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28029c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x28029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2802a0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2802a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2802a4:
    // 0x2802a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2802a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2802a8:
    // 0x2802a8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2802a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802ac: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2802acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2802b0:
    // 0x2802b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2802b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2802b4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2802b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2802b8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2802b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2802bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2802bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2802c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2802c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2802c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2802c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2802c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2802c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2802cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2802ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2802d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2802D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2802D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802D0u;
        // 0x2802d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2802D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2802D8u;
}
