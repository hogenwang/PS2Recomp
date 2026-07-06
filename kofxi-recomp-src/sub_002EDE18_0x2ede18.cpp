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

// Function: sub_002EDE18
// Address: 0x2ede18 - 0x2ee858
void sub_002EDE18_0x2ede18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDE18_0x2ede18");
#endif

    switch (ctx->pc) {
        case 0x2ede3cu: goto label_2ede3c;
        case 0x2ede8cu: goto label_2ede8c;
        case 0x2edebcu: goto label_2edebc;
        case 0x2edec4u: goto label_2edec4;
        case 0x2edf40u: goto label_2edf40;
        case 0x2edf4cu: goto label_2edf4c;
        case 0x2edf50u: goto label_2edf50;
        case 0x2edf58u: goto label_2edf58;
        case 0x2edf64u: goto label_2edf64;
        case 0x2edf68u: goto label_2edf68;
        case 0x2edfacu: goto label_2edfac;
        case 0x2edfb8u: goto label_2edfb8;
        case 0x2edfccu: goto label_2edfcc;
        case 0x2edfdcu: goto label_2edfdc;
        case 0x2edff8u: goto label_2edff8;
        case 0x2ee00cu: goto label_2ee00c;
        case 0x2ee040u: goto label_2ee040;
        case 0x2ee04cu: goto label_2ee04c;
        case 0x2ee060u: goto label_2ee060;
        case 0x2ee070u: goto label_2ee070;
        case 0x2ee08cu: goto label_2ee08c;
        case 0x2ee09cu: goto label_2ee09c;
        case 0x2ee0a4u: goto label_2ee0a4;
        case 0x2ee0b0u: goto label_2ee0b0;
        case 0x2ee0b8u: goto label_2ee0b8;
        case 0x2ee0ccu: goto label_2ee0cc;
        case 0x2ee0e4u: goto label_2ee0e4;
        case 0x2ee0f0u: goto label_2ee0f0;
        case 0x2ee10cu: goto label_2ee10c;
        case 0x2ee114u: goto label_2ee114;
        case 0x2ee150u: goto label_2ee150;
        case 0x2ee170u: goto label_2ee170;
        case 0x2ee194u: goto label_2ee194;
        case 0x2ee1a8u: goto label_2ee1a8;
        case 0x2ee1b4u: goto label_2ee1b4;
        case 0x2ee1c8u: goto label_2ee1c8;
        case 0x2ee1e4u: goto label_2ee1e4;
        case 0x2ee1f8u: goto label_2ee1f8;
        case 0x2ee200u: goto label_2ee200;
        case 0x2ee214u: goto label_2ee214;
        case 0x2ee218u: goto label_2ee218;
        case 0x2ee22cu: goto label_2ee22c;
        case 0x2ee24cu: goto label_2ee24c;
        case 0x2ee278u: goto label_2ee278;
        case 0x2ee290u: goto label_2ee290;
        case 0x2ee2a4u: goto label_2ee2a4;
        case 0x2ee2d4u: goto label_2ee2d4;
        case 0x2ee2e8u: goto label_2ee2e8;
        case 0x2ee308u: goto label_2ee308;
        case 0x2ee30cu: goto label_2ee30c;
        case 0x2ee310u: goto label_2ee310;
        case 0x2ee36cu: goto label_2ee36c;
        case 0x2ee390u: goto label_2ee390;
        case 0x2ee3a8u: goto label_2ee3a8;
        case 0x2ee3d0u: goto label_2ee3d0;
        case 0x2ee3f4u: goto label_2ee3f4;
        case 0x2ee3fcu: goto label_2ee3fc;
        case 0x2ee410u: goto label_2ee410;
        case 0x2ee424u: goto label_2ee424;
        case 0x2ee43cu: goto label_2ee43c;
        case 0x2ee46cu: goto label_2ee46c;
        case 0x2ee480u: goto label_2ee480;
        case 0x2ee494u: goto label_2ee494;
        case 0x2ee4bcu: goto label_2ee4bc;
        case 0x2ee4c4u: goto label_2ee4c4;
        case 0x2ee4dcu: goto label_2ee4dc;
        case 0x2ee4e4u: goto label_2ee4e4;
        case 0x2ee520u: goto label_2ee520;
        case 0x2ee548u: goto label_2ee548;
        case 0x2ee560u: goto label_2ee560;
        case 0x2ee574u: goto label_2ee574;
        case 0x2ee588u: goto label_2ee588;
        case 0x2ee590u: goto label_2ee590;
        case 0x2ee5bcu: goto label_2ee5bc;
        case 0x2ee604u: goto label_2ee604;
        case 0x2ee640u: goto label_2ee640;
        case 0x2ee654u: goto label_2ee654;
        case 0x2ee660u: goto label_2ee660;
        case 0x2ee674u: goto label_2ee674;
        case 0x2ee67cu: goto label_2ee67c;
        case 0x2ee6a0u: goto label_2ee6a0;
        case 0x2ee6b8u: goto label_2ee6b8;
        case 0x2ee6c8u: goto label_2ee6c8;
        case 0x2ee6d4u: goto label_2ee6d4;
        case 0x2ee730u: goto label_2ee730;
        case 0x2ee774u: goto label_2ee774;
        case 0x2ee788u: goto label_2ee788;
        case 0x2ee794u: goto label_2ee794;
        case 0x2ee7a0u: goto label_2ee7a0;
        case 0x2ee7ccu: goto label_2ee7cc;
        case 0x2ee7d8u: goto label_2ee7d8;
        case 0x2ee7e4u: goto label_2ee7e4;
        case 0x2ee844u: goto label_2ee844;
        case 0x2ee850u: goto label_2ee850;
        default: break;
    }

    ctx->pc = 0x2ede18u;

    // 0x2ede18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ede18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ede1c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2ede1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2ede20: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2ede20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2ede24: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2ede24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2ede28: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2ede28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2ede2c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2ede2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2ede30: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2ede30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2ede34: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EDE34u;
    SET_GPR_U32(ctx, 31, 0x2EDE3Cu);
    ctx->pc = 0x2EDE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE34u;
    // 0x2ede38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EDE34u, 0x2EDE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE3Cu;
label_2ede3c:
    // 0x2ede3c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ede3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ede40: 0x8defeca8  lw          $t7, -0x1358($t7)
    ctx->pc = 0x2ede40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2ede44: 0x2dee0009  sltiu       $t6, $t7, 0x9
    ctx->pc = 0x2ede44u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ede48: 0x11c0017f  beqz        $t6, . + 4 + (0x17F << 2)
    ctx->pc = 0x2EDE48u;
    {
        const bool branch_taken_0x2ede48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE48u;
        // 0x2ede4c: 0x3c0e0040  lui         $t6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede48) {
            ctx->pc = 0x2EE448u;
            goto label_2ee448;
        }
    }
    ctx->pc = 0x2EDE50u;
    // 0x2ede50: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2ede50u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2ede54: 0x25ce0f14  addiu       $t6, $t6, 0xF14
    ctx->pc = 0x2ede54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3860));
    // 0x2ede58: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x2ede58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x2ede5c: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x2ede5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2ede60: 0x1a00008  jr          $t5
    ctx->pc = 0x2EDE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EDE68u: goto label_2ede68;
            case 0x2EE120u: goto label_2ee120;
            case 0x2EE448u: goto label_2ee448;
            case 0x2EE474u: goto label_2ee474;
            case 0x2EE4F0u: goto label_2ee4f0;
            case 0x2EE620u: goto label_2ee620;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDE60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EDE68u;
label_2ede68:
    // 0x2ede68: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ede68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ede6c: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ede6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ede70: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x2ede70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ede74: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x2ede74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ede78: 0x15cf003b  bne         $t6, $t7, . + 4 + (0x3B << 2)
    ctx->pc = 0x2EDE78u;
    {
        const bool branch_taken_0x2ede78 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE78u;
        // 0x2ede7c: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede78) {
            ctx->pc = 0x2EDF68u;
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EDE80u;
    // 0x2ede80: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2ede80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2ede84: 0xc0bc378  jal         func_2F0DE0
    ctx->pc = 0x2EDE84u;
    SET_GPR_U32(ctx, 31, 0x2EDE8Cu);
    ctx->pc = 0x2EDE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE84u;
    // 0x2ede88: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0DE0u, 0x2EDE84u, 0x2EDE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE8Cu;
label_2ede8c:
    // 0x2ede8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ede8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ede90: 0x5c400014  bgtzl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EDE90u;
    {
        const bool branch_taken_0x2ede90 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ede90) {
            ctx->pc = 0x2EDE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDE90u;
            // 0x2ede94: 0x8e0f0388  lw          $t7, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDE98u;
    // 0x2ede98: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2ede98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2ede9c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ede9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edea0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2edea0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2edea4: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2edea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2edea8: 0x25080dd0  addiu       $t0, $t0, 0xDD0
    ctx->pc = 0x2edea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3536));
    // 0x2edeac: 0x24050712  addiu       $a1, $zero, 0x712
    ctx->pc = 0x2edeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1810));
    // 0x2edeb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2edeb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edeb4: 0x34e763bd  ori         $a3, $a3, 0x63BD
    ctx->pc = 0x2edeb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
    // 0x2edeb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2edeb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edebc:
    // 0x2edebc: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2EDEBCu;
    SET_GPR_U32(ctx, 31, 0x2EDEC4u);
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2EDEBCu, 0x2EDEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEC4u;
label_2edec4:
    // 0x2edec4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2edec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2edec8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2edec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2edecc: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2edeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eded0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2eded0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2eded4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2eded4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eded8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2eded8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ededc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEDCu;
        // 0x2edee0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDEE4u;
label_2edee4:
    // 0x2edee4: 0x960e0020  lhu         $t6, 0x20($s0)
    ctx->pc = 0x2edee4u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2edee8: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EDEE8u;
    {
        const bool branch_taken_0x2edee8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edee8) {
            ctx->pc = 0x2EDEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDEE8u;
            // 0x2edeec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDEF0u;
            goto label_2edef0;
        }
    }
    ctx->pc = 0x2EDEF0u;
