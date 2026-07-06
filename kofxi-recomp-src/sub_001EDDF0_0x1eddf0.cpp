#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EDDF0
// Address: 0x1eddf0 - 0x1edeb0
void sub_001EDDF0_0x1eddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDDF0_0x1eddf0");
#endif

    switch (ctx->pc) {
        case 0x1eddf0u: goto label_1eddf0;
        case 0x1eddf4u: goto label_1eddf4;
        case 0x1eddf8u: goto label_1eddf8;
        case 0x1eddfcu: goto label_1eddfc;
        case 0x1ede00u: goto label_1ede00;
        case 0x1ede04u: goto label_1ede04;
        case 0x1ede08u: goto label_1ede08;
        case 0x1ede0cu: goto label_1ede0c;
        case 0x1ede10u: goto label_1ede10;
        case 0x1ede14u: goto label_1ede14;
        case 0x1ede18u: goto label_1ede18;
        case 0x1ede1cu: goto label_1ede1c;
        case 0x1ede20u: goto label_1ede20;
        case 0x1ede24u: goto label_1ede24;
        case 0x1ede28u: goto label_1ede28;
        case 0x1ede2cu: goto label_1ede2c;
        case 0x1ede30u: goto label_1ede30;
        case 0x1ede34u: goto label_1ede34;
        case 0x1ede38u: goto label_1ede38;
        case 0x1ede3cu: goto label_1ede3c;
        case 0x1ede40u: goto label_1ede40;
        case 0x1ede44u: goto label_1ede44;
        case 0x1ede48u: goto label_1ede48;
        case 0x1ede4cu: goto label_1ede4c;
        case 0x1ede50u: goto label_1ede50;
        case 0x1ede54u: goto label_1ede54;
        case 0x1ede58u: goto label_1ede58;
        case 0x1ede5cu: goto label_1ede5c;
        case 0x1ede60u: goto label_1ede60;
        case 0x1ede64u: goto label_1ede64;
        case 0x1ede68u: goto label_1ede68;
        case 0x1ede6cu: goto label_1ede6c;
        case 0x1ede70u: goto label_1ede70;
        case 0x1ede74u: goto label_1ede74;
        case 0x1ede78u: goto label_1ede78;
        case 0x1ede7cu: goto label_1ede7c;
        case 0x1ede80u: goto label_1ede80;
        case 0x1ede84u: goto label_1ede84;
        case 0x1ede88u: goto label_1ede88;
        case 0x1ede8cu: goto label_1ede8c;
        case 0x1ede90u: goto label_1ede90;
        case 0x1ede94u: goto label_1ede94;
        case 0x1ede98u: goto label_1ede98;
        case 0x1ede9cu: goto label_1ede9c;
        case 0x1edea0u: goto label_1edea0;
        case 0x1edea4u: goto label_1edea4;
        case 0x1edea8u: goto label_1edea8;
        case 0x1edeacu: goto label_1edeac;
        default: break;
    }

    ctx->pc = 0x1eddf0u;

label_1eddf0:
    // 0x1eddf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1eddf4:
    // 0x1eddf4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1eddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1eddf8:
    // 0x1eddf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eddf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eddfc:
    // 0x1eddfc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1eddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1ede00:
    // 0x1ede00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ede00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ede04:
    // 0x1ede04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ede04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ede08:
    // 0x1ede08: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1ede08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ede0c:
    // 0x1ede0c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ede0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1ede10:
    // 0x1ede10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ede10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ede14:
    // 0x1ede14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ede14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ede18:
    // 0x1ede18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ede18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ede1c:
    // 0x1ede1c: 0xc07aa2a  jal         func_1EA8A8
label_1ede20:
    if (ctx->pc == 0x1EDE20u) {
        ctx->pc = 0x1EDE20u;
            // 0x1ede20: 0x8e051fdc  lw          $a1, 0x1FDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8156)));
        ctx->pc = 0x1EDE24u;
        goto label_1ede24;
    }
    ctx->pc = 0x1EDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EDE24u);
    ctx->pc = 0x1EDE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE1Cu;
            // 0x1ede20: 0x8e051fdc  lw          $a1, 0x1FDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA8A8u;
    if (runtime->hasFunction(0x1EA8A8u)) {
        auto targetFn = runtime->lookupFunction(0x1EA8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE24u; }
        if (ctx->pc != 0x1EDE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA8A8_0x1ea8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE24u; }
        if (ctx->pc != 0x1EDE24u) { return; }
    }
    ctx->pc = 0x1EDE24u;
label_1ede24:
    // 0x1ede24: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_1ede28:
    if (ctx->pc == 0x1EDE28u) {
        ctx->pc = 0x1EDE28u;
            // 0x1ede28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1EDE2Cu;
        goto label_1ede2c;
    }
    ctx->pc = 0x1EDE24u;
    {
        const bool branch_taken_0x1ede24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ede24) {
            ctx->pc = 0x1EDE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE24u;
            // 0x1ede28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDE98u;
            goto label_1ede98;
        }
    }
    ctx->pc = 0x1EDE2Cu;
