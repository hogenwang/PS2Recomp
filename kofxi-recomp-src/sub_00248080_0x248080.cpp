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

// Function: sub_00248080
// Address: 0x248080 - 0x248300
void sub_00248080_0x248080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248080_0x248080");
#endif

    switch (ctx->pc) {
        case 0x2480b4u: goto label_2480b4;
        case 0x2480d8u: goto label_2480d8;
        case 0x248110u: goto label_248110;
        case 0x24816cu: goto label_24816c;
        case 0x2481e0u: goto label_2481e0;
        case 0x248280u: goto label_248280;
        case 0x2482a8u: goto label_2482a8;
        case 0x2482ccu: goto label_2482cc;
        case 0x2482dcu: goto label_2482dc;
        default: break;
    }

    ctx->pc = 0x248080u;

    // 0x248080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x248084: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x248088: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x248088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24808c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24808cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248090: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x248090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x248094: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x248094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248098: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x248098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24809c: 0x26320060  addiu       $s2, $s1, 0x60
    ctx->pc = 0x24809cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2480a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2480a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2480a4: 0x8a500003  lwl         $s0, 0x3($s2)
    ctx->pc = 0x2480a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x2480a8: 0x9a500000  lwr         $s0, 0x0($s2)
    ctx->pc = 0x2480a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x2480ac: 0xc08a254  jal         func_228950
    ctx->pc = 0x2480ACu;
    SET_GPR_U32(ctx, 31, 0x2480B4u);
    ctx->pc = 0x2480B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480ACu;
    // 0x2480b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2480ACu, 0x2480B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480B4u;
label_2480b4:
    // 0x2480b4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2480B4u;
    {
        const bool branch_taken_0x2480b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2480B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480B4u;
        // 0x2480b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480b4) {
            ctx->pc = 0x2480D8u;
            goto label_2480d8;
        }
    }
    ctx->pc = 0x2480BCu;
    // 0x2480bc: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x2480bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x2480c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2480c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2480c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2480c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2480c8: 0x90470005  lbu         $a3, 0x5($v0)
    ctx->pc = 0x2480c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2480cc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2480ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2480d0: 0xc091ca6  jal         func_247298
    ctx->pc = 0x2480D0u;
    SET_GPR_U32(ctx, 31, 0x2480D8u);
    ctx->pc = 0x2480D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480D0u;
    // 0x2480d4: 0x473821  addu        $a3, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247298u, 0x2480D0u, 0x2480D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480D8u;
label_2480d8:
    // 0x2480d8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2480d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2480dc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x2480dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x2480e0: 0x24426f10  addiu       $v0, $v0, 0x6F10
    ctx->pc = 0x2480e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28432));
    // 0x2480e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2480e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2480e8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2480e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2480ec: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2480ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2480f0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2480f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2480f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2480f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2480f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2480f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2480fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2480fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248104: 0x3e00008  jr          $ra
    ctx->pc = 0x248104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248104u;
        // 0x248108: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24810Cu;
    // 0x24810c: 0x0  nop
    ctx->pc = 0x24810cu;
    // NOP
label_248110:
    // 0x248110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24811c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24811cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248120: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x248120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x248124: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x248124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x248128: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x248128u;
    {
        const bool branch_taken_0x248128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248128) {
            ctx->pc = 0x24812Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248128u;
            // 0x24812c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248198u;
            goto label_248198;
        }
    }
    ctx->pc = 0x248130u;
    // 0x248130: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x248130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x248134: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x248134u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x248138: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x248138u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x24813c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248140: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x248140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x248144: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x248144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x248148: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x248148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24814c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x24814Cu;
    {
        const bool branch_taken_0x24814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24814c) {
            ctx->pc = 0x248150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24814Cu;
            // 0x248150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248198u;
            goto label_248198;
        }
    }
    ctx->pc = 0x248154u;
    // 0x248154: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x248154u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x248158: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x248158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24815c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x24815cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x248160: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x248160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x248164: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x248164u;
    SET_GPR_U32(ctx, 31, 0x24816Cu);
    ctx->pc = 0x248168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248164u;
    // 0x248168: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x248164u, 0x24816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24816Cu;
label_24816c:
    // 0x24816c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24816cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248170: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x248170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x248174: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248174u;
    {
        const bool branch_taken_0x248174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x248178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248174u;
        // 0x248178: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248174) {
            ctx->pc = 0x248184u;
            goto label_248184;
        }
    }
    ctx->pc = 0x24817Cu;
    // 0x24817c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24817Cu;
    {
        const bool branch_taken_0x24817c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x248180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24817Cu;
        // 0x248180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24817c) {
            ctx->pc = 0x248198u;
            goto label_248198;
        }
    }
    ctx->pc = 0x248184u;
label_248184:
    // 0x248184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24818c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24818cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248190: 0x809206a  j           func_2481A8
    ctx->pc = 0x248190u;
    ctx->pc = 0x248194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248190u;
    // 0x248194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2481A8u;
    goto label_2481a8;
    ctx->pc = 0x248198u;
label_248198:
    // 0x248198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24819c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24819cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2481a0: 0x808a9d6  j           func_22A758
    ctx->pc = 0x2481A0u;
    ctx->pc = 0x2481A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481A0u;
    // 0x2481a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x2481A8u;
label_2481a8:
    // 0x2481a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2481a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2481ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2481acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2481b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2481b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2481b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2481b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2481b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2481bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2481bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2481c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2481c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2481c4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2481c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2481c8: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x2481c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2481cc: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x2481ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2481d0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x2481d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x2481d4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2481d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2481d8: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2481D8u;
    SET_GPR_U32(ctx, 31, 0x2481E0u);
    ctx->pc = 0x2481DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481D8u;
    // 0x2481dc: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x2481D8u, 0x2481E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481E0u;