label_2edef0:
    // 0x2edef0: 0x1cf001b  divu        $zero, $t6, $t7
    ctx->pc = 0x2edef0u;
    { uint32_t divisor = GPR_U32(ctx, 15); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x2edef4: 0x6810  mfhi        $t5
    ctx->pc = 0x2edef4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x2edef8: 0x15a0001b  bnez        $t5, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EDEF8u;
    {
        const bool branch_taken_0x2edef8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEF8u;
        // 0x2edefc: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edef8) {
            ctx->pc = 0x2EDF68u;
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EDF00u;
    // 0x2edf00: 0x8e0f0058  lw          $t7, 0x58($s0)
    ctx->pc = 0x2edf00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2edf04: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EDF04u;
    {
        const bool branch_taken_0x2edf04 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF04u;
        // 0x2edf08: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf04) {
            ctx->pc = 0x2EDF68u;
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EDF0Cu;
    // 0x2edf0c: 0x8e0f03a0  lw          $t7, 0x3A0($s0)
    ctx->pc = 0x2edf0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x2edf10: 0x55e00080  bnel        $t7, $zero, . + 4 + (0x80 << 2)
    ctx->pc = 0x2EDF10u;
    {
        const bool branch_taken_0x2edf10 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edf10) {
            ctx->pc = 0x2EDF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDF10u;
            // 0x2edf14: 0x8e0f0384  lw          $t7, 0x384($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE114u;
            goto label_2ee114;
        }
    }
    ctx->pc = 0x2EDF18u;
    // 0x2edf18: 0x8e0f039c  lw          $t7, 0x39C($s0)
    ctx->pc = 0x2edf18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x2edf1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2edf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edf20: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2edf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2edf24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2edf24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf28: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2edf28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2edf2c: 0xae1103a0  sw          $s1, 0x3A0($s0)
    ctx->pc = 0x2edf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 17));
    // 0x2edf30: 0xae0f039c  sw          $t7, 0x39C($s0)
    ctx->pc = 0x2edf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 15));
    // 0x2edf34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2edf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf38: 0xc0bc1de  jal         func_2F0778
    ctx->pc = 0x2EDF38u;
    SET_GPR_U32(ctx, 31, 0x2EDF40u);
    ctx->pc = 0x2EDF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF38u;
    // 0x2edf3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0778u, 0x2EDF38u, 0x2EDF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF40u;
label_2edf40:
    // 0x2edf40: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2edf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2edf44: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EDF44u;
    SET_GPR_U32(ctx, 31, 0x2EDF4Cu);
    ctx->pc = 0x2EDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF44u;
    // 0x2edf48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EDF44u, 0x2EDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF4Cu;
label_2edf4c:
    // 0x2edf4c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2edf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2edf50:
    // 0x2edf50: 0xc0bc390  jal         func_2F0E40
    ctx->pc = 0x2EDF50u;
    SET_GPR_U32(ctx, 31, 0x2EDF58u);
    ctx->pc = 0x2EDF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF50u;
    // 0x2edf54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E40u, 0x2EDF50u, 0x2EDF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF58u;
label_2edf58:
    // 0x2edf58: 0x8e0f0050  lw          $t7, 0x50($s0)
    ctx->pc = 0x2edf58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2edf5c: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EDF5Cu;
    {
        const bool branch_taken_0x2edf5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edf5c) {
            ctx->pc = 0x2EDF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDF5Cu;
            // 0x2edf60: 0xae110050  sw          $s1, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDF64u;
            goto label_2edf64;
        }
    }
    ctx->pc = 0x2EDF64u;
label_2edf64:
    // 0x2edf64: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edf64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2edf68:
    // 0x2edf68: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x2edf68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2edf6c: 0x8dedeca8  lw          $t5, -0x1358($t7)
    ctx->pc = 0x2edf6cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2edf70: 0x15ae004a  bne         $t5, $t6, . + 4 + (0x4A << 2)
    ctx->pc = 0x2EDF70u;
    {
        const bool branch_taken_0x2edf70 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x2EDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF70u;
        // 0x2edf74: 0x25ececa8  addiu       $t4, $t7, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf70) {
            ctx->pc = 0x2EE09Cu;
            goto label_2ee09c;
        }
    }
    ctx->pc = 0x2EDF78u;
    // 0x2edf78: 0x8d8e0024  lw          $t6, 0x24($t4)
    ctx->pc = 0x2edf78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 36)));
    // 0x2edf7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2edf7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edf80: 0x15cf0022  bne         $t6, $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x2EDF80u;
    {
        const bool branch_taken_0x2edf80 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF80u;
        // 0x2edf84: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf80) {
            ctx->pc = 0x2EE00Cu;
            goto label_2ee00c;
        }
    }
    ctx->pc = 0x2EDF88u;
    // 0x2edf88: 0x958e0028  lhu         $t6, 0x28($t4)
    ctx->pc = 0x2edf88u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x2edf8c: 0x958f001c  lhu         $t7, 0x1C($t4)
    ctx->pc = 0x2edf8cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x2edf90: 0x15cf001e  bne         $t6, $t7, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EDF90u;
    {
        const bool branch_taken_0x2edf90 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF90u;
        // 0x2edf94: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf90) {
            ctx->pc = 0x2EE00Cu;
            goto label_2ee00c;
        }
    }
    ctx->pc = 0x2EDF98u;
    // 0x2edf98: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2edf98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2edf9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2edf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfa0: 0xad8f0024  sw          $t7, 0x24($t4)
    ctx->pc = 0x2edfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 15));
    // 0x2edfa4: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EDFA4u;
    SET_GPR_U32(ctx, 31, 0x2EDFACu);
    ctx->pc = 0x2EDFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDFA4u;
    // 0x2edfa8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EDFA4u, 0x2EDFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDFACu;
label_2edfac:
    // 0x2edfac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EDFACu;
    {
        const bool branch_taken_0x2edfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edfac) {
            ctx->pc = 0x2EDFD4u;
            goto label_2edfd4;
        }
    }
    ctx->pc = 0x2EDFB4u;
    // 0x2edfb4: 0x8c4f0010  lw          $t7, 0x10($v0)
    ctx->pc = 0x2edfb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2edfb8:
    // 0x2edfb8: 0x260e0001  addiu       $t6, $s0, 0x1
    ctx->pc = 0x2edfb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2edfbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2edfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfc0: 0x39ef0008  xori        $t7, $t7, 0x8
    ctx->pc = 0x2edfc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)8);
    // 0x2edfc4: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EDFC4u;
    SET_GPR_U32(ctx, 31, 0x2EDFCCu);
    ctx->pc = 0x2EDFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDFC4u;
    // 0x2edfc8: 0x1cf800a  movz        $s0, $t6, $t7 (Delay Slot)
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EDFC4u, 0x2EDFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDFCCu;
label_2edfcc:
    // 0x2edfcc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EDFCCu;
    {
        const bool branch_taken_0x2edfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edfcc) {
            ctx->pc = 0x2EDFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDFCCu;
            // 0x2edfd0: 0x8c4f0010  lw          $t7, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDFB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edfb8;
        }
    }
    ctx->pc = 0x2EDFD4u;
label_2edfd4:
    // 0x2edfd4: 0xc0bb66c  jal         func_2ED9B0
    ctx->pc = 0x2EDFD4u;
    SET_GPR_U32(ctx, 31, 0x2EDFDCu);
    ctx->pc = 0x2ED9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED9B0u, 0x2EDFD4u, 0x2EDFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDFDCu;
label_2edfdc:
    // 0x2edfdc: 0x16020046  bne         $s0, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2EDFDCu;
    {
        const bool branch_taken_0x2edfdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFDCu;
        // 0x2edfe0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfdc) {
            ctx->pc = 0x2EE0F8u;
            goto label_2ee0f8;
        }
    }
    ctx->pc = 0x2EDFE4u;
    // 0x2edfe4: 0x24050892  addiu       $a1, $zero, 0x892
    ctx->pc = 0x2edfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2194));
    // 0x2edfe8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2edfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2edfec: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2edfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2edff0: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EDFF0u;
    SET_GPR_U32(ctx, 31, 0x2EDFF8u);
    ctx->pc = 0x2EDFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDFF0u;
    // 0x2edff4: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EDFF0u, 0x2EDFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDFF8u;
label_2edff8:
    // 0x2edff8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edff8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edffc: 0x25efeca8  addiu       $t7, $t7, -0x1358
    ctx->pc = 0x2edffcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee000: 0xade0003c  sw          $zero, 0x3C($t7)
    ctx->pc = 0x2ee000u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 60), GPR_U32(ctx, 0));
    // 0x2ee004: 0xade00024  sw          $zero, 0x24($t7)
    ctx->pc = 0x2ee004u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 36), GPR_U32(ctx, 0));
    // 0x2ee008: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee008u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2ee00c:
    // 0x2ee00c: 0x25edeca8  addiu       $t5, $t7, -0x1358
    ctx->pc = 0x2ee00cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee010: 0x8dae0030  lw          $t6, 0x30($t5)
    ctx->pc = 0x2ee010u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x2ee014: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2ee014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee018: 0x15cf0020  bne         $t6, $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EE018u;
    {
        const bool branch_taken_0x2ee018 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x2ee018) {
            ctx->pc = 0x2EE09Cu;
            goto label_2ee09c;
        }
    }
    ctx->pc = 0x2EE020u;
    // 0x2ee020: 0x95ae0034  lhu         $t6, 0x34($t5)
    ctx->pc = 0x2ee020u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 52)));
    // 0x2ee024: 0x95af001c  lhu         $t7, 0x1C($t5)
    ctx->pc = 0x2ee024u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x2ee028: 0x15cf001c  bne         $t6, $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EE028u;
    {
        const bool branch_taken_0x2ee028 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE028u;
        // 0x2ee02c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee028) {
            ctx->pc = 0x2EE09Cu;
            goto label_2ee09c;
        }
    }
    ctx->pc = 0x2EE030u;
    // 0x2ee030: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ee030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee034: 0xadaf0030  sw          $t7, 0x30($t5)
    ctx->pc = 0x2ee034u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 15));
    // 0x2ee038: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EE038u;
    SET_GPR_U32(ctx, 31, 0x2EE040u);
    ctx->pc = 0x2EE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE038u;
    // 0x2ee03c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EE038u, 0x2EE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE040u;