label_1ede2c:
    // 0x1ede2c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ede2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ede30:
    // 0x1ede30: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1ede30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1ede34:
    // 0x1ede34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ede34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ede38:
    // 0x1ede38: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ede38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ede3c:
    // 0x1ede3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1ede3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ede40:
    // 0x1ede40: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ede40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1ede44:
    // 0x1ede44: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1ede44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_1ede48:
    // 0x1ede48: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1ede48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ede4c:
    // 0x1ede4c: 0x28c20800  slti        $v0, $a2, 0x800
    ctx->pc = 0x1ede4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2048) ? 1 : 0);
label_1ede50:
    // 0x1ede50: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1ede54:
    if (ctx->pc == 0x1EDE54u) {
        ctx->pc = 0x1EDE54u;
            // 0x1ede54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE58u;
        goto label_1ede58;
    }
    ctx->pc = 0x1EDE50u;
    {
        const bool branch_taken_0x1ede50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE50u;
            // 0x1ede54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede50) {
            ctx->pc = 0x1EDE94u;
            goto label_1ede94;
        }
    }
    ctx->pc = 0x1EDE58u;
label_1ede58:
    // 0x1ede58: 0x8e023804  lw          $v0, 0x3804($s0)
    ctx->pc = 0x1ede58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14340)));
label_1ede5c:
    // 0x1ede5c: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_1ede60:
    if (ctx->pc == 0x1EDE60u) {
        ctx->pc = 0x1EDE60u;
            // 0x1ede60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE64u;
        goto label_1ede64;
    }
    ctx->pc = 0x1EDE5Cu;
    {
        const bool branch_taken_0x1ede5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE5Cu;
            // 0x1ede60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede5c) {
            ctx->pc = 0x1EDE94u;
            goto label_1ede94;
        }
    }
    ctx->pc = 0x1EDE64u;
label_1ede64:
    // 0x1ede64: 0x8e023800  lw          $v0, 0x3800($s0)
    ctx->pc = 0x1ede64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14336)));
label_1ede68:
    // 0x1ede68: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1ede68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_1ede6c:
    // 0x1ede6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1ede70:
    if (ctx->pc == 0x1EDE70u) {
        ctx->pc = 0x1EDE70u;
            // 0x1ede70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE74u;
        goto label_1ede74;
    }
    ctx->pc = 0x1EDE6Cu;
    {
        const bool branch_taken_0x1ede6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE6Cu;
            // 0x1ede70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede6c) {
            ctx->pc = 0x1EDE94u;
            goto label_1ede94;
        }
    }
    ctx->pc = 0x1EDE74u;
label_1ede74:
    // 0x1ede74: 0x8e0237f8  lw          $v0, 0x37F8($s0)
    ctx->pc = 0x1ede74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14328)));
label_1ede78:
    // 0x1ede78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ede7c:
    if (ctx->pc == 0x1EDE7Cu) {
        ctx->pc = 0x1EDE7Cu;
            // 0x1ede7c: 0x8e0437fc  lw          $a0, 0x37FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14332)));
        ctx->pc = 0x1EDE80u;
        goto label_1ede80;
    }
    ctx->pc = 0x1EDE78u;
    {
        const bool branch_taken_0x1ede78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE78u;
            // 0x1ede7c: 0x8e0437fc  lw          $a0, 0x37FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede78) {
            ctx->pc = 0x1EDE88u;
            goto label_1ede88;
        }
    }
    ctx->pc = 0x1EDE80u;
label_1ede80:
    // 0x1ede80: 0x40f809  jalr        $v0
label_1ede84:
    if (ctx->pc == 0x1EDE84u) {
        ctx->pc = 0x1EDE88u;
        goto label_1ede88;
    }
    ctx->pc = 0x1EDE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EDE88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EDE88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE88u; }
            if (ctx->pc != 0x1EDE88u) { return; }
        }
        }
    }
    ctx->pc = 0x1EDE88u;
label_1ede88:
    // 0x1ede88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ede88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ede8c:
    // 0x1ede8c: 0xae023804  sw          $v0, 0x3804($s0)
    ctx->pc = 0x1ede8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14340), GPR_U32(ctx, 2));
label_1ede90:
    // 0x1ede90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ede90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ede94:
    // 0x1ede94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ede94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ede98:
    // 0x1ede98: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ede98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ede9c:
    // 0x1ede9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ede9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1edea0:
    // 0x1edea0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1edea0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1edea4:
    // 0x1edea4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1edea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1edea8:
    // 0x1edea8: 0x3e00008  jr          $ra
label_1edeac:
    if (ctx->pc == 0x1EDEACu) {
        ctx->pc = 0x1EDEACu;
            // 0x1edeac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1EDEB0u;
        goto label_fallthrough_0x1edea8;
    }
    ctx->pc = 0x1EDEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEA8u;
            // 0x1edeac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1edea8:
    ctx->pc = 0x1EDEB0u;
    ctx->pc = 0x1edeb0u;
}