label_2481e0:
    // 0x2481e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2481e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2481e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2481e8: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2481E8u;
    {
        const bool branch_taken_0x2481e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2481ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481E8u;
        // 0x2481ec: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481e8) {
            ctx->pc = 0x2482DCu;
            goto label_2482dc;
        }
    }
    ctx->pc = 0x2481F0u;
    // 0x2481f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2481F0u;
    {
        const bool branch_taken_0x2481f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481F0u;
        // 0x2481f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481f0) {
            ctx->pc = 0x24821Cu;
            goto label_24821c;
        }
    }
    ctx->pc = 0x2481F8u;
    // 0x2481f8: 0x18600039  blez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2481F8u;
    {
        const bool branch_taken_0x2481f8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2481FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481F8u;
        // 0x2481fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481f8) {
            ctx->pc = 0x2482E0u;
            goto label_2482e0;
        }
    }
    ctx->pc = 0x248200u;
    // 0x248200: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x248200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248204: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x248204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248208: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x248208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24820c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24820cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248214: 0x8091dd4  j           func_247750
    ctx->pc = 0x248214u;
    ctx->pc = 0x248218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248214u;
    // 0x248218: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247750u;
    sub_00247750_0x247750(rdram, ctx, runtime); return;
    ctx->pc = 0x24821Cu;
label_24821c:
    // 0x24821c: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x24821Cu;
    {
        const bool branch_taken_0x24821c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x248220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24821Cu;
        // 0x248220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24821c) {
            ctx->pc = 0x2482E0u;
            goto label_2482e0;
        }
    }
    ctx->pc = 0x248224u;
    // 0x248224: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x248224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x248228: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x248228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x24822c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x24822Cu;
    {
        const bool branch_taken_0x24822c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24822Cu;
        // 0x248230: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24822c) {
            ctx->pc = 0x2482E0u;
            goto label_2482e0;
        }
    }
    ctx->pc = 0x248234u;
    // 0x248234: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x248234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x248238: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x248238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x24823c: 0x54820028  bnel        $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x24823Cu;
    {
        const bool branch_taken_0x24823c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24823c) {
            ctx->pc = 0x248240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24823Cu;
            // 0x248240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2482E0u;
            goto label_2482e0;
        }
    }
    ctx->pc = 0x248244u;
    // 0x248244: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x248244u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x248248: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x248248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x24824c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24824Cu;
    {
        const bool branch_taken_0x24824c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24824Cu;
        // 0x248250: 0x3c1201c1  lui         $s2, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24824c) {
            ctx->pc = 0x2482D4u;
            goto label_2482d4;
        }
    }
    ctx->pc = 0x248254u;
    // 0x248254: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x248254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x248258: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x248258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x24825c: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x24825cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x248260: 0x90650005  lbu         $a1, 0x5($v1)
    ctx->pc = 0x248260u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x248264: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x248264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x248268: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x248268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x24826c: 0x90660006  lbu         $a2, 0x6($v1)
    ctx->pc = 0x24826cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x248270: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x248270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x248274: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x248274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x248278: 0xc048c5e  jal         func_123178
    ctx->pc = 0x248278u;
    SET_GPR_U32(ctx, 31, 0x248280u);
    ctx->pc = 0x24827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248278u;
    // 0x24827c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x248278u, 0x248280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248280u;
label_248280:
    // 0x248280: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x248280u;
    {
        const bool branch_taken_0x248280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248280u;
        // 0x248284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248280) {
            ctx->pc = 0x2482E0u;
            goto label_2482e0;
        }
    }
    ctx->pc = 0x248288u;
    // 0x248288: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x248288u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24828c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x24828cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x248290: 0x24a5ae40  addiu       $a1, $a1, -0x51C0
    ctx->pc = 0x248290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946368));
    // 0x248294: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x248294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x248298: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x248298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x24829c: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x24829cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x2482a0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2482A0u;
    SET_GPR_U32(ctx, 31, 0x2482A8u);
    ctx->pc = 0x2482A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482A0u;
    // 0x2482a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2482A0u, 0x2482A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482A8u;
label_2482a8:
    // 0x2482a8: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x2482a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2482ac: 0x2645ae38  addiu       $a1, $s2, -0x51C8
    ctx->pc = 0x2482acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946360));
    // 0x2482b0: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x2482b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2482b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2482b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2482b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2482b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2482bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2482bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2482c0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2482c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2482c4: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2482C4u;
    SET_GPR_U32(ctx, 31, 0x2482CCu);
    ctx->pc = 0x2482C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482C4u;
    // 0x2482c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2482C4u, 0x2482CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482CCu;
label_2482cc:
    // 0x2482cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2482ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2482d0: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x2482d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
label_2482d4:
    // 0x2482d4: 0xc08b6f0  jal         func_22DBC0
    ctx->pc = 0x2482D4u;
    SET_GPR_U32(ctx, 31, 0x2482DCu);
    ctx->pc = 0x2482D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482D4u;
    // 0x2482d8: 0x2644ae38  addiu       $a0, $s2, -0x51C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x2482D4u, 0x2482DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482DCu;
label_2482dc:
    // 0x2482dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2482dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2482e0:
    // 0x2482e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2482e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2482e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2482e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2482e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2482e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2482ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2482ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2482f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2482f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2482f4: 0x808a9d6  j           func_22A758
    ctx->pc = 0x2482F4u;
    ctx->pc = 0x2482F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482F4u;
    // 0x2482f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x2482FCu;
    // 0x2482fc: 0x0  nop
    ctx->pc = 0x2482fcu;
    // NOP
}