label_2ee040:
    // 0x2ee040: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE040u;
    {
        const bool branch_taken_0x2ee040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee040) {
            ctx->pc = 0x2EE068u;
            goto label_2ee068;
        }
    }
    ctx->pc = 0x2EE048u;
    // 0x2ee048: 0x8c4f0010  lw          $t7, 0x10($v0)
    ctx->pc = 0x2ee048u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2ee04c:
    // 0x2ee04c: 0x260e0001  addiu       $t6, $s0, 0x1
    ctx->pc = 0x2ee04cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ee050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ee050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee054: 0x39ef0009  xori        $t7, $t7, 0x9
    ctx->pc = 0x2ee054u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)9);
    // 0x2ee058: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EE058u;
    SET_GPR_U32(ctx, 31, 0x2EE060u);
    ctx->pc = 0x2EE05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE058u;
    // 0x2ee05c: 0x1cf800a  movz        $s0, $t6, $t7 (Delay Slot)
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EE058u, 0x2EE060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE060u;
label_2ee060:
    // 0x2ee060: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE060u;
    {
        const bool branch_taken_0x2ee060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee060) {
            ctx->pc = 0x2EE064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE060u;
            // 0x2ee064: 0x8c4f0010  lw          $t7, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE04Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee04c;
        }
    }
    ctx->pc = 0x2EE068u;
label_2ee068:
    // 0x2ee068: 0xc0bb66c  jal         func_2ED9B0
    ctx->pc = 0x2EE068u;
    SET_GPR_U32(ctx, 31, 0x2EE070u);
    ctx->pc = 0x2ED9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED9B0u, 0x2EE068u, 0x2EE070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE070u;
label_2ee070:
    // 0x2ee070: 0x1602001a  bne         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EE070u;
    {
        const bool branch_taken_0x2ee070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE070u;
        // 0x2ee074: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee070) {
            ctx->pc = 0x2EE0DCu;
            goto label_2ee0dc;
        }
    }
    ctx->pc = 0x2EE078u;
    // 0x2ee078: 0x240508a5  addiu       $a1, $zero, 0x8A5
    ctx->pc = 0x2ee078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2213));
    // 0x2ee07c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2ee07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee080: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2ee080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2ee084: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE084u;
    SET_GPR_U32(ctx, 31, 0x2EE08Cu);
    ctx->pc = 0x2EE088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE084u;
    // 0x2ee088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE084u, 0x2EE08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE08Cu;
label_2ee08c:
    // 0x2ee08c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee08cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ee090: 0x25efeca8  addiu       $t7, $t7, -0x1358
    ctx->pc = 0x2ee090u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee094: 0xade0003c  sw          $zero, 0x3C($t7)
    ctx->pc = 0x2ee094u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 60), GPR_U32(ctx, 0));
    // 0x2ee098: 0x0  nop
    ctx->pc = 0x2ee098u;
    // NOP
label_2ee09c:
    // 0x2ee09c: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EE09Cu;
    SET_GPR_U32(ctx, 31, 0x2EE0A4u);
    ctx->pc = 0x2EE0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE09Cu;
    // 0x2ee0a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EE09Cu, 0x2EE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0A4u;
label_2ee0a4:
    // 0x2ee0a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE0A4u;
    {
        const bool branch_taken_0x2ee0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0A4u;
        // 0x2ee0a8: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0a4) {
            ctx->pc = 0x2EE0D4u;
            goto label_2ee0d4;
        }
    }
    ctx->pc = 0x2EE0ACu;
    // 0x2ee0ac: 0x8c4f0010  lw          $t7, 0x10($v0)
    ctx->pc = 0x2ee0acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2ee0b0:
    // 0x2ee0b0: 0x15f00004  bne         $t7, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE0B0u;
    {
        const bool branch_taken_0x2ee0b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ee0b0) {
            ctx->pc = 0x2EE0C4u;
            goto label_2ee0c4;
        }
    }
    ctx->pc = 0x2EE0B8u;
label_2ee0b8:
    // 0x2ee0b8: 0x904f0024  lbu         $t7, 0x24($v0)
    ctx->pc = 0x2ee0b8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2ee0bc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2ee0bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2ee0c0: 0xa04f0024  sb          $t7, 0x24($v0)
    ctx->pc = 0x2ee0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 15));
label_2ee0c4:
    // 0x2ee0c4: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EE0C4u;
    SET_GPR_U32(ctx, 31, 0x2EE0CCu);
    ctx->pc = 0x2EE0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0C4u;
    // 0x2ee0c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EE0C4u, 0x2EE0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0CCu;
label_2ee0cc:
    // 0x2ee0cc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EE0CCu;
    {
        const bool branch_taken_0x2ee0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee0cc) {
            ctx->pc = 0x2EE0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE0CCu;
            // 0x2ee0d0: 0x8c4f0010  lw          $t7, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE0B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee0b0;
        }
    }
    ctx->pc = 0x2EE0D4u;
label_2ee0d4:
    // 0x2ee0d4: 0x1000ff7b  b           . + 4 + (-0x85 << 2)
    ctx->pc = 0x2EE0D4u;
    {
        const bool branch_taken_0x2ee0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0D4u;
        // 0x2ee0d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0d4) {
            ctx->pc = 0x2EDEC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edec4;
        }
    }
    ctx->pc = 0x2EE0DCu;
label_2ee0dc:
    // 0x2ee0dc: 0x240508a9  addiu       $a1, $zero, 0x8A9
    ctx->pc = 0x2ee0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2217));
    // 0x2ee0e0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ee0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ee0e4:
    // 0x2ee0e4: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2ee0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2ee0e8: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE0E8u;
    SET_GPR_U32(ctx, 31, 0x2EE0F0u);
    ctx->pc = 0x2EE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0E8u;
    // 0x2ee0ec: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE0E8u, 0x2EE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0F0u;
label_2ee0f0:
    // 0x2ee0f0: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x2EE0F0u;
    {
        const bool branch_taken_0x2ee0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee0f0) {
            ctx->pc = 0x2EE09Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee09c;
        }
    }
    ctx->pc = 0x2EE0F8u;
label_2ee0f8:
    // 0x2ee0f8: 0x24050896  addiu       $a1, $zero, 0x896
    ctx->pc = 0x2ee0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2198));
    // 0x2ee0fc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ee0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ee100: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2ee100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2ee104: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE104u;
    SET_GPR_U32(ctx, 31, 0x2EE10Cu);
    ctx->pc = 0x2EE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE104u;
    // 0x2ee108: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE104u, 0x2EE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE10Cu;
label_2ee10c:
    // 0x2ee10c: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
    ctx->pc = 0x2EE10Cu;
    {
        const bool branch_taken_0x2ee10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE10Cu;
        // 0x2ee110: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee10c) {
            ctx->pc = 0x2EE00Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee00c;
        }
    }
    ctx->pc = 0x2EE114u;
label_2ee114:
    // 0x2ee114: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x2EE114u;
    {
        const bool branch_taken_0x2ee114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE114u;
        // 0x2ee118: 0xae0f0050  sw          $t7, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee114) {
            ctx->pc = 0x2EDF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf64;
        }
    }
    ctx->pc = 0x2EE11Cu;
    // 0x2ee11c: 0x0  nop
    ctx->pc = 0x2ee11cu;
    // NOP
label_2ee120:
    // 0x2ee120: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee120u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ee124: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2ee124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee128: 0x25f4eca8  addiu       $s4, $t7, -0x1358
    ctx->pc = 0x2ee128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee12c: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x2ee12cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ee130: 0x12700059  beq         $s3, $s0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2EE130u;
    {
        const bool branch_taken_0x2ee130 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x2EE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE130u;
        // 0x2ee134: 0x2a6f0003  slti        $t7, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee130) {
            ctx->pc = 0x2EE298u;
            goto label_2ee298;
        }
    }
    ctx->pc = 0x2EE138u;
    // 0x2ee138: 0x11e00025  beqz        $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x2EE138u;
    {
        const bool branch_taken_0x2ee138 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE138u;
        // 0x2ee13c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee138) {
            ctx->pc = 0x2EE1D0u;
            goto label_2ee1d0;
        }
    }
    ctx->pc = 0x2EE140u;
    // 0x2ee140: 0x166fff89  bne         $s3, $t7, . + 4 + (-0x77 << 2)
    ctx->pc = 0x2EE140u;
    {
        const bool branch_taken_0x2ee140 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE140u;
        // 0x2ee144: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee140) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE148u;
    // 0x2ee148: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2EE148u;
    SET_GPR_U32(ctx, 31, 0x2EE150u);
    ctx->pc = 0x2EE14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE148u;
    // 0x2ee14c: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2EE148u, 0x2EE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE150u;
label_2ee150:
    // 0x2ee150: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ee150u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ee154: 0x144fff84  bne         $v0, $t7, . + 4 + (-0x7C << 2)
    ctx->pc = 0x2EE154u;
    {
        const bool branch_taken_0x2ee154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE154u;
        // 0x2ee158: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee154) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE15Cu;
    // 0x2ee15c: 0xae800050  sw          $zero, 0x50($s4)
    ctx->pc = 0x2ee15cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 0));
    // 0x2ee160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ee160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee164: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2ee164u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2ee168: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EE168u;
    SET_GPR_U32(ctx, 31, 0x2EE170u);
    ctx->pc = 0x2EE16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE168u;
    // 0x2ee16c: 0x26921458  addiu       $s2, $s4, 0x1458 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 5208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EE168u, 0x2EE170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE170u;
label_2ee170:
    // 0x2ee170: 0x26310db8  addiu       $s1, $s1, 0xDB8
    ctx->pc = 0x2ee170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3512));
    // 0x2ee174: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x2ee174u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee178: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee178u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee17c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee180: 0x24e70de8  addiu       $a3, $a3, 0xDE8
    ctx->pc = 0x2ee180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3560));
    // 0x2ee184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee188: 0x24050741  addiu       $a1, $zero, 0x741
    ctx->pc = 0x2ee188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1857));
    // 0x2ee18c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE18Cu;
    SET_GPR_U32(ctx, 31, 0x2EE194u);
    ctx->pc = 0x2EE190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE18Cu;
    // 0x2ee190: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE18Cu, 0x2EE194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE194u;
label_2ee194:
    // 0x2ee194: 0x92070008  lbu         $a3, 0x8($s0)
    ctx->pc = 0x2ee194u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ee198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ee198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee19c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2ee19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee1a0: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EE1A0u;
    SET_GPR_U32(ctx, 31, 0x2EE1A8u);
    ctx->pc = 0x2EE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE1A0u;
    // 0x2ee1a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EE1A0u, 0x2EE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE1A8u;
label_2ee1a8:
    // 0x2ee1a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ee1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1ac: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EE1ACu;
    SET_GPR_U32(ctx, 31, 0x2EE1B4u);
    ctx->pc = 0x2EE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE1ACu;
    // 0x2ee1b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EE1ACu, 0x2EE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE1B4u;
label_2ee1b4:
    // 0x2ee1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1b8: 0x24050744  addiu       $a1, $zero, 0x744
    ctx->pc = 0x2ee1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1860));
    // 0x2ee1bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ee1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ee1c0: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE1C0u;
    SET_GPR_U32(ctx, 31, 0x2EE1C8u);
    ctx->pc = 0x2EE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE1C0u;
    // 0x2ee1c4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE1C0u, 0x2EE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE1C8u;
label_2ee1c8:
    // 0x2ee1c8: 0x1000ff66  b           . + 4 + (-0x9A << 2)
    ctx->pc = 0x2EE1C8u;
    {
        const bool branch_taken_0x2ee1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1C8u;
        // 0x2ee1cc: 0xae930050  sw          $s3, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1c8) {
            ctx->pc = 0x2EDF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf64;
        }
    }
    ctx->pc = 0x2EE1D0u;
label_2ee1d0:
    // 0x2ee1d0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x2ee1d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee1d4: 0x166fff64  bne         $s3, $t7, . + 4 + (-0x9C << 2)
    ctx->pc = 0x2EE1D4u;
    {
        const bool branch_taken_0x2ee1d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1D4u;
        // 0x2ee1d8: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1d4) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE1DCu;
    // 0x2ee1dc: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2EE1DCu;
    SET_GPR_U32(ctx, 31, 0x2EE1E4u);
    ctx->pc = 0x2EE1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE1DCu;
    // 0x2ee1e0: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2EE1DCu, 0x2EE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE1E4u;
label_2ee1e4:
    // 0x2ee1e4: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ee1e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ee1e8: 0x144fff5f  bne         $v0, $t7, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x2EE1E8u;
    {
        const bool branch_taken_0x2ee1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1E8u;
        // 0x2ee1ec: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1e8) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE1F0u;
    // 0x2ee1f0: 0xc0bba16  jal         func_2EE858
    ctx->pc = 0x2EE1F0u;
    SET_GPR_U32(ctx, 31, 0x2EE1F8u);
    ctx->pc = 0x2EE858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE858u, 0x2EE1F0u, 0x2EE1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE1F8u;
label_2ee1f8:
    // 0x2ee1f8: 0xc0bbc74  jal         func_2EF1D0
    ctx->pc = 0x2EE1F8u;
    SET_GPR_U32(ctx, 31, 0x2EE200u);
    ctx->pc = 0x2EF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF1D0u, 0x2EE1F8u, 0x2EE200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE200u;
label_2ee200:
    // 0x2ee200: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE200u;
    {
        const bool branch_taken_0x2ee200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee200) {
            ctx->pc = 0x2EE204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE200u;
            // 0x2ee204: 0x928f03b3  lbu         $t7, 0x3B3($s4) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 947)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE238u;
            goto label_2ee238;
        }
    }
    ctx->pc = 0x2EE208u;
    // 0x2ee208: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ee208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ee20c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ee20cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ee210: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2ee210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
label_2ee214:
    // 0x2ee214: 0x25080a10  addiu       $t0, $t0, 0xA10
    ctx->pc = 0x2ee214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2576));
label_2ee218:
    // 0x2ee218: 0x24050790  addiu       $a1, $zero, 0x790
    ctx->pc = 0x2ee218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    // 0x2ee21c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ee21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee220: 0x2407d8f0  addiu       $a3, $zero, -0x2710
    ctx->pc = 0x2ee220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
    // 0x2ee224: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2EE224u;
    SET_GPR_U32(ctx, 31, 0x2EE22Cu);
    ctx->pc = 0x2EE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE224u;
    // 0x2ee228: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2EE224u, 0x2EE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE22Cu;
label_2ee22c:
    // 0x2ee22c: 0x1000ff4e  b           . + 4 + (-0xB2 << 2)
    ctx->pc = 0x2EE22Cu;
    {
        const bool branch_taken_0x2ee22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE22Cu;
        // 0x2ee230: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee22c) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE234u;
    // 0x2ee234: 0x0  nop
    ctx->pc = 0x2ee234u;
    // NOP
label_2ee238:
    // 0x2ee238: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ee238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee23c: 0x162f0005  bne         $s1, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE23Cu;
    {
        const bool branch_taken_0x2ee23c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE23Cu;
        // 0x2ee240: 0x31ef00ff  andi        $t7, $t7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee23c) {
            ctx->pc = 0x2EE254u;
            goto label_2ee254;
        }
    }
    ctx->pc = 0x2EE244u;
    // 0x2ee244: 0xc0bc644  jal         func_2F1910
    ctx->pc = 0x2EE244u;
    SET_GPR_U32(ctx, 31, 0x2EE24Cu);
    ctx->pc = 0x2F1910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1910u, 0x2EE244u, 0x2EE24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE24Cu;
label_2ee24c:
    // 0x2ee24c: 0x928f03b3  lbu         $t7, 0x3B3($s4)
    ctx->pc = 0x2ee24cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 947)));
    // 0x2ee250: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x2ee250u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
label_2ee254:
    // 0x2ee254: 0x15f0ff44  bne         $t7, $s0, . + 4 + (-0xBC << 2)
    ctx->pc = 0x2EE254u;
    {
        const bool branch_taken_0x2ee254 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x2EE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE254u;
        // 0x2ee258: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee254) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE25Cu;
    // 0x2ee25c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ee25cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ee260: 0x2405079c  addiu       $a1, $zero, 0x79C
    ctx->pc = 0x2ee260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1948));
    // 0x2ee264: 0x26100db8  addiu       $s0, $s0, 0xDB8
    ctx->pc = 0x2ee264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3512));
    // 0x2ee268: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ee268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee270: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE270u;
    SET_GPR_U32(ctx, 31, 0x2EE278u);
    ctx->pc = 0x2EE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE270u;
    // 0x2ee274: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE270u, 0x2EE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE278u;
label_2ee278:
    // 0x2ee278: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee278u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee280: 0x2405079d  addiu       $a1, $zero, 0x79D
    ctx->pc = 0x2ee280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1949));
    // 0x2ee284: 0x24e70e00  addiu       $a3, $a3, 0xE00
    ctx->pc = 0x2ee284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3584));
    // 0x2ee288: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE288u;
    SET_GPR_U32(ctx, 31, 0x2EE290u);
    ctx->pc = 0x2EE28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE288u;
    // 0x2ee28c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE288u, 0x2EE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE290u;
label_2ee290:
    // 0x2ee290: 0x1000ff34  b           . + 4 + (-0xCC << 2)
    ctx->pc = 0x2EE290u;
    {
        const bool branch_taken_0x2ee290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE290u;
        // 0x2ee294: 0xae910050  sw          $s1, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee290) {
            ctx->pc = 0x2EDF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf64;
        }
    }
    ctx->pc = 0x2EE298u;
label_2ee298:
    // 0x2ee298: 0x269203e0  addiu       $s2, $s4, 0x3E0
    ctx->pc = 0x2ee298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 992));
    // 0x2ee29c: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2EE29Cu;
    SET_GPR_U32(ctx, 31, 0x2EE2A4u);
    ctx->pc = 0x2EE2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE29Cu;
    // 0x2ee2a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2EE29Cu, 0x2EE2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2A4u;
label_2ee2a4:
    // 0x2ee2a4: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ee2a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ee2a8: 0x144fff2f  bne         $v0, $t7, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x2EE2A8u;
    {
        const bool branch_taken_0x2ee2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2A8u;
        // 0x2ee2ac: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2a8) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE2B0u;
    // 0x2ee2b0: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x2ee2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ee2b4: 0xae800050  sw          $zero, 0x50($s4)
    ctx->pc = 0x2ee2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 0));
    // 0x2ee2b8: 0x8e8f03d0  lw          $t7, 0x3D0($s4)
    ctx->pc = 0x2ee2b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 976)));
    // 0x2ee2bc: 0x15e00030  bnez        $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x2EE2BCu;
    {
        const bool branch_taken_0x2ee2bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2BCu;
        // 0x2ee2c0: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2bc) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE2C4u;
    // 0x2ee2c4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2ee2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ee2c8: 0x8e8503a4  lw          $a1, 0x3A4($s4)
    ctx->pc = 0x2ee2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 932)));
    // 0x2ee2cc: 0xc0bc562  jal         func_2F1588
    ctx->pc = 0x2EE2CCu;
    SET_GPR_U32(ctx, 31, 0x2EE2D4u);
    ctx->pc = 0x2EE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2CCu;
    // 0x2ee2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1588u, 0x2EE2CCu, 0x2EE2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2D4u;
label_2ee2d4:
    // 0x2ee2d4: 0xae8203d0  sw          $v0, 0x3D0($s4)
    ctx->pc = 0x2ee2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 976), GPR_U32(ctx, 2));
    // 0x2ee2d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ee2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ee2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2e0: 0xc089056  jal         func_224158
    ctx->pc = 0x2EE2E0u;
    SET_GPR_U32(ctx, 31, 0x2EE2E8u);
    ctx->pc = 0x2EE2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2E0u;
    // 0x2ee2e4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224158u, 0x2EE2E0u, 0x2EE2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2E8u;
label_2ee2e8:
    // 0x2ee2e8: 0x8e8803a4  lw          $t0, 0x3A4($s4)
    ctx->pc = 0x2ee2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 932)));
    // 0x2ee2ec: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ee2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ee2f0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee2f4: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2ee2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2ee2f8: 0x24e70e18  addiu       $a3, $a3, 0xE18
    ctx->pc = 0x2ee2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3608));
    // 0x2ee2fc: 0x2405075c  addiu       $a1, $zero, 0x75C
    ctx->pc = 0x2ee2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1884));
    // 0x2ee300: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE300u;
    SET_GPR_U32(ctx, 31, 0x2EE308u);
    ctx->pc = 0x2EE304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE300u;
    // 0x2ee304: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE300u, 0x2EE308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE308u;
label_2ee308:
    // 0x2ee308: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2ee308u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee30c:
    // 0x2ee30c: 0xae8f03d4  sw          $t7, 0x3D4($s4)
    ctx->pc = 0x2ee30cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 980), GPR_U32(ctx, 15));
label_2ee310:
    // 0x2ee310: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee310u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ee314: 0x25eeeca8  addiu       $t6, $t7, -0x1358
    ctx->pc = 0x2ee314u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee318: 0x8dcf03d4  lw          $t7, 0x3D4($t6)
    ctx->pc = 0x2ee318u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 980)));
    // 0x2ee31c: 0x11e0ff11  beqz        $t7, . + 4 + (-0xEF << 2)
    ctx->pc = 0x2EE31Cu;
    {
        const bool branch_taken_0x2ee31c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE31Cu;
        // 0x2ee320: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee31c) {
            ctx->pc = 0x2EDF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf64;
        }
    }
    ctx->pc = 0x2EE324u;
    // 0x2ee324: 0x8dc90384  lw          $t1, 0x384($t6)
    ctx->pc = 0x2ee324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 900)));
    // 0x2ee328: 0xadcf03d4  sw          $t7, 0x3D4($t6)
    ctx->pc = 0x2ee328u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 980), GPR_U32(ctx, 15));
    // 0x2ee32c: 0x1e9782b  sltu        $t7, $t7, $t1
    ctx->pc = 0x2ee32cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2ee330: 0x15e0ff0d  bnez        $t7, . + 4 + (-0xF3 << 2)
    ctx->pc = 0x2EE330u;
    {
        const bool branch_taken_0x2ee330 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE330u;
        // 0x2ee334: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee330) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE338u;
    // 0x2ee338: 0x8dcf03d8  lw          $t7, 0x3D8($t6)
    ctx->pc = 0x2ee338u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 984)));
    // 0x2ee33c: 0x25ea0001  addiu       $t2, $t7, 0x1
    ctx->pc = 0x2ee33cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2ee340: 0x294f0005  slti        $t7, $t2, 0x5
    ctx->pc = 0x2ee340u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ee344: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE344u;
    {
        const bool branch_taken_0x2ee344 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE344u;
        // 0x2ee348: 0xadca03d8  sw          $t2, 0x3D8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 984), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee344) {
            ctx->pc = 0x2EE378u;
            goto label_2ee378;
        }
    }
    ctx->pc = 0x2EE34Cu;
    // 0x2ee34c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ee34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ee350: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ee350u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ee354: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2ee354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2ee358: 0x25080e28  addiu       $t0, $t0, 0xE28
    ctx->pc = 0x2ee358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3624));
    // 0x2ee35c: 0x24050773  addiu       $a1, $zero, 0x773
    ctx->pc = 0x2ee35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1907));
    // 0x2ee360: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ee360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee364: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2EE364u;
    SET_GPR_U32(ctx, 31, 0x2EE36Cu);
    ctx->pc = 0x2EE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE364u;
    // 0x2ee368: 0x2407d8ec  addiu       $a3, $zero, -0x2714 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2EE364u, 0x2EE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE36Cu;
label_2ee36c:
    // 0x2ee36c: 0x1000fefe  b           . + 4 + (-0x102 << 2)
    ctx->pc = 0x2EE36Cu;
    {
        const bool branch_taken_0x2ee36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE36Cu;
        // 0x2ee370: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee36c) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE374u;
    // 0x2ee374: 0x0  nop
    ctx->pc = 0x2ee374u;
    // NOP
label_2ee378:
    // 0x2ee378: 0x1000fefa  b           . + 4 + (-0x106 << 2)
    ctx->pc = 0x2EE378u;
    {
        const bool branch_taken_0x2ee378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE378u;
        // 0x2ee37c: 0xadc003d0  sw          $zero, 0x3D0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee378) {
            ctx->pc = 0x2EDF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf64;
        }
    }
    ctx->pc = 0x2EE380u;
label_2ee380:
    // 0x2ee380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ee380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ee384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee388: 0xc08909c  jal         func_224270
    ctx->pc = 0x2EE388u;
    SET_GPR_U32(ctx, 31, 0x2EE390u);
    ctx->pc = 0x2EE38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE388u;
    // 0x2ee38c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224270u, 0x2EE388u, 0x2EE390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE390u;
label_2ee390:
    // 0x2ee390: 0x1840ffdf  blez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2EE390u;
    {
        const bool branch_taken_0x2ee390 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE390u;
        // 0x2ee394: 0x268503a4  addiu       $a1, $s4, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee390) {
            ctx->pc = 0x2EE310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee310;
        }
    }
    ctx->pc = 0x2EE398u;
    // 0x2ee398: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ee398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ee39c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3a0: 0xc0bc544  jal         func_2F1510
    ctx->pc = 0x2EE3A0u;
    SET_GPR_U32(ctx, 31, 0x2EE3A8u);
    ctx->pc = 0x2EE3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE3A0u;
    // 0x2ee3a4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1510u, 0x2EE3A0u, 0x2EE3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE3A8u;
label_2ee3a8:
    // 0x2ee3a8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ee3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ee3ac: 0x93a60053  lbu         $a2, 0x53($sp)
    ctx->pc = 0x2ee3acu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 83)));
    // 0x2ee3b0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ee3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ee3b4: 0x93a70052  lbu         $a3, 0x52($sp)
    ctx->pc = 0x2ee3b4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 82)));
    // 0x2ee3b8: 0x24a50e40  addiu       $a1, $a1, 0xE40
    ctx->pc = 0x2ee3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3648));
    // 0x2ee3bc: 0x93a80051  lbu         $t0, 0x51($sp)
    ctx->pc = 0x2ee3bcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
    // 0x2ee3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3c4: 0x93a90050  lbu         $t1, 0x50($sp)
    ctx->pc = 0x2ee3c4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee3c8: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EE3C8u;
    SET_GPR_U32(ctx, 31, 0x2EE3D0u);
    ctx->pc = 0x2EE3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE3C8u;
    // 0x2ee3cc: 0x26100db8  addiu       $s0, $s0, 0xDB8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EE3C8u, 0x2EE3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE3D0u;
label_2ee3d0:
    // 0x2ee3d0: 0x97aa0000  lhu         $t2, 0x0($sp)
    ctx->pc = 0x2ee3d0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee3d4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee3d8: 0x8e8803a4  lw          $t0, 0x3A4($s4)
    ctx->pc = 0x2ee3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 932)));
    // 0x2ee3dc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ee3dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3e0: 0x24e70e50  addiu       $a3, $a3, 0xE50
    ctx->pc = 0x2ee3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3664));
    // 0x2ee3e4: 0x24050766  addiu       $a1, $zero, 0x766
    ctx->pc = 0x2ee3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1894));
    // 0x2ee3e8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ee3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ee3ec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE3ECu;
    SET_GPR_U32(ctx, 31, 0x2EE3F4u);
    ctx->pc = 0x2EE3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE3ECu;
    // 0x2ee3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE3ECu, 0x2EE3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE3F4u;
label_2ee3f4:
    // 0x2ee3f4: 0xc089014  jal         func_224050
    ctx->pc = 0x2EE3F4u;
    SET_GPR_U32(ctx, 31, 0x2EE3FCu);
    ctx->pc = 0x2EE3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE3F4u;
    // 0x2ee3f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x2EE3F4u, 0x2EE3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE3FCu;
label_2ee3fc:
    // 0x2ee3fc: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x2ee3fcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee400: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ee400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee404: 0x8e870384  lw          $a3, 0x384($s4)
    ctx->pc = 0x2ee404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 900)));
    // 0x2ee408: 0xc088fbe  jal         func_223EF8
    ctx->pc = 0x2EE408u;
    SET_GPR_U32(ctx, 31, 0x2EE410u);
    ctx->pc = 0x2EE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE408u;
    // 0x2ee40c: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EF8u, 0x2EE408u, 0x2EE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE410u;
label_2ee410:
    // 0x2ee410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee414: 0x2405076b  addiu       $a1, $zero, 0x76B
    ctx->pc = 0x2ee414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1899));
    // 0x2ee418: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ee418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee41c: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE41Cu;
    SET_GPR_U32(ctx, 31, 0x2EE424u);
    ctx->pc = 0x2EE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE41Cu;
    // 0x2ee420: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE41Cu, 0x2EE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE424u;
label_2ee424:
    // 0x2ee424: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee42c: 0x2405076c  addiu       $a1, $zero, 0x76C
    ctx->pc = 0x2ee42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1900));
    // 0x2ee430: 0x24e70e00  addiu       $a3, $a3, 0xE00
    ctx->pc = 0x2ee430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3584));
    // 0x2ee434: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE434u;
    SET_GPR_U32(ctx, 31, 0x2EE43Cu);
    ctx->pc = 0x2EE438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE434u;
    // 0x2ee438: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE434u, 0x2EE43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE43Cu;
label_2ee43c:
    // 0x2ee43c: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x2EE43Cu;
    {
        const bool branch_taken_0x2ee43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE43Cu;
        // 0x2ee440: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee43c) {
            ctx->pc = 0x2EE30Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee30c;
        }
    }
    ctx->pc = 0x2EE444u;
    // 0x2ee444: 0x0  nop
    ctx->pc = 0x2ee444u;
    // NOP
label_2ee448:
    // 0x2ee448: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee448u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ee44c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ee44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ee450: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee450u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee454: 0x8de8eca8  lw          $t0, -0x1358($t7)
    ctx->pc = 0x2ee454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2ee458: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2ee458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2ee45c: 0x24e70e70  addiu       $a3, $a3, 0xE70
    ctx->pc = 0x2ee45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3696));
    // 0x2ee460: 0x2405087f  addiu       $a1, $zero, 0x87F
    ctx->pc = 0x2ee460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2175));
    // 0x2ee464: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE464u;
    SET_GPR_U32(ctx, 31, 0x2EE46Cu);
    ctx->pc = 0x2EE468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE464u;
    // 0x2ee468: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE464u, 0x2EE46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE46Cu;
label_2ee46c:
    // 0x2ee46c: 0x1000febe  b           . + 4 + (-0x142 << 2)
    ctx->pc = 0x2EE46Cu;
    {
        const bool branch_taken_0x2ee46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE46Cu;
        // 0x2ee470: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee46c) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE474u;
label_2ee474:
    // 0x2ee474: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee474u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ee478: 0x25f1eca8  addiu       $s1, $t7, -0x1358
    ctx->pc = 0x2ee478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee47c: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x2ee47cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ee480:
    // 0x2ee480: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2ee480u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ee484: 0x15cffeb8  bne         $t6, $t7, . + 4 + (-0x148 << 2)
    ctx->pc = 0x2EE484u;
    {
        const bool branch_taken_0x2ee484 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE484u;
        // 0x2ee488: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee484) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE48Cu;
    // 0x2ee48c: 0xc0bb670  jal         func_2ED9C0
    ctx->pc = 0x2EE48Cu;
    SET_GPR_U32(ctx, 31, 0x2EE494u);
    ctx->pc = 0x2EE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE48Cu;
    // 0x2ee490: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED9C0u, 0x2EE48Cu, 0x2EE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE494u;
label_2ee494:
    // 0x2ee494: 0x8e2f0378  lw          $t7, 0x378($s1)
    ctx->pc = 0x2ee494u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 888)));
    // 0x2ee498: 0x544ffeb3  bnel        $v0, $t7, . + 4 + (-0x14D << 2)
    ctx->pc = 0x2EE498u;
    {
        const bool branch_taken_0x2ee498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x2ee498) {
            ctx->pc = 0x2EE49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE498u;
            // 0x2ee49c: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE4A0u;
    // 0x2ee4a0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ee4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ee4a4: 0x240507ae  addiu       $a1, $zero, 0x7AE
    ctx->pc = 0x2ee4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1966));
    // 0x2ee4a8: 0x26100db8  addiu       $s0, $s0, 0xDB8
    ctx->pc = 0x2ee4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3512));
    // 0x2ee4ac: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2ee4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ee4b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee4b4: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE4B4u;
    SET_GPR_U32(ctx, 31, 0x2EE4BCu);
    ctx->pc = 0x2EE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE4B4u;
    // 0x2ee4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE4B4u, 0x2EE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE4BCu;
label_2ee4bc:
    // 0x2ee4bc: 0xc0bb6fa  jal         func_2EDBE8
    ctx->pc = 0x2EE4BCu;
    SET_GPR_U32(ctx, 31, 0x2EE4C4u);
    ctx->pc = 0x2EE4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE4BCu;
    // 0x2ee4c0: 0x8e2403dc  lw          $a0, 0x3DC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 988)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDBE8u, 0x2EE4BCu, 0x2EE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE4C4u;
label_2ee4c4:
    // 0x2ee4c4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee4c8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ee4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2ee4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee4d0: 0x24e70e88  addiu       $a3, $a3, 0xE88
    ctx->pc = 0x2ee4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3720));
    // 0x2ee4d4: 0x240507b3  addiu       $a1, $zero, 0x7B3
    ctx->pc = 0x2ee4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1971));
    // 0x2ee4d8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ee4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ee4dc:
    // 0x2ee4dc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE4DCu;
    SET_GPR_U32(ctx, 31, 0x2EE4E4u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE4DCu, 0x2EE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE4E4u;
label_2ee4e4:
    // 0x2ee4e4: 0x1000fea0  b           . + 4 + (-0x160 << 2)
    ctx->pc = 0x2EE4E4u;
    {
        const bool branch_taken_0x2ee4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4E4u;
        // 0x2ee4e8: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4e4) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE4ECu;
    // 0x2ee4ec: 0x0  nop
    ctx->pc = 0x2ee4ecu;
    // NOP
label_2ee4f0:
    // 0x2ee4f0: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee4f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ee4f4: 0x25f1eca8  addiu       $s1, $t7, -0x1358
    ctx->pc = 0x2ee4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee4f8: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x2ee4f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ee4fc: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ee4fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ee500: 0x11cf0034  beq         $t6, $t7, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EE500u;
    {
        const bool branch_taken_0x2ee500 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EE504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE500u;
        // 0x2ee504: 0x29cf0006  slti        $t7, $t6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee500) {
            ctx->pc = 0x2EE5D4u;
            goto label_2ee5d4;
        }
    }
    ctx->pc = 0x2EE508u;
    // 0x2ee508: 0x11e00023  beqz        $t7, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EE508u;
    {
        const bool branch_taken_0x2ee508 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE508u;
        // 0x2ee50c: 0x240f0006  addiu       $t7, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee508) {
            ctx->pc = 0x2EE598u;
            goto label_2ee598;
        }
    }
    ctx->pc = 0x2EE510u;
    // 0x2ee510: 0x15c0fe95  bnez        $t6, . + 4 + (-0x16B << 2)
    ctx->pc = 0x2EE510u;
    {
        const bool branch_taken_0x2ee510 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE510u;
        // 0x2ee514: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee510) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE518u;
    // 0x2ee518: 0xc0bb670  jal         func_2ED9C0
    ctx->pc = 0x2EE518u;
    SET_GPR_U32(ctx, 31, 0x2EE520u);
    ctx->pc = 0x2EE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE518u;
    // 0x2ee51c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED9C0u, 0x2EE518u, 0x2EE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE520u;
label_2ee520:
    // 0x2ee520: 0x8e2f00b4  lw          $t7, 0xB4($s1)
    ctx->pc = 0x2ee520u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2ee524: 0x144ffe90  bne         $v0, $t7, . + 4 + (-0x170 << 2)
    ctx->pc = 0x2EE524u;
    {
        const bool branch_taken_0x2ee524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE524u;
        // 0x2ee528: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee524) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE52Cu;
    // 0x2ee52c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ee52cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ee530: 0x240507c1  addiu       $a1, $zero, 0x7C1
    ctx->pc = 0x2ee530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1985));
    // 0x2ee534: 0x26100db8  addiu       $s0, $s0, 0xDB8
    ctx->pc = 0x2ee534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3512));
    // 0x2ee538: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2ee538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ee53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee540: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE540u;
    SET_GPR_U32(ctx, 31, 0x2EE548u);
    ctx->pc = 0x2EE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE540u;
    // 0x2ee544: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE540u, 0x2EE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE548u;
label_2ee548:
    // 0x2ee548: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee54c: 0x240507c2  addiu       $a1, $zero, 0x7C2
    ctx->pc = 0x2ee54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1986));
    // 0x2ee550: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ee550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee554: 0x24e70ea0  addiu       $a3, $a3, 0xEA0
    ctx->pc = 0x2ee554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3744));
    // 0x2ee558: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE558u;
    SET_GPR_U32(ctx, 31, 0x2EE560u);
    ctx->pc = 0x2EE55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE558u;
    // 0x2ee55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE558u, 0x2EE560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE560u;
label_2ee560:
    // 0x2ee560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee564: 0x240507ca  addiu       $a1, $zero, 0x7CA
    ctx->pc = 0x2ee564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1994));
    // 0x2ee568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee56c: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE56Cu;
    SET_GPR_U32(ctx, 31, 0x2EE574u);
    ctx->pc = 0x2EE570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE56Cu;
    // 0x2ee570: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE56Cu, 0x2EE574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE574u;
label_2ee574:
    // 0x2ee574: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee578: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ee578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2ee57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee580: 0x24e70eb8  addiu       $a3, $a3, 0xEB8
    ctx->pc = 0x2ee580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3768));
    // 0x2ee584: 0x240507d0  addiu       $a1, $zero, 0x7D0
    ctx->pc = 0x2ee584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2ee588:
    // 0x2ee588: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE588u;
    SET_GPR_U32(ctx, 31, 0x2EE590u);
    ctx->pc = 0x2EE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE588u;
    // 0x2ee58c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE588u, 0x2EE590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE590u;
label_2ee590:
    // 0x2ee590: 0x1000fe4c  b           . + 4 + (-0x1B4 << 2)
    ctx->pc = 0x2EE590u;
    {
        const bool branch_taken_0x2ee590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE590u;
        // 0x2ee594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee590) {
            ctx->pc = 0x2EDEC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edec4;
        }
    }
    ctx->pc = 0x2EE598u;
label_2ee598:
    // 0x2ee598: 0x15cffe73  bne         $t6, $t7, . + 4 + (-0x18D << 2)
    ctx->pc = 0x2EE598u;
    {
        const bool branch_taken_0x2ee598 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE598u;
        // 0x2ee59c: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee598) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE5A0u;
    // 0x2ee5a0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ee5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ee5a4: 0x240507df  addiu       $a1, $zero, 0x7DF
    ctx->pc = 0x2ee5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2015));
    // 0x2ee5a8: 0x26100db8  addiu       $s0, $s0, 0xDB8
    ctx->pc = 0x2ee5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3512));
    // 0x2ee5ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5b4: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE5B4u;
    SET_GPR_U32(ctx, 31, 0x2EE5BCu);
    ctx->pc = 0x2EE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5B4u;
    // 0x2ee5b8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE5B4u, 0x2EE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE5BCu;
label_2ee5bc:
    // 0x2ee5bc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee5c0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ee5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2ee5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5c8: 0x24e70eb8  addiu       $a3, $a3, 0xEB8
    ctx->pc = 0x2ee5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3768));
    // 0x2ee5cc: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EE5CCu;
    {
        const bool branch_taken_0x2ee5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5CCu;
        // 0x2ee5d0: 0x240507e5  addiu       $a1, $zero, 0x7E5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2021));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5cc) {
            ctx->pc = 0x2EE588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee588;
        }
    }
    ctx->pc = 0x2EE5D4u;
label_2ee5d4:
    // 0x2ee5d4: 0x8e2f0054  lw          $t7, 0x54($s1)
    ctx->pc = 0x2ee5d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ee5d8: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2ee5d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee5dc: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x2ee5dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x2ee5e0: 0x15eefe60  bne         $t7, $t6, . + 4 + (-0x1A0 << 2)
    ctx->pc = 0x2EE5E0u;
    {
        const bool branch_taken_0x2ee5e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x2EE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5E0u;
        // 0x2ee5e4: 0xae2f0054  sw          $t7, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5e0) {
            ctx->pc = 0x2EDF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf64;
        }
    }
    ctx->pc = 0x2EE5E8u;
    // 0x2ee5e8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ee5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ee5ec: 0x240507d8  addiu       $a1, $zero, 0x7D8
    ctx->pc = 0x2ee5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2008));
    // 0x2ee5f0: 0x26100db8  addiu       $s0, $s0, 0xDB8
    ctx->pc = 0x2ee5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3512));
    // 0x2ee5f4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2ee5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ee5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5fc: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE5FCu;
    SET_GPR_U32(ctx, 31, 0x2EE604u);
    ctx->pc = 0x2EE600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5FCu;
    // 0x2ee600: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE5FCu, 0x2EE604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE604u;
label_2ee604:
    // 0x2ee604: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee60c: 0x240507d9  addiu       $a1, $zero, 0x7D9
    ctx->pc = 0x2ee60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2009));
    // 0x2ee610: 0x24e70ec8  addiu       $a3, $a3, 0xEC8
    ctx->pc = 0x2ee610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3784));
    // 0x2ee614: 0x1000ffb1  b           . + 4 + (-0x4F << 2)
    ctx->pc = 0x2EE614u;
    {
        const bool branch_taken_0x2ee614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE614u;
        // 0x2ee618: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee614) {
            ctx->pc = 0x2EE4DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee4dc;
        }
    }
    ctx->pc = 0x2EE61Cu;
    // 0x2ee61c: 0x0  nop
    ctx->pc = 0x2ee61cu;
    // NOP
label_2ee620:
    // 0x2ee620: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee620u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ee624: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ee624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee628: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x2ee628u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee62c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2ee62cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ee630: 0x15cf0022  bne         $t6, $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x2EE630u;
    {
        const bool branch_taken_0x2ee630 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE630u;
        // 0x2ee634: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee630) {
            ctx->pc = 0x2EE6BCu;
            goto label_2ee6bc;
        }
    }
    ctx->pc = 0x2EE638u;
    // 0x2ee638: 0xc0bb670  jal         func_2ED9C0
    ctx->pc = 0x2EE638u;
    SET_GPR_U32(ctx, 31, 0x2EE640u);
    ctx->pc = 0x2EE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE638u;
    // 0x2ee63c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED9C0u, 0x2EE638u, 0x2EE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE640u;
label_2ee640:
    // 0x2ee640: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x2ee640u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2ee644: 0x144f001d  bne         $v0, $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EE644u;
    {
        const bool branch_taken_0x2ee644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE644u;
        // 0x2ee648: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee644) {
            ctx->pc = 0x2EE6BCu;
            goto label_2ee6bc;
        }
    }
    ctx->pc = 0x2EE64Cu;
    // 0x2ee64c: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EE64Cu;
    SET_GPR_U32(ctx, 31, 0x2EE654u);
    ctx->pc = 0x2EE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE64Cu;
    // 0x2ee650: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EE64Cu, 0x2EE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE654u;
label_2ee654:
    // 0x2ee654: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE654u;
    {
        const bool branch_taken_0x2ee654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE654u;
        // 0x2ee658: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee654) {
            ctx->pc = 0x2EE684u;
            goto label_2ee684;
        }
    }
    ctx->pc = 0x2EE65Cu;
    // 0x2ee65c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2ee65cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_2ee660:
    // 0x2ee660: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ee660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee664: 0x240507f7  addiu       $a1, $zero, 0x7F7
    ctx->pc = 0x2ee664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2039));
    // 0x2ee668: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2ee668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ee66c: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EE66Cu;
    SET_GPR_U32(ctx, 31, 0x2EE674u);
    ctx->pc = 0x2EE670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE66Cu;
    // 0x2ee670: 0x26240db8  addiu       $a0, $s1, 0xDB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EE66Cu, 0x2EE674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE674u;
label_2ee674:
    // 0x2ee674: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EE674u;
    SET_GPR_U32(ctx, 31, 0x2EE67Cu);
    ctx->pc = 0x2EE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE674u;
    // 0x2ee678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EE674u, 0x2EE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE67Cu;
label_2ee67c:
    // 0x2ee67c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EE67Cu;
    {
        const bool branch_taken_0x2ee67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE67Cu;
        // 0x2ee680: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee67c) {
            ctx->pc = 0x2EE660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee660;
        }
    }
    ctx->pc = 0x2EE684u;
label_2ee684:
    // 0x2ee684: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ee684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ee688: 0x240507f9  addiu       $a1, $zero, 0x7F9
    ctx->pc = 0x2ee688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    // 0x2ee68c: 0x26100db8  addiu       $s0, $s0, 0xDB8
    ctx->pc = 0x2ee68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3512));
    // 0x2ee690: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ee690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ee694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee698: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EE698u;
    SET_GPR_U32(ctx, 31, 0x2EE6A0u);
    ctx->pc = 0x2EE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE698u;
    // 0x2ee69c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EE698u, 0x2EE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE6A0u;
label_2ee6a0:
    // 0x2ee6a0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ee6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ee6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6a8: 0x240507fa  addiu       $a1, $zero, 0x7FA
    ctx->pc = 0x2ee6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2042));
    // 0x2ee6ac: 0x24e70ee0  addiu       $a3, $a3, 0xEE0
    ctx->pc = 0x2ee6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3808));
    // 0x2ee6b0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE6B0u;
    SET_GPR_U32(ctx, 31, 0x2EE6B8u);
    ctx->pc = 0x2EE6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE6B0u;
    // 0x2ee6b4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE6B0u, 0x2EE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE6B8u;
label_2ee6b8:
    // 0x2ee6b8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee6b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2ee6bc:
    // 0x2ee6bc: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ee6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee6c0: 0x8e0e038c  lw          $t6, 0x38C($s0)
    ctx->pc = 0x2ee6c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x2ee6c4: 0x15c0fe28  bnez        $t6, . + 4 + (-0x1D8 << 2)
label_2ee6c8:
    if (ctx->pc == 0x2EE6C8u) {
        ctx->pc = 0x2EE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6C4u;
        // 0x2ee6c8: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE6CCu;
        goto label_fallthrough_0x2ee6c4;
    }
    ctx->pc = 0x2EE6C4u;
    {
        const bool branch_taken_0x2ee6c4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6C4u;
        // 0x2ee6c8: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6c4) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
label_fallthrough_0x2ee6c4:
    ctx->pc = 0x2EE6CCu;
    // 0x2ee6cc: 0xc0bc2c0  jal         func_2F0B00
    ctx->pc = 0x2EE6CCu;
    SET_GPR_U32(ctx, 31, 0x2EE6D4u);
    ctx->pc = 0x2F0B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B00u, 0x2EE6CCu, 0x2EE6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE6D4u;
label_2ee6d4:
    // 0x2ee6d4: 0x440fe23  bltz        $v0, . + 4 + (-0x1DD << 2)
    ctx->pc = 0x2EE6D4u;
    {
        const bool branch_taken_0x2ee6d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6D4u;
        // 0x2ee6d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6d4) {
            ctx->pc = 0x2EDF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf64;
        }
    }
    ctx->pc = 0x2EE6DCu;
    // 0x2ee6dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE6DCu;
    {
        const bool branch_taken_0x2ee6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6DCu;
        // 0x2ee6e0: 0x8e0e0004  lw          $t6, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6dc) {
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE6E4u;
    // 0x2ee6e4: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2ee6e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ee6e8: 0x11cffe1f  beq         $t6, $t7, . + 4 + (-0x1E1 << 2)
    ctx->pc = 0x2EE6E8u;
    {
        const bool branch_taken_0x2ee6e8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6E8u;
        // 0x2ee6ec: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6e8) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE6F0u;
label_2ee6f0:
    // 0x2ee6f0: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x2ee6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ee6f4: 0x11cffe1b  beq         $t6, $t7, . + 4 + (-0x1E5 << 2)
    ctx->pc = 0x2EE6F4u;
    {
        const bool branch_taken_0x2ee6f4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6F4u;
        // 0x2ee6f8: 0x2a2f00fb  slti        $t7, $s1, 0xFB (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)251) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6f4) {
            ctx->pc = 0x2EDF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf64;
        }
    }
    ctx->pc = 0x2EE6FCu;
    // 0x2ee6fc: 0x55e0000a  bnel        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EE6FCu;
    {
        const bool branch_taken_0x2ee6fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee6fc) {
            ctx->pc = 0x2EE700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE6FCu;
            // 0x2ee700: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE728u;
            goto label_2ee728;
        }
    }
    ctx->pc = 0x2EE704u;
    // 0x2ee704: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ee704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ee708: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ee708u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ee70c: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2ee70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2ee710: 0x25080ef8  addiu       $t0, $t0, 0xEF8
    ctx->pc = 0x2ee710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3832));
    // 0x2ee714: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ee714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee718: 0x24050829  addiu       $a1, $zero, 0x829
    ctx->pc = 0x2ee718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2089));
    // 0x2ee71c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee720: 0x1000fde6  b           . + 4 + (-0x21A << 2)
    ctx->pc = 0x2EE720u;
    {
        const bool branch_taken_0x2ee720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE720u;
        // 0x2ee724: 0x24078acb  addiu       $a3, $zero, -0x7535 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee720) {
            ctx->pc = 0x2EDEBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edebc;
        }
    }
    ctx->pc = 0x2EE728u;
label_2ee728:
    // 0x2ee728: 0xc0bc378  jal         func_2F0DE0
    ctx->pc = 0x2EE728u;
    SET_GPR_U32(ctx, 31, 0x2EE730u);
    ctx->pc = 0x2EE72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE728u;
    // 0x2ee72c: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0DE0u, 0x2EE728u, 0x2EE730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE730u;
label_2ee730:
    // 0x2ee730: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ee730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ee734: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2ee734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ee738: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EE738u;
    {
        const bool branch_taken_0x2ee738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE738u;
        // 0x2ee73c: 0x3c07ffff  lui         $a3, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee738) {
            ctx->pc = 0x2EE764u;
            goto label_2ee764;
        }
    }
    ctx->pc = 0x2EE740u;
    // 0x2ee740: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ee740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ee744: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ee744u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ee748: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x2ee748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x2ee74c: 0x25080dd0  addiu       $t0, $t0, 0xDD0
    ctx->pc = 0x2ee74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3536));
    // 0x2ee750: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ee750u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee754: 0x2405082f  addiu       $a1, $zero, 0x82F
    ctx->pc = 0x2ee754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2095));
    // 0x2ee758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee75c: 0x1000fdd7  b           . + 4 + (-0x229 << 2)
    ctx->pc = 0x2EE75Cu;
    {
        const bool branch_taken_0x2ee75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE75Cu;
        // 0x2ee760: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee75c) {
            ctx->pc = 0x2EDEBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edebc;
        }
    }
    ctx->pc = 0x2EE764u;
label_2ee764:
    // 0x2ee764: 0x1a20000e  blez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2EE764u;
    {
        const bool branch_taken_0x2ee764 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2EE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE764u;
        // 0x2ee768: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee764) {
            ctx->pc = 0x2EE7A0u;
            goto label_2ee7a0;
        }
    }
    ctx->pc = 0x2EE76Cu;
    // 0x2ee76c: 0xc0bc2f8  jal         func_2F0BE0
    ctx->pc = 0x2EE76Cu;
    SET_GPR_U32(ctx, 31, 0x2EE774u);
    ctx->pc = 0x2EE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE76Cu;
    // 0x2ee770: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0BE0u, 0x2EE76Cu, 0x2EE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE774u;
label_2ee774:
    // 0x2ee774: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2ee774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ee778: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x2ee778u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2ee77c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ee77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ee780: 0xc0bc1de  jal         func_2F0778
    ctx->pc = 0x2EE780u;
    SET_GPR_U32(ctx, 31, 0x2EE788u);
    ctx->pc = 0x2EE784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE780u;
    // 0x2ee784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0778u, 0x2EE780u, 0x2EE788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE788u;
label_2ee788:
    // 0x2ee788: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2ee788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ee78c: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EE78Cu;
    SET_GPR_U32(ctx, 31, 0x2EE794u);
    ctx->pc = 0x2EE790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE78Cu;
    // 0x2ee790: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EE78Cu, 0x2EE794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE794u;
label_2ee794:
    // 0x2ee794: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2ee794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ee798: 0xc0bc390  jal         func_2F0E40
    ctx->pc = 0x2EE798u;
    SET_GPR_U32(ctx, 31, 0x2EE7A0u);
    ctx->pc = 0x2EE79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE798u;
    // 0x2ee79c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E40u, 0x2EE798u, 0x2EE7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE7A0u;
label_2ee7a0:
    // 0x2ee7a0: 0x1620fdf1  bnez        $s1, . + 4 + (-0x20F << 2)
    ctx->pc = 0x2EE7A0u;
    {
        const bool branch_taken_0x2ee7a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7A0u;
        // 0x2ee7a4: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7a0) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE7A8u;
    // 0x2ee7a8: 0x8e0f0390  lw          $t7, 0x390($s0)
    ctx->pc = 0x2ee7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
    // 0x2ee7ac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ee7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee7b0: 0x55f1000e  bnel        $t7, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2EE7B0u;
    {
        const bool branch_taken_0x2ee7b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ee7b0) {
            ctx->pc = 0x2EE7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE7B0u;
            // 0x2ee7b4: 0x8e0f0388  lw          $t7, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE7ECu;
            goto label_2ee7ec;
        }
    }
    ctx->pc = 0x2EE7B8u;
    // 0x2ee7b8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2ee7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ee7bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee7c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee7c4: 0xc0bc1de  jal         func_2F0778
    ctx->pc = 0x2EE7C4u;
    SET_GPR_U32(ctx, 31, 0x2EE7CCu);
    ctx->pc = 0x2EE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE7C4u;
    // 0x2ee7c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0778u, 0x2EE7C4u, 0x2EE7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE7CCu;
label_2ee7cc:
    // 0x2ee7cc: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2ee7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ee7d0: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EE7D0u;
    SET_GPR_U32(ctx, 31, 0x2EE7D8u);
    ctx->pc = 0x2EE7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE7D0u;
    // 0x2ee7d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EE7D0u, 0x2EE7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE7D8u;
label_2ee7d8:
    // 0x2ee7d8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2ee7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ee7dc: 0xc0bc390  jal         func_2F0E40
    ctx->pc = 0x2EE7DCu;
    SET_GPR_U32(ctx, 31, 0x2EE7E4u);
    ctx->pc = 0x2EE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE7DCu;
    // 0x2ee7e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E40u, 0x2EE7DCu, 0x2EE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE7E4u;
label_2ee7e4:
    // 0x2ee7e4: 0x1000fde0  b           . + 4 + (-0x220 << 2)
    ctx->pc = 0x2EE7E4u;
    {
        const bool branch_taken_0x2ee7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7E4u;
        // 0x2ee7e8: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7e4) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE7ECu;
label_2ee7ec:
    // 0x2ee7ec: 0x960e0020  lhu         $t6, 0x20($s0)
    ctx->pc = 0x2ee7ecu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ee7f0: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE7F0u;
    {
        const bool branch_taken_0x2ee7f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7f0) {
            ctx->pc = 0x2EE7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE7F0u;
            // 0x2ee7f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE7F8u;
            goto label_2ee7f8;
        }
    }
    ctx->pc = 0x2EE7F8u;
label_2ee7f8:
    // 0x2ee7f8: 0x1cf001b  divu        $zero, $t6, $t7
    ctx->pc = 0x2ee7f8u;
    { uint32_t divisor = GPR_U32(ctx, 15); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x2ee7fc: 0x6810  mfhi        $t5
    ctx->pc = 0x2ee7fcu;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x2ee800: 0x15a0fdd9  bnez        $t5, . + 4 + (-0x227 << 2)
    ctx->pc = 0x2EE800u;
    {
        const bool branch_taken_0x2ee800 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE800u;
        // 0x2ee804: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee800) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE808u;
    // 0x2ee808: 0x8e0f0058  lw          $t7, 0x58($s0)
    ctx->pc = 0x2ee808u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2ee80c: 0x15e0fdd6  bnez        $t7, . + 4 + (-0x22A << 2)
    ctx->pc = 0x2EE80Cu;
    {
        const bool branch_taken_0x2ee80c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE80Cu;
        // 0x2ee810: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee80c) {
            ctx->pc = 0x2EDF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EE814u;
    // 0x2ee814: 0x8e0f03a0  lw          $t7, 0x3A0($s0)
    ctx->pc = 0x2ee814u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x2ee818: 0x55e0fe3e  bnel        $t7, $zero, . + 4 + (-0x1C2 << 2)
    ctx->pc = 0x2EE818u;
    {
        const bool branch_taken_0x2ee818 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee818) {
            ctx->pc = 0x2EE81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE818u;
            // 0x2ee81c: 0x8e0f0384  lw          $t7, 0x384($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee114;
        }
    }
    ctx->pc = 0x2EE820u;
    // 0x2ee820: 0x8e0f039c  lw          $t7, 0x39C($s0)
    ctx->pc = 0x2ee820u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x2ee824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee828: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2ee828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ee82c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee830: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2ee830u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2ee834: 0xae1103a0  sw          $s1, 0x3A0($s0)
    ctx->pc = 0x2ee834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 17));
    // 0x2ee838: 0xae0f039c  sw          $t7, 0x39C($s0)
    ctx->pc = 0x2ee838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 15));
    // 0x2ee83c: 0xc0bc1de  jal         func_2F0778
    ctx->pc = 0x2EE83Cu;
    SET_GPR_U32(ctx, 31, 0x2EE844u);
    ctx->pc = 0x2EE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE83Cu;
    // 0x2ee840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0778u, 0x2EE83Cu, 0x2EE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE844u;
label_2ee844:
    // 0x2ee844: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2ee844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ee848: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EE848u;
    SET_GPR_U32(ctx, 31, 0x2EE850u);
    ctx->pc = 0x2EE84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE848u;
    // 0x2ee84c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EE848u, 0x2EE850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE850u;
label_2ee850:
    // 0x2ee850: 0x1000fdbf  b           . + 4 + (-0x241 << 2)
    ctx->pc = 0x2EE850u;
    {
        const bool branch_taken_0x2ee850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE850u;
        // 0x2ee854: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee850) {
            ctx->pc = 0x2EDF50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edf50;
        }
    }
    ctx->pc = 0x2EE858u;
}
